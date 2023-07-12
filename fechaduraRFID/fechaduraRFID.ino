#include <RFID.h>
#include <SPI.h>
#include <Servo.h>
#include <IRremote.h>  

#define SS_PIN 10 // Slave selector RFID
#define RST_PIN 9 // Reset do RFID

#define SERVO_PIN 6 //Porta do Motor Servo

#define led_vermelho 2 //Porta do LED Vermelho
#define led_verde 3 //Porta do LED Verde

#define buzzer 7 //Porta do Buzzer 

int  ir_deger;

Servo servo;
RFID rfid(SS_PIN, RST_PIN);

boolean kart  = false;

int rfid_id[2][5] = {{51,20,69,168,202}, {211, 71, 168, 169, 149}}; //Definição do card ID pré definido 

// Podemos definir mais ID's caso necessário, porém é necessário criar um vetor bidimensional 

int RECV_PIN = 4; 

float armazenavalor; 

IRrecv irrecv(RECV_PIN); 

decode_results results; 

boolean seletor = false;

void fechar_porta() { /// Fecha a porta
  if(seletor  = true){
    servo.write(0);
    Serial.println("Porta Fechada.");
    delay(100);
    servo.write(180);
  }
}

void abrir_porta(){ // Função para abrir a fechadura 
    Serial.println("Seja bem-vindo!");
    delay(1000);
    digitalWrite(led_verde,  HIGH);
    delay(200);
    digitalWrite(led_vermelho, LOW);
    tone(buzzer,  3);
    delay(1000);
    noTone(buzzer);
    delay(100);
    servo.write(180); // Rotaciona o servo em 180 graus 
    delay(2000);
    Serial.println("Porta Aberta.");
    delay(10000);
    fechar_porta(); // Após 10 segundos ele tranca a fechadura
    digitalWrite(led_verde, LOW);
    digitalWrite(led_vermelho, HIGH);
}


void setup() {
  pinMode(led_vermelho,  OUTPUT);
  pinMode(led_verde, OUTPUT);
  pinMode(buzzer, OUTPUT);

  servo.attach(SERVO_PIN);

  Serial.begin(9600); // Inicialização do Monitor Serial
  Serial.println("Sistema Fechadura com RFID");
  irrecv.enableIRIn();

  digitalWrite(led_vermelho, HIGH); // Inicialmente a porta esta fechada
  SPI.begin();
  rfid.init();
}

void loop() {
  kart = true;
  servo.write(0); // Retorna o motor para o estado de fechado

  if (irrecv.decode(&results)) { 
    armazenavalor = (results.value); 
    if(armazenavalor == 2737486129){
      abrir_porta();
    }
    irrecv.resume(); //Le o próximo valor 
  } 

  if(rfid.isCard()){ // Verifica se há um cartão posicionado
    if(rfid.readCardSerial()){
      Serial.print("ID: ");
      delay(100);
    }
    
    for (int i =  0; i<5; i++){ // Printa o ID
      Serial.print(rfid.serNum[i]);
      Serial.print("");
      delay(100);
    }
    for (int i = 0; i<5; i++){
      if(rfid_id[0][i] != rfid.serNum[i]){ // Verifica o ID do cartão com o ID pré estabelecido
        kart = false;
        Serial.println("\nID incorreto.");
        digitalWrite(led_vermelho, HIGH);
        tone(buzzer,  3);
        delay(200);
        digitalWrite(led_vermelho, LOW);
        noTone(buzzer);
        delay(200);
        digitalWrite(led_vermelho, HIGH);
        tone(buzzer,  3);
        delay(200);
        digitalWrite(led_vermelho, LOW);
        noTone(buzzer);
        delay(1200);
        digitalWrite(led_vermelho, HIGH);
        return;
      }
    }
    

    Serial.println();
    delay(1000);
    abrir_porta();
    return;
  }
}
