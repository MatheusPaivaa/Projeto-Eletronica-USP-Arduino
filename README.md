# Fechadura RFID com Arduino 🚪🖥️

Desenvolvido para a disciplina Eletônica para Computação - SSC0180.

## Situação Inicial:

   Construção de um projeto de Software e Hardware com Arduino ou ESP32. 

## Descrição do projeto:

O projeto "Fechadura RFID com Arduino" é um sistema de controle de acesso que utiliza tecnologia RFID (Radio-Frequency Identification) e um microcontrolador Arduino para garantir a segurança e conveniência no acesso a uma porta. O sistema permite a entrada apenas para pessoas autorizadas, que possuam um cartão RFID registrado. É uma solução de baixo custo e segura para substituir chaves convencionais por cartões RFID personalizados.

## Componentes:

- **LED:** O LED (Light Emitting Diode) é um dispositivo que emite luz quando a corrente elétrica passa por ele. Ele pode ser utilizado para indicar visualmente a presença de tensão na saída da fonte de tensão ajustável.


## Escolha dos componentes:
| Quantidade    | Componentes   | Especificações | Valor R$  |
| :-------------: |:-------------:| :-------------: |---------:|
| 1x | Fusível | Ter entre 500mA e 1A | [R$ 0,28](https://www.baudaeletronica.com.br/produto/fusivel-de-vidro-5x20-1a-250v.html?utm_source=Site&utm_medium=GoogleMerchant&utm_campaign=GoogleMerchant&gclid=Cj0KCQjwwISlBhD6ARIsAESAmp5Sxrgsf60tlAU9u5QhNWYG0R35PylPx-_qWipXBIDDYr2j4A1A07MaAkH7EALw_wcB) |
| 1x | Porta Fusível | Qualquer um que caiba os fusíveis | [R$ 1,20](https://www.eletrogate.com/porta-fusivel-5x20-as06) |
| 1x | Chave Gangorra | Nenhuma especificação | [R$ 1,90](https://www.eletrogate.com/chave-gangorra-com-2-terminais) |
| 1x | Transformador | Ser bivolt 18+18v 200mA | [R$ 30,00](https://produto.mercadolivre.com.br/MLB-1253943633-transformador-trafo-1818v-200ma-bivolt-eletronica-_JM?matt_tool=54307261&matt_word=&matt_source=google&matt_campaign_id=14302215582&matt_ad_group_id=134553712308&matt_match_type=&matt_network=g&matt_device=c&matt_creative=539425529689&matt_keyword=&matt_ad_position=&matt_ad_type=pla&matt_merchant_id=109546415&matt_product_id=MLB1253943633&matt_product_partition_id=1802672036537&matt_target_id=pla-1802672036537&gclid=Cj0KCQjwwISlBhD6ARIsAESAmp4hW0EBX6HRP9Uj2QjMKqJsE4l4tpOUBI0-lfe-B3txkHnP4clOqH0aAvrCEALw_wcB) |
| 1x | Ponte de Diodo | Ponte de no minimo 1A | [R$ 1,90](https://www.eletrogate.com/diodo-retificador-1n4007-10-unidades) | 
| 1x | Capacitor 470uF | Mínimo de 25V | [R$ 2,52](https://www.eletrogate.com/capacitor-eletrolitico-470uf-x-50v) | 
| 1x | Capacitor 100nF | Mínimo de 25V | [R$ 1,50](https://www.eletrogate.com/capacitor-poliester-metalizado-100nf-x-400v) | 
| 1x | Resistor 5.6K Ω | Mínimo de 1/2 W | [R$ 0,14](https://www.baudaeletronica.com.br/produto/resistor-5k6-5-12w.html?utm_source=Site&utm_medium=GoogleMerchant&utm_campaign=GoogleMerchant&gclid=Cj0KCQjwwISlBhD6ARIsAESAmp5CTnlTcv_SXmWS0936PVifASlhihgp2nK68jjVNHb5WTJyzJOC-A4aAsyPEALw_wcB) | 
| 1x | Resistor 330 Ω | Nenhuma especificação |  [R$ 0,15](https://www.baudaeletronica.com.br/produto/resistor-330r-5-12w.html?utm_source=Site&utm_medium=GoogleMerchant&utm_campaign=GoogleMerchant&gclid=Cj0KCQjwwISlBhD6ARIsAESAmp6LTgxlzKlQzP8OG1qwbUi-pRDTfwrr8GBb4G2EgDIJDS_ZiTXR77oaAt3fEALw_wcB) | 
| 1x | Resistor 270 Ω | Nenhuma especificação | [R$ 0,06](https://www.baudaeletronica.com.br/produto/resistor-270r-5-14w.html?utm_source=Site&utm_medium=GoogleMerchant&utm_campaign=GoogleMerchant&gclid=Cj0KCQjwwISlBhD6ARIsAESAmp5dzqc7nJxamPnkRmK0ISQRLekSq5iHG57d6UQyDzV3kf1I064oqqwaAo5wEALw_wcB) | 
| 1x | LED | Qualquer cor| [R$ 0,28](https://www.eletrogate.com/led-difuso-5mm-vermelho) | 
| 1x | LM317T | Precisa ter proteção térmica contra sobrecarga | [R$ 4,66](https://www.eletrogate.com/regulador-de-tensao-lm317t?utm_source=Site&utm_medium=GoogleMerchant&utm_campaign=GoogleMerchant&gad=1&gclid=Cj0KCQjwwISlBhD6ARIsAESAmp4LUtSc4i2jF2vUsj5UuvrAT6JthlVBOmPZs0Q1tjJtL9VysCA3Gb4aAvvcEALw_wcB) | 
| 1x | Potênciometro | Ser linear de 2K (2000Ω) | [R$ 2,90](https://www.baudaeletronica.com.br/produto/potenciometro-linear-de-2k-2000o.html?utm_source=Site&utm_medium=GoogleMerchant&utm_campaign=GoogleMerchant&gclid=Cj0KCQjwwISlBhD6ARIsAESAmp5KTr9R6PPlQAROR0ZM9oR2QJWyrjBfZsBuH9pEPyW6QhfppATZPosaArgnEALw_wcB) | 
| 1x | Placa de Fenolite 10x5 | Não precisa ser cobreada de ambos os lados | [R$ 4,60](https://www.baudaeletronica.com.br/produto/placa-de-fenolite-virgem-15x5-cm.html) | 
| **Total**:     |               | | R$ 57,89 |

Data de consulta: 02/07/2023

## Imagem do projeto (ThinkerCAD):

Link do circuito no ThinkerCAD: [ThinkerCAD]()

## Funcionamento:

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
