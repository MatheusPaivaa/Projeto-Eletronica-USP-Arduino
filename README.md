# Fechadura RFID com Arduino 🚪🖥️

Desenvolvido para a disciplina Eletônica para Computação - SSC0180.

## Situação Inicial:

   Construção de um projeto de Software e Hardware com Arduino ou ESP32. 

## Descrição do projeto:

<p align="justify">
O projeto "Fechadura RFID com Arduino" é um sistema de controle de acesso que utiliza tecnologia RFID (Radio-Frequency Identification) e um microcontrolador Arduino para garantir a segurança e conveniência no acesso a uma porta. O sistema permite a entrada apenas para pessoas autorizadas, que possuam um cartão RFID registrado. É uma solução de baixo custo e segura para substituir chaves convencionais por cartões RFID personalizados.
</p>

<p align="center">
   <img align="center" text-align="center" width="100%" src="https://github.com/MatheusPaivaa/Projeto-Eletronica-USP-Arduino/blob/main/porta_rfid.jpeg">
</p>

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
| 1x | Protoboard | Ter pelo menos 400 pontos | [R$ 7,90](https://www.a2robotics.com.br/protoboard-400-pontos?gclid=Cj0KCQjwho-lBhC_ARIsAMpgModKQh_Yd51mk2CZSq-UeDmXjzpocMgamMs96h6rPUGi48HFNwdrOj0aAut_EALw_wcB) |
| 1x | Arduino UNO | Nenhuma especificação | [R$ 44,90](https://www.a2robotics.com.br/arduino-uno-r3-smd-com-cabo-usb?gclid=Cj0KCQjwho-lBhC_ARIsAMpgMoeYz1PPURumvn3vMHimuPUyWa5FRoVNcBBkd10MbyTVhgmmoWdttGMaArhIEALw_wcB) |
| 1x | Buzzer | Suportar no mínimo 5v | [R$ 2,76](https://www.eletrogate.com/buzzer-ativo-5v?utm_source=Site&utm_medium=GoogleMerchant&utm_campaign=GoogleMerchant&gad=1&gclid=Cj0KCQjwho-lBhC_ARIsAMpgMoejHugrqEi7QgsucPjVRjOkdlyE81Or8NTz0Kw99CXRk1sbgoH298UaAjQ2EALw_wcB) |
| 1x | Led Verde: | Nenhuma especificação | [R$ 0,28](https://www.eletrogate.com/led-difuso-5mm-verde) |
| 1x | Led Vermelho: | Nenhuma especificação| [R$ 0,28](https://www.eletrogate.com/led-difuso-5mm-vermelho) |
| 1x | Sensor IR | Nenhuma especificação | [R$ 0,86](https://www.eletrogate.com/receptor-universal-infravermelho-vs1838b-38khz?utm_source=Site&utm_medium=GoogleMerchant&utm_campaign=GoogleMerchant&gad=1&gclid=Cj0KCQjwho-lBhC_ARIsAMpgMof6J3S7qVbM0CGkXKdwVsN_nc5x-hejDT2ZEOqHvxISa-tDk4KFWqgaAujfEALw_wcB) |
| 1x | Kit Módulo RFID Mfrc522 | Ser compatível com Arduino (cartão junto) | [R$ 18,90](https://www.eletrogate.com/kit-modulo-rfid-mfrc522-1356-mhz?utm_source=Site&utm_medium=GoogleMerchant&utm_campaign=GoogleMerchant&gad=1&gclid=Cj0KCQjwho-lBhC_ARIsAMpgMoeiSpDMoc5iKMW2TZq2psyfE9b3DlZ_lAxt_sCvB3Nzflh0vmV7XekaAhZwEALw_wcB) |
| 1x | SG90 Micro-servo motor | Ser compatível com Arduino | [R$ 10,80](https://www.a2robotics.com.br/micro-servo-9g-sg90-towerpro?gclid=Cj0KCQjwho-lBhC_ARIsAMpgMoewGRkvCKO8e6zBvy_ItFOgkjZwRZ9UUszfTuYEneYCG5owjLX5inMaApEIEALw_wcB) |
| **Total**:     |               | | R$ 86,68 |

Data de consulta: 04/07/2023

## Imagem do projeto (Esquemático):

<p align="center">
   <img align="center" text-align="center" width="100%" src="https://github.com/MatheusPaivaa/Projeto-Eletronica-USP-Arduino/blob/main/esquematico_rfid.png">
</p>

- Utilizamos o Fritzing para desenvolver o esquemático.

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

Os outros conectores fazem parte do sistema de alimentação.

- **Código:** [Código](https://github.com/MatheusPaivaa/Projeto-Eletronica-USP-Arduino/blob/main/fechaduraRFID/fechaduraRFID.ino)
   
## Funcionamento:
<p align="justify">
O programa aguarda até que um cartão RFID seja detectado. Quando um cartão é detectado, o número de série do cartão é lido e comparado com os IDs armazenados no array rfid_id. Se o número de série não corresponder a nenhum dos IDs armazenados, o LED do buzzer é acionado por um segundo e a mensagem "ID incorreto" é exibida no monitor serial.

Se o número de série corresponder a um dos IDs armazenados, a mensagem "Bem vindo a sua casa!" é exibida, o LED verde é ligado por 200 milissegundos, o LED vermelho é desligado, o buzzer emite um tom e o servo motor é acionado para abrir a porta. Após um atraso de 2 segundos, a mensagem "Porta aberta" é exibida. Em seguida, a função kapiyi_kapat() é chamada para fechar a porta.

Ademais, com o sensor infravermelho é possível abrir a fechadura. No entanto, é necessário um emissor de infravermelho (para esse caso utilizamos um controle de ar-condicionado).
</p>

- **Vídeo (funcionando + explicação):** [Vídeo](https://www.youtube.com/watch?v=mho0gzLNM6g)

- **Vídeo (funcionando apenas):** [Vídeo](https://www.youtube.com/watch?v=QIyXdPlawQM)

## Alunos:
Matheus Paiva Angarola - **12560982** ([Github](https://github.com/MatheusPaivaa))

Nelly Vanesa Mollo Cossio -  **13684860** ([Github](https://github.com/cossi0))

Renato Calacina Spessotto - **14605824** ([Github](https://github.com/renatocspessotto))

Vinícius Felisberto dos Reis - **13695390** ([Github](https://github.com/viniciusfreiss))

## Conclusão:
<p align="justify">
O projeto "Fechadura RFID com Arduino" nos ensina a integrar tecnologias como RFID e Arduino para criar soluções de controle de acesso eficientes e seguras. Aprendemos a utilizar o Arduino como um microcontrolador versátil para processar informações de leitores RFID, permitindo a identificação e verificação de usuários autorizados. Além disso, compreendemos a importância da proteção e privacidade no acesso a espaços restritos, substituindo as chaves convencionais por cartões RFID personalizados. Esse projeto nos mostra como a tecnologia pode facilitar e aprimorar a segurança em diferentes ambientes, oferecendo uma alternativa prática e confiável para o controle de acesso.
</p>

## Agradecimentos:
Agradecemos ao grandioso professor Eduardo do Valle Simões, **o Poderoso**.
