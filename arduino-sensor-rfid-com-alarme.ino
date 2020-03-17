#include <SPI.h> // biblioteca interface de comunicação com o sensor
#include <MFRC522.h> // biblioteca para o RFID
 
#define SS_PIN 10
#define RST_PIN 9
#define LED_GREEN_PIN 4 //define green LED pin
#define LED_RED_PIN 5 //define red LED
#define BUZ_PIN 2 //buzzer pin
MFRC522 mfrc522(SS_PIN, RST_PIN);   // Create MFRC522 instance. 
 
void setup() 
{
  Serial.begin(9600);   // Initiate a serial communication
  SPI.begin();      // Initiate  SPI bus
  mfrc522.PCD_Init();   // Initiate MFRC522
 
  pinMode(LED_GREEN_PIN, OUTPUT);
  pinMode(LED_RED_PIN, OUTPUT);
  pinMode(BUZ_PIN, OUTPUT);
  noTone(BUZ_PIN);
  Serial.println("Put your card to the reader...");
  Serial.println();

}
void loop() 
{
  // Look for new cards
  if ( ! mfrc522.PICC_IsNewCardPresent()) 
  {
    return;
  }
  // Select one of the cards
  if ( ! mfrc522.PICC_ReadCardSerial()) 
  {
    return;
  }
  //Show UID on serial monitor
  Serial.print("UID tag :");
  String content= "";
  byte letter;
  for (byte i = 0; i < mfrc522.uid.size; i++) 
  {
     Serial.print(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " ");
     Serial.print(mfrc522.uid.uidByte[i], HEX);
     content.concat(String(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " "));
     content.concat(String(mfrc522.uid.uidByte[i], HEX));
  }
  Serial.println();
  Serial.print("Message : ");
  content.toUpperCase();
  if (content.substring(1) == "E6 03 48 83") //change here the UID of the card/cards that you want to give access
  {
    Serial.println("Authorized access");
    Serial.println();
    delay(500);
    digitalWrite(LED_GREEN_PIN, HIGH);
    tone(BUZ_PIN, 500);
    delay(300);
    noTone(BUZ_PIN); 
    delay(5000); 
    digitalWrite(LED_GREEN_PIN, LOW);
  }
 
 else   {
    Serial.println(" Access denied");
    digitalWrite(LED_RED_PIN, HIGH);
    tone(BUZ_PIN, 300);
    delay(1000);
    digitalWrite(LED_RED_PIN, LOW);
    noTone(BUZ_PIN);
  }
} 
