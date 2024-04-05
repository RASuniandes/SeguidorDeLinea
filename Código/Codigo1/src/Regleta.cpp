#include <Arduino.h>
#define s1 17
#define s2 16
#define s3 13
#define s4 12
#define A0 10

int sensorPin = A0; //Seleccion de pin analógico a ser leido
int sensorValue = 0; //Variable que captura el valor analógico del sensor
int ValueFinal = 0; //Variable a ser mostrada en la OLED
int i=0; //Variable incremental para el muestreo de los sensores.
int buttonState=0;
int k=0; 
int valores[16];
int umbral = 600;

void loop (){
//for (int =)
}
