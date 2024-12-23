/*
Projeto Despertador - v01
Código de base para funcionamento do Display 16x2

Referências:
- https://www.makerhero.com/blog/como-utilizar-o-display-lcd-16x2/

NOTAS:
- instalar a biblioteca LiquidCrystal (do IDE de Arduino) - https://docs.arduino.cc/libraries/liquidcrystal/

*/

#include <LiquidCrystal.h> // Inclusão da Biblioteca
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int backLight = 13; // pino 13 responsável pelo controle do LED

void setup()
{
  //Define o número de colunas e linhas do LCD
  lcd.begin(16, 2);
  //Limpa a tela
  lcd.clear();
  //Posiciona o cursor na coluna 3, linha 0;
  lcd.setCursor(3, 0);
  //Envia o texto entre aspas para o LCD
  lcd.print(" Mirko");
  lcd.setCursor(3, 1);
  lcd.print("Lamberti");
}
 
void loop()
{
    
  //Rolagem para a esquerda
  for (int posicao = 0; posicao < 3; posicao++)
  {
    lcd.scrollDisplayLeft();
    delay(1000);
  }
  
  delay(2000);

  //Rolagem para a direita
  for (int posicao = 0; posicao < 8; posicao++)
  {
    lcd.scrollDisplayRight();
    delay(100);
  }

  //Rolagem para a esquerda
  for (int posicao = 0; posicao < 5; posicao++)
  {
    lcd.scrollDisplayLeft();
    delay(800);
  }
}
