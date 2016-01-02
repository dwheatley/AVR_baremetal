#include <avr/io.h>
#include <util/delay.h>

int main() {
  /* set pin 4 of port b for input */
  DDRB &= ~_BV(PORTB4);

  /* set pin 5 of port b for output */
  DDRB |= _BV(PORTB5);

  while(1) {
    /* test the bitwise value of pin 4*/
    if (bit_is_set(PINB, PINB4)) {
      /* debounce the signal */
      _delay_ms(25);
      if (bit_is_set(PINB, PINB4)) {
        /* valid signal, set pin 5 high if pin 4 is high */
        PORTB |= _BV(PORTB5);
      }
    }
    /* otherwise set pin 5 low */
    else PORTB &= ~_BV(PORTB5);
  }
  return 0;
}
