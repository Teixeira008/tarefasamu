#include <Arduino.h>

                

#define stepPin 3 //Passo eixo Y
#define dirPin  6// Direção eixo Y
#define enPin 8
#define fimdcurso 10



void passo(int direcao, int velocidade)
{       
    digitalWrite(dirPin,direcao);
    digitalWrite(stepPin,HIGH);
    delayMicroseconds(velocidade);
    digitalWrite(stepPin,LOW);
    delayMicroseconds(velocidade);
}

void zeraY(void)
{
    while(digitalRead(fimdcurso) == LOW)
    {
        passo(1,500);
    }

    for(int x = 0; x < 50; x++)
    {
        passo(0,500);
    }

    while(digitalRead(fimdcurso) == LOW)
    {
        passo(1,30000);
    }

}
 void setup() {
 
 pinMode(stepPin,OUTPUT); 
 pinMode(dirPin,OUTPUT);

 pinMode(enPin, OUTPUT);
 digitalWrite(enPin, LOW);

 pinMode(fimdcurso, INPUT_PULLUP);

 delay(100);
 zeraY();
 
 }

 void loop() {


 }



/*

#include <Arduino.h>

#define stepPin 3     // Passo eixo Y
#define dirPin  6     // Direção eixo Y
#define enPin 8
#define fimdcurso 10  // Fim de curso eixo Y

void setup() {
  pinMode(stepPin, OUTPUT); 
  pinMode(dirPin, OUTPUT);
  pinMode(enPin, OUTPUT);
  digitalWrite(enPin, LOW); // Ativa motor

  pinMode(fimdcurso, INPUT_PULLUP); // botão com resistor pull-up

  Serial.begin(9600); // inicializa comunicação serial
}

void loop() {
  digitalWrite(dirPin, LOW); // define direção

  for (int x = 0; x < 600; x++) {
    // verifica se o botão foi pressionado
    if (digitalRead(fimdcurso) == LOW) {
      Serial.print("Fim de curso acionado no passo: ");
      Serial.println(x);
      break;
    }

    // gera pulso no motor
    digitalWrite(stepPin, HIGH); 
    delayMicroseconds(500); 
    digitalWrite(stepPin, LOW); 
    delayMicroseconds(500);
  }

  delay(1000);
}*/
