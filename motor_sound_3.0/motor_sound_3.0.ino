
#define NOTE_G3  196                          //Deuntje van het lied.

// Buzzer
int speakerPin = 9;                           //Aan welke pin van de Arduino de buzzer is verbonden.


int sensorPin = A0;                           // De pin waar de lichtsensor aan is verbonden.
int motorPin = 3;                             // De pin waar de motor aan is verbonden.
int sensorValue = 0;                          // De beginwaarde van de sensor. 

void setup() {
    pinMode(speakerPin, OUTPUT);              //speakerPin waardes uitgang.
    pinMode(motorPin, OUTPUT);                //motorPin waardes uitgang. 
    Serial.begin(9600);                       //Zet de serial port klaar voor communicatie.
}

void loop() {


sensorValue = analogRead(sensorPin);          // Leest de value van de sensor
Serial.println(sensorValue);                  // Prints de values die uit de sensor komen op het scherm.
delay(100);                                   // Vertraagd de reactie van de sensor op het scherm zodat de cijfers makkelijker leesbaar zijn.

if (sensorValue >= 350)                       //Stelt een if-statement dat alleen werkt wanneer de sensorValue groter of gelijk is aan 350.
{
  digitalWrite(3,LOW);                        // Wanneer de if-statement klopt gaat de digitalWrite aan de slag en word pin 3 niet geactiveerd en staat de motor uit.
  
}
else if (sensorValue <= 350)                  // Anders (als de sensorValue kleiner of gelijk is aan 350) gaat de sensor naar de volgende regel.
{
  digitalWrite(3,HIGH);                       // Wanneer de if-statement klopt zet hij de motor aan
 GameOfThrones();                             // Oproep van de functie. 
 
}}
   


void GameOfThrones() {                       // Functie Game of thrones

  for(int i=0; i<3; i++) {                   // i is de variabele en is 0. Zolang i kleiner is dan 3 word er bij i plus 1 gedaan waardoor je door gaat naar de volgende lijn.
    tone(speakerPin, NOTE_G3);               // Dit is de toon die de buzzer doet. speakerPin staat voor de buzzer die in gat 9 zit van de Arduino. Note_G3 is het deuntje.
    delay(100);                              // Vertraging van het deuntje.
    noTone(speakerPin);                      // Geen toon.


  
  }

     
}
