# arduino-sensor-rfid-com-alarme

Circuito simples que demonstra utilização de sensor de rádio-frequência RFID modelo RC-522.

### Demonstração (vídeo)
<p>
 <a target="_blank" rel="noopener noreferrer" href="https://youtu.be/SEVQkE6yt_E" target="_blank">
  <img src="https://user-images.githubusercontent.com/22710963/76633573-b39ea200-6523-11ea-85cf-a62399220a69.png" alt="reset" style="max-width:100%;"></a>
</p> 

### Circuito

<p><a target="_blank" rel="noopener noreferrer" href="https://user-images.githubusercontent.com/22710963/76663817-119daa80-6561-11ea-96d1-41d7e85ed403.png">
  <img src="https://user-images.githubusercontent.com/22710963/76663817-119daa80-6561-11ea-96d1-41d7e85ed403.png" alt="reset" style="max-width:100%;"></a></p> 
 

### Software necessário

- [IDE Arduino](https://www.arduino.cc/en/Main/Software)
- [Documentação sintaxe C++](https://www.arduino.cc/reference/en/)

### Software p/ gerar esquemas de circuitos elétricos 

- Útil para documentar projetos

- Versão paga [Fritzing](https://fritzing.org/home/)

- Versão gratuita (permite que seja atualizada) [Fritzing](https://softfamous.com/fritzing/download/)

## Hardware necessário
```
- a) 1 Placa Arduino com cabo USB
- b) 2 Resistores de 220 Ohm ou 330 Ohm
- c) 2 LEDS comuns de 4mm (cada um de uma cor diferente) 
- d) 1 Protoboard
- e) 10-13 Cabos de conexão 
- f) 1 Buzzer (Autofalante pequeno quebrei um telefone residencial e peguei do gancho)
- g) 1 Sensor de rádio-frequência RFID RC522 (com duas tags cartões)
```

 ### a) Placa Arduino com cabo USB
 Porta de 5V e 40mA
<p><a target="_blank" rel="noopener noreferrer" href="https://user-images.githubusercontent.com/22710963/73710418-aac7de80-46e2-11ea-82d4-fabab3361d1f.png">
  <img src="https://user-images.githubusercontent.com/22710963/73710418-aac7de80-46e2-11ea-82d4-fabab3361d1f.png" alt="reset" style="max-width:100%;"></a></p> 

 ### b) Resistores de 220 Ohm ou 330 Ohm 
 Diminuir a tensão, instalada entre o GND e o terra do LED
<p><a target="_blank" rel="noopener noreferrer" href="https://user-images.githubusercontent.com/22710963/73710133-ea41fb00-46e1-11ea-8507-dfc8e3a84346.png">
  <img src="https://user-images.githubusercontent.com/22710963/73710133-ea41fb00-46e1-11ea-8507-dfc8e3a84346.png" alt="reset" style="max-width:100%;"></a></p> 
 
  ### c) LEDS comuns de 4mm
  Diodo com 2V e 15mA, perna maior ligada no positivo
<p><a target="_blank" rel="noopener noreferrer" href="https://user-images.githubusercontent.com/22710963/73710278-4a38a180-46e2-11ea-960c-8c0c3ff97b9c.png">
  <img src="https://user-images.githubusercontent.com/22710963/73710278-4a38a180-46e2-11ea-960c-8c0c3ff97b9c.png" alt="reset" style="max-width:100%;"></a></p> 
 
 ### d)  Protoboard 
<p><a target="_blank" rel="noopener noreferrer" href="https://user-images.githubusercontent.com/22710963/73710865-e7e0a080-46e3-11ea-9ec4-4800b2b345b9.png">
  <img src="https://user-images.githubusercontent.com/22710963/73710865-e7e0a080-46e3-11ea-9ec4-4800b2b345b9.png" alt="reset" style="max-width:100%;"></a></p> 

  ### e) Cabos de conexão
<p><a target="_blank" rel="noopener noreferrer" href="https://user-images.githubusercontent.com/22710963/73711525-e57f4600-46e5-11ea-8cb9-e9bb27543ea4.png">
  <img src="https://user-images.githubusercontent.com/22710963/73711525-e57f4600-46e5-11ea-8cb9-e9bb27543ea4.png" alt="reset" style="max-width:100%;"></a></p> 

  ### f) Buzzer/Autofalante DR-O8H
<p><a target="_blank" rel="noopener noreferrer" href="https://user-images.githubusercontent.com/22710963/75093434-77010b80-5560-11ea-992d-5a833cd84f27.png">
  <img src="https://user-images.githubusercontent.com/22710963/75093434-77010b80-5560-11ea-992d-5a833cd84f27.png" alt="reset" style="max-width:100%;"></a></p> 
   
 ### g) Sensor de rádio-frequência RFID RC522
 
 Não tinha soldador nesse dia, então pluguei os jumpers nos buracos do sensor em cima da protoboard, ao mesmo tempo que passava corrente fixava-os.
 
<p><a target="_blank" rel="noopener noreferrer" href="https://user-images.githubusercontent.com/22710963/76631749-f448ec00-6520-11ea-864e-5175b01aba86.png">
  <img src="https://user-images.githubusercontent.com/22710963/76631749-f448ec00-6520-11ea-864e-5175b01aba86.png" alt="reset" style="max-width:100%;"></a></p> 

## Instalando bibliotecas


<p><a target="_blank" rel="noopener noreferrer" href="https://user-images.githubusercontent.com/22710963/76664923-bc639800-6564-11ea-983c-908083cd7fad.png">
  <img src="https://user-images.githubusercontent.com/22710963/76664923-bc639800-6564-11ea-983c-908083cd7fad.png" alt="reset" style="max-width:100%;"></a></p> 



<p><a target="_blank" rel="noopener noreferrer" href="https://user-images.githubusercontent.com/22710963/76664944-d309ef00-6564-11ea-8e9c-adbbab1637dc.png">
  <img src="https://user-images.githubusercontent.com/22710963/76664944-d309ef00-6564-11ea-8e9c-adbbab1637dc.png" alt="reset" style="max-width:100%;"></a></p> 


## Instalação dos Leds
Perna maior do LED é ligado no positivo e a perna menor precisa de um resistor de 220 ou 330 Ohm entre a ligação com o GND (negativo)
<p><a target="_blank" rel="noopener noreferrer" href="https://user-images.githubusercontent.com/22710963/73712954-7ce69800-46ea-11ea-980e-bec2802b2c12.png">
  <img src="https://user-images.githubusercontent.com/22710963/73712954-7ce69800-46ea-11ea-980e-bec2802b2c12.png" alt="reset" style="max-width:100%;"></a></p> 
  
  ## Fórmula Lei de Ohm
  V = R * I
  
 > O "I" significa a intensidade da corrente elétrica, no entanto, muitas vezes se fala apenas da corrente elétrica (sem a palavra intensidade). Quando existe uma diferença de potencial elétrico entre componentes (polarizado) acontece um fluxo de partículas que equilibra o campo elétrico. Esse fluxo é a corrente elétrica.
 
> A corrente elétrica é medida em Ampere (A) que nada mais é do que a quantidade de elétrons que passa nesse fio em um tempo determinado!

> A tensão elétrica (V) é medida em Volts (V) (em homenagem ao físico Alessandro Volta).

> A resistência (R) é medida em Ohm (Ω) e a intensidade da corrente elétrica (I) em Ampere (A).

> A relação entre tensão, resistência e intensidade da corrente define a Lei de Ohm: V = R * I

> Para calcular a corrente: I = V / R

> Para calcular a resistência: R = V / I

> Para calcular a tensão: V = R * I

### Tabela de Cores dos resistores na convenção internacional
<p>
 <a target="_blank" rel="noopener noreferrer" href="https://user-images.githubusercontent.com/22710963/73806830-5cc9de00-47a9-11ea-887a-f13d09948aea.png">
  <img src="https://user-images.githubusercontent.com/22710963/73806830-5cc9de00-47a9-11ea-887a-f13d09948aea.png" alt="reset" style="max-width:100%;"></a>
</p> 



### Links úteis
> [Manual do mundo](https://youtu.be/gcBN4NLqz_U)

> [Tutorial RFID](https://www.viralsciencecreativity.com/post/arduino-rfid-sensor-mfrc522-tutorial)

###  Aplicações
<p> Mecanismo anti-furto para itens de lojas </p>
<p> Pagamento rápido sem digitação de senhas </p>
<p> Autenticação ou autorização mediante apresentação de cartão/cracha </p>




  
