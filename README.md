# arduino-sensor-rfid-com-alarme

## Objetivo

Circuito simples que demonstra utilização de sensor de rádio-frequência RFID modelo RC-522.

### Vídeo

[![Vídeo](https://user-images.githubusercontent.com/22710963/76633573-b39ea200-6523-11ea-85cf-a62399220a69.png)](https://youtu.be/SEVQkE6yt_E)

### Circuito

![image](https://user-images.githubusercontent.com/22710963/76663817-119daa80-6561-11ea-96d1-41d7e85ed403.png)

### RFID X NFC

Diferença entre [RFID](https://github.com/sganzerla/embarcados-protocolos-comunicacao/blob/master/RFID/) e [NFC](https://github.com/sganzerla/embarcados-protocolos-comunicacao/blob/master/NFC/)

#### RFID RC522

 Este módulo de RFID usa o CI de fabricação Philips MFRC522. Ele foi especialmente desenvolvido para aplicações de escrita e leitura sem contato de cartões principalmente voltadas para controle de acesso. A comunicação é feita através da interface [SPI](https://github.com/sganzerla/embarcados-protocolos-comunicacao/tree/master/SPI) de seu microcontrolador ou placa Arduino.

- Alimentação: 3,3v

- Frequência: 13.56MHz

- Distância de leitura: 0 - 60mm

- Taxa transmissão: 10Mbit/s

- Cartões compatíveis: mifare1 S50, mifare1 S70, mifare UltraLight, mifarePro, mifare Desfire

## Hardware necessário

```
- a) 1 Placa Arduino com cabo USB
- b) 1 Sensor rádio-frequência RFID RC522
- c) 2 Tags RFID
- d) 1 Buzzer DR-08H
- e) 2 LEDS de 4mm 1 de cada cor
- f) 2 Resistores de 220 - 300Ω
- g) 1 Protoboard
- h) 10-13 Cabos de conexão
```

### a) Placa Arduino Uno

![image](https://user-images.githubusercontent.com/22710963/77551422-16cbf500-6e91-11ea-850d-7e3989c9f1f2.png)

### b) Sensor rádio-frequência

![image](https://user-images.githubusercontent.com/22710963/77814251-0fbe0600-708e-11ea-9677-ef8d057573a1.png)

### c) Tags RFID  

![image](https://user-images.githubusercontent.com/22710963/77814271-4267fe80-708e-11ea-905a-5ee4e2eedd56.png)

### d) Buzzer DR-08H

![image](https://user-images.githubusercontent.com/22710963/77565026-62d36580-6ea2-11ea-9a5e-389752b9158f.png)

### e) LEDS comuns de 4mm

![image](https://user-images.githubusercontent.com/22710963/77499523-14d24980-6e31-11ea-9ee1-2f44635a20be.png)

### f) Resistores

 ![image](https://user-images.githubusercontent.com/22710963/76045740-c0783000-5f3c-11ea-9188-3b239840fbda.png)
  
### g) Protoboard

![image](https://user-images.githubusercontent.com/22710963/77499362-a8574a80-6e30-11ea-9744-a15c3206fd50.png)

### h) Cabos de conexão

![image](https://user-images.githubusercontent.com/22710963/77499606-5662f480-6e31-11ea-96fd-9e268dceb50f.png)

### Links úteis

- [Project Hub](https://create.arduino.cc/projecthub/mixpose/pushup-counter-e3ed69?ref=platform&ref_id=424_trending___&offset=46)
  
- [Manual do mundo](https://youtu.be/gcBN4NLqz_U)

- [Viral Science Creativity](https://www.viralsciencecreativity.com/post/arduino-rfid-sensor-mfrc522-tutorial)

- [Eletro Gate](https://blog.eletrogate.com/guia-basico-da-nfc-para-arduino/)

### Aplicações

- Mecanismo anti-furto para itens de lojas

- Pagamento rápido sem digitação de senhas

- Autenticação ou autorização mediante apresentação de cartão/cracha
