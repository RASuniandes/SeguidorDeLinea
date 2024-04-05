#include <Arduino.h>
#define s1 17
#define s2 16
#define s3 15
#define s4 14
#define A0 20

int sensorPin = A0; //Seleccion de pin analógico a ser leido
int sensorValue = 0; //Variable que captura el valor analógico del sensor
int ValueFinal = 0; //Variable a ser mostrada en la OLED
int i=0; //Variable incremental para el muestreo de los sensores.
int buttonState=0;
int k=0; 
int valores[16];

// put function declarations here:
int myFunction(int, int);
void lectura(int k);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(18,INPUT);
  pinMode(s1,OUTPUT);
  pinMode(s2,OUTPUT);
  pinMode(s3,OUTPUT);
  pinMode(s4,OUTPUT);
 
}

void lectura (int k){
  switch (k)
  {
  case 15:
    Serial.println("15");
    digitalWrite(s1,LOW);
    digitalWrite(s2,LOW);
    digitalWrite(s3,LOW);
    digitalWrite(s4,LOW);
    break;
  case 14:
    Serial.println("14");
    digitalWrite(s1,HIGH);
    digitalWrite(s2,LOW);
    digitalWrite(s3,LOW);
    digitalWrite(s4,LOW);
    break;
  case 13:
    Serial.println("13");
    digitalWrite(s1,LOW);
    digitalWrite(s2,HIGH);
    digitalWrite(s3,LOW);
    digitalWrite(s4,LOW);
    break;
  case 12:
    Serial.println("12");
    digitalWrite(s1,HIGH);
    digitalWrite(s2,HIGH);
    digitalWrite(s3,LOW);
    digitalWrite(s4,LOW);
    break;
  case 11:
    Serial.println("11");
    digitalWrite(s1,LOW);
    digitalWrite(s2,LOW);
    digitalWrite(s3,HIGH);
    digitalWrite(s4,LOW);
    break;
  case 10:
    Serial.println("10");
    digitalWrite(s1,HIGH);
    digitalWrite(s2,LOW);
    digitalWrite(s3,HIGH);
    digitalWrite(s4,LOW);
    break;
  case 9:
    Serial.println("9");
    digitalWrite(s1,LOW);
    digitalWrite(s2,HIGH);
    digitalWrite(s3,HIGH);
    digitalWrite(s4,LOW);
    break;
  case 8:
    Serial.println("8");
    digitalWrite(s1,HIGH);
    digitalWrite(s2,HIGH);
    digitalWrite(s3,HIGH);
    digitalWrite(s4,LOW);
    break;
  case 7:
    Serial.println("7");
    digitalWrite(s1,LOW);
    digitalWrite(s2,LOW);
    digitalWrite(s3,LOW);
    digitalWrite(s4,HIGH);
    break;
  case 6:
    Serial.println("6");
    digitalWrite(s1,HIGH);
    digitalWrite(s2,LOW);
    digitalWrite(s3,LOW);
    digitalWrite(s4,HIGH);
    break;
  case 5:
    Serial.println("5");
    digitalWrite(s1,LOW);
    digitalWrite(s2,HIGH);
    digitalWrite(s3,LOW);
    digitalWrite(s4,HIGH);
    break;
  case 4:
    Serial.println("4");
    digitalWrite(s1,HIGH);
    digitalWrite(s2,HIGH);
    digitalWrite(s3,LOW);
    digitalWrite(s4,HIGH);
    break;
  case 3:
    Serial.println("3");
    digitalWrite(s1,LOW);
    digitalWrite(s2,LOW);
    digitalWrite(s3,HIGH);
    digitalWrite(s4,HIGH);
    break;
  case 2:
    Serial.println("2");
    digitalWrite(s1,HIGH);
    digitalWrite(s2,LOW);
    digitalWrite(s3,HIGH);
    digitalWrite(s4,HIGH);
    break;
  case 1:
    Serial.println("1");
    digitalWrite(s1,LOW);
    digitalWrite(s2,HIGH);
    digitalWrite(s3,HIGH);
    digitalWrite(s4,HIGH);
    break;
  case 0:
    Serial.println("0");
    digitalWrite(s1,HIGH);
    digitalWrite(s2,HIGH);
    digitalWrite(s3,HIGH);
    digitalWrite(s4,HIGH);
    break;
  }

  
}
void loop() {
  for(i=15; i>=0; i--) {
    Serial.println(i);
    lectura(i);
    sensorValue = digitalRead(sensorPin);
    Serial.println("valor es "+ String(sensorValue));
    ValueFinal=sensorValue;
    valores[15-i] = ValueFinal;
    Serial.println(valores[15-i]);
    delay(500);
    
  }
  
}