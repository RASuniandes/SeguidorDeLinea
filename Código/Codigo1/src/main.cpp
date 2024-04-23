#include <Arduino.h>
#define s1 12
#define s2 14
#define s3 27
#define s4 26
#define A0 34

int sensorPin = A0; //Seleccion de pin analógico a ser leido
int sensorValue = 0; //Variable que captura el valor analógico del sensor
int ValueFinal = 0; //Variable a ser mostrada en la OLED

int buttonState=0;
int k=0; 
int valores[16];
int umbral = 600;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(A0,INPUT);
  pinMode(s1,OUTPUT);
  pinMode(s2,OUTPUT);
  pinMode(s3,OUTPUT);
  pinMode(s4,OUTPUT);
 
}

void loop(){
digitalWrite(s1,0);digitalWrite(s2,0); digitalWrite(s3,0);digitalWrite(s4,0);
valores[0]=analogRead(A0);

for (int i=0; i<16; i++){
    digitalWrite(s1, i&0X01);
    digitalWrite(s2, i&0X02);
    digitalWrite(s3, i&0X04);
    digitalWrite(s4, i&0X08);

    valores[i]=analogRead(A0);
    if (valores[i]<=umbral){
        valores[i]=0;
    }
    else valores[i]=1;


    Serial.print(valores[i]);
    Serial.print("\t");
}
    Serial.println(" ");
}