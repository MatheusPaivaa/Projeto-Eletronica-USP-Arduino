# Fechadura RFID com Arduino 🚪🖥️

Desenvolvido para a disciplina Eletônica para Computação - SSC0180.

## Situação Inicial:

   Construção de um projeto de Software e Hardware com Arduino ou ESP32. 

## Descrição do projeto:

O projeto "Fechadura RFID com Arduino" é um sistema de controle de acesso que utiliza tecnologia RFID (Radio-Frequency Identification) e um microcontrolador Arduino para garantir a segurança e conveniência no acesso a uma porta. O sistema permite a entrada apenas para pessoas autorizadas, que possuam um cartão RFID registrado. É uma solução de baixo custo e segura para substituir chaves convencionais por cartões RFID personalizados.

## Componentes:

- **Módulo RFID Mfrc522:** Este módulo RFID permitirá a leitura dos cartões RFID e a comunicação com o Arduino.

- **Protoboard:** A protoboard servirá como uma placa de teste para facilitar a conexão dos componentes eletrônicos.

- **SG90 Micro-servo motor:** O servo motor será responsável pelo mecanismo de destravamento da fechadura da porta.

- **Bateria de 9v:** A fonte de alimentação de 9V fornecerá energia ao Arduino e aos demais componentes do projeto.

- **Sensor Infravermelho** O sensor IR receberá sinais infravermelhos para permitir o controle remoto da fechadura.

- **Led Vermelho:** Os LEDs vermelhos serão utilizados para indicar quando a porta está trancada ou quando ocorre uma falha no acesso.

- **Led Verde:** Os LEDs verdes serão utilizados para indicar quando a porta está destravada ou quando o acesso é autorizado.

- **Buzzer:** O buzzer emitirá um som para indicar eventos, como a falha no acesso ou a abertura da porta.

Esses componentes serão interligados e programados no Arduino para criar o sistema de controle de acesso por RFID, fornecendo segurança e conveniência na abertura da porta apenas para usuários autorizados.

## Escolha dos componentes:
| Quantidade    | Componentes   | Especificações | Valor R$  |
| :-------------: |:-------------:| :-------------: |---------:|
| 1x | Protoboard | Ter pelo menos 400 pontos | [R$ 0,28]() |
| 1x | Arduino UNO | Nenhuma especificação | [R$ 0,28]() |
| 1x | Buzzer | Suportar no mínimo 5v | [R$ 0,28]() |
| 1x | Led Verde: | Nenhuma especificação | [R$ 0,28]() |
| 1x | Led Vermelho: | Nenhuma especificação| [R$ 0,28]() |
| 1x | Sensor IR | Nenhuma especificação | [R$ 0,28]() |
| 1x | Kit Módulo RFID Mfrc522| Ser compatível com Arduino e se possível ter cartão junto | [R$ 0,28]() |
| 1x | SG90 Micro-servo motor | Ser compatível com Arduino | [R$ 0,28]() |
| **Total**:     |               | | R$ 57,89 |

Data de consulta: 02/07/2023

## Imagem do projeto (ThinkerCAD):

Link do circuito no ThinkerCAD: [ThinkerCAD]()

## Código utilizado:

- As bibliotecas necessárias são incluídas no início do código: RFID.h, SPI.h e Servo.h. Essas bibliotecas fornecem os recursos necessários para o funcionamento do RFID e do servo motor.

| Pino Utilizado    | Funcionalidade  |
| :-------------: |:-------------:|
|Pino 10|SS (Slave Select) do módulo RFID|
|Pino 9|RST (Reset) do módulo RFID|
|Pino 8| Controlar o Servo Motor|
|Pino 3| Controlar o LED Verde|
|Pino 2| Controlar o LED Vermelho|
|Pino 7| Controlar o Buzzer|

- **Código:**
   
## Funcionamento:

O programa aguarda até que um cartão RFID seja detectado. Quando um cartão é detectado, o número de série do cartão é lido e comparado com os IDs armazenados no array rfid_id. Se o número de série não corresponder a nenhum dos IDs armazenados, o LED do buzzer é acionado por um segundo e a mensagem "ID incorreto" é exibida no monitor serial.

Se o número de série corresponder a um dos IDs armazenados, a mensagem "Bem vindo a sua casa!" é exibida, o LED verde é ligado por 200 milissegundos, o LED vermelho é desligado, o buzzer emite um tom e o servo motor é acionado para abrir a porta.

Após um atraso de 2 segundos, a mensagem "Porta aberta" é exibida. Em seguida, a função kapiyi_kapat() é chamada para fechar a porta. O valor do sensor de infravermelho é lido e, se for menor ou igual a 500, o servo motor é acionado para fechar a porta e a mensagem "Porta fechada" é exibida. Caso contrário, o programa retorna ao início do loop.

- **Vídeo explicativo:**

## Alunos:
Matheus Paiva Angarola - **12560982** ([Github](https://github.com/MatheusPaivaa))

Nelly Vanesa Mollo Cossio -  **13684860**

Renato Calacina Spessotto - **14605824** ([Github](https://github.com/renatocspessotto))

Vinícius Felisberto dos Reis - **13695390** ([Github](https://github.com/viniciusfreiss))

## Conclusão:

O projeto "Fechadura RFID com Arduino" nos ensina a integrar tecnologias como RFID e Arduino para criar soluções de controle de acesso eficientes e seguras. Aprendemos a utilizar o Arduino como um microcontrolador versátil para processar informações de leitores RFID, permitindo a identificação e verificação de usuários autorizados. Além disso, compreendemos a importância da proteção e privacidade no acesso a espaços restritos, substituindo as chaves convencionais por cartões RFID personalizados. Esse projeto nos mostra como a tecnologia pode facilitar e aprimorar a segurança em diferentes ambientes, oferecendo uma alternativa prática e confiável para o controle de acesso.

## Agradecimentos:
Agradecemos ao grandioso professor Eduardo do Valle Simões, **o Poderoso**.
