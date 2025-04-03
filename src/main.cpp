

#define F_cpu 16000000Ul
#include <avr/io.h>
#include <util/delay.h>


int main (void){

  DDRD = 0xFF;  
  char a = 0x00;  
  char b= 0x01 ;

  
  while(1){

    PORTD = a^(a>>b);  // formaula para transformar binario a gray
    _delay_ms(2000);    
    a+=0x01;       

    
  }



return 0;

}


