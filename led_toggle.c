#include <avr/io.h>
#include <util/delay.h>

int main (void){
  /*config pin 7 as output and pin 2 as input*/
   DDRD =  DDRD | (1<< 7);
   DDRD = DDRD & ~(1<< 2);
  
  while(1){
    if(PIND & (1<<2)){
      PORTD =  PORTD | (1<< 7); //high
    }
    else{
      PORTD =  PORTD & ~(1<< 7); //low
    }
    _delay_ms(10);
  }
  
  return 0;
  
}
