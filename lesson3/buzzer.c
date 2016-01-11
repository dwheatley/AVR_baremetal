#include <avr/io.h>
#include <util/delay.h>

int main() {
  /* set pin 4 of port b for output */
  DDRB |= _BV(PORTB4);

  while(1) {
    unsigned char i;
    /* output a frequency */
    for (i = 0; i < 80; i++)
    {
      PORTB |= _BV(PORTB4);
      _delay_ms(1);
      PORTB &= ~_BV(PORTB4);
      _delay_ms(1);
    }
    /* output another frequency */
    for (i = 0; i < 100; i++)
    {
      PORTB |= _BV(PORTB4);
      _delay_ms(2);
      PORTB &= ~_BV(PORTB4);
      _delay_ms(2);
    }
  }
  return 0;
}
