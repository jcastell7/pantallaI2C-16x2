#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x3F,16,2);



void setup()
{
  //Iniciamos el fondo retroiluminado
  lcd.backlight();
  //Iniciamos la pantalla
  lcd.init();
}


void loop()
{
  lcd.clear();//Limpiamos la LCD
Escribir("te amo");
lcd.setCursor(0,1);
Escribir("mi maye :3");
//Tiempo de espera para que reinicie el ciclo
  delay(10000);
  
}
void Escribir(String cadena){
  int i=0;
while(i<cadena.length()){
lcd.print(cadena[i]);
i++;
  }}
