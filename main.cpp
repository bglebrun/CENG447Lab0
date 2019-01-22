#include <avr/io.h>
#include <util/delay.h>

using namespace std;

int main(void) {
  DDRB = 0xFF;

  while (true){
      char i;
      for (i = 0; i < 10; i++) {
        _delay_ms(60);
      }
      PORTB ^= 0b00100000;
  }
  return 0;
}
