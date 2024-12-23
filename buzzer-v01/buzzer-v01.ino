/*
Projeto Despertador - v01
Código de base para funcionamento do Buzzer com mais tons

Referências:
- https://surtrtech.com/2018/01/29/how-to-use-a-buzzer-piezo-speaker-with-arduino/ 

NOTAS:
- nenhuma nota por enquanto

*/

int buzzer = 8; // Atribui o valor 8 a variável buzzer, que representa o pino digital 8, onde o buzzer está conectado

// Referência para as frequências das notas
const int c = 261;
const int d = 294;
const int e = 329;
const int f = 349;
const int g = 391;
const int gS = 415;
const int a = 440;
const int aS = 455;
const int b = 481;
const int cH = 523;
const int cSH = 554;
const int dH = 587;
const int dSH = 622;
const int eH = 659;
const int fH = 698;
const int fSH = 740;
const int gH = 784;
const int gSH = 830;
const int aH = 880;


void setup() {
  pinMode(buzzer, OUTPUT); //Definindo o pino buzzer como de saída.
}

void loop() {
  // toca uma escala
  tone(buzzer, c, 100); // define a frequência e a duração em milissegundos
  delay(400); // Aguarda 400 milissegundos
  tone(buzzer, d, 100); // define a frequência e a duração em milissegundos
  delay(400); // Aguarda mais 400 milissegundos
  tone(buzzer, e, 100); // define a frequência e a duração em milissegundos
  delay(400); // Aguarda mais 400 milissegundos
  tone(buzzer, f, 100); // define a frequência e a duração em milissegundos
  delay(400); // Aguarda mais 400 milissegundos
  tone(buzzer, g, 100); // define a frequência e a duração em milissegundos
  delay(400); // Aguarda mais 400 milissegundos
  tone(buzzer, a, 100); // define a frequência e a duração em milissegundos
  delay(400); // Aguarda mais 400 milissegundos
  tone(buzzer, b, 100); // define a frequência e a duração em milissegundos
  delay(400); // Aguarda mais 400 milissegundos
  tone(buzzer, cH, 200); // define a frequência e a duração em milissegundos
  delay(800); // Aguarda mais 800 milissegundos

  // Outra forma para funcionar é simplesmente ligar a porta e definir o tempo de espera
  // o buzzer tocará ao tom predefinido
  //digitalWrite(buzzer, HIGH); // Liga o buzzer
  //delay(500); // Aguarda 500 milissegundos
  //digitalWrite(buzzer, LOW); // Desliga o buzzer
  //delay(500); // Aguarda 500 milissegundos

}