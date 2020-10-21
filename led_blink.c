/*
  This program blinks pin 13 of the Arduino (the
  built-in LED)
*/

/*
void setup()
{
  pinMode(13, OUTPUT);
}

void loop()
{
  // turn the LED on (HIGH is the voltage level)
  digitalWrite(13, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  // turn the LED off by making the voltage LOW
  digitalWrite(13, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}*/

#include <avr/io.h>
#include <util/delay.h>

int main(){
  
  /*config pin 13 as output*/
  DDRB = DDRB | (1<< 5); //0b0001 0000
  
  while(1){
    PORTB |= (1 << 5); //turn pin 13 high
    _delay_ms(1000);
    PORTB &= ~(1 << 5); //turn pin 13 low
     _delay_ms(1000);
    
  }
  return 0;
}
