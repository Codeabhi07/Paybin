#include <Wire.h>
#include <LiquidCrystal.h>
#include <Ultrasonic.h>

#define sensor1 x = 9
long randnumber;
Ultrasonic ultrasonic(12, 13);

int sensor1,sensor2;
LiquidCrystal lcd(7, 6, 5, 4, 3, 2);

void setup()
{ Serial.begin(9600);  
  lcd.begin(16,2);    
     
       lcd.print(" $$$ PAYBIN $$$");
       delay(2000);
       lcd.setCursor(0,1);
       lcd.print("  By QUADSMART  ");
       delay(1000);
       pinMode(sensor1, INPUT);
       
      
       
       //lcd.setCursor(0,0);
       
      
       
}
void set1()
{ randnumber=random(1000,9999);
   lcd.print("   OTP - ");
   lcd.print(randnumber);
   delay(3000);
   lcd.clear();
   }
   

void loop()
{  Serial.println(ultrasonic.read());
delay(100);
       int senread1 = digitalRead(sensor1);
       
if(senread1 == HIGH)
{        set1();        
}
/*else
{ lcd.print(" $$$ PAYBIN $$$");
delay(1000);
lcd.setCursor(0,0);033030

}*/

delay(1);
}
