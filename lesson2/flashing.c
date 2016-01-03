#include <avr/io.h>
#include <util/delay.h>

int main() {
  /* set pins 2 through 9 on port d as output */
  DDRD |= (_BV(PORTD2) | _BV(PORTD3) | _BV(PORTD4) | _BV(PORTD5));
  DDRD |= (_BV(PORTD6) | _BV(PORTD7));
  /* set pins 0 and 1 on port b as output as well */
  DDRB |= (_BV(PORTB0) | _BV(PORTB1));

  while(1) {
    /* A BLOCK, HIGH */
    PORTD |= _BV(PORTD2);
    _delay_ms(100);
    PORTD |= _BV(PORTD3);
    _delay_ms(100);
    PORTD |= _BV(PORTD4);
    _delay_ms(100);
    PORTD |= _BV(PORTD5);
    _delay_ms(100);
    PORTD |= _BV(PORTD6);
    _delay_ms(100);
    PORTD |= _BV(PORTD7);
    _delay_ms(100);
    PORTB |= _BV(PORTB0);
    _delay_ms(100);
    PORTB |= _BV(PORTB1);
    _delay_ms(100);

    /* B BLOCK, LOW */
    PORTB &= ~_BV(PORTB1);
    _delay_ms(100);
    PORTB &= ~_BV(PORTB0);
    _delay_ms(100);
    PORTD &= ~_BV(PORTD7);
    _delay_ms(100);
    PORTD &= ~_BV(PORTD6);
    _delay_ms(100);
    PORTD &= ~_BV(PORTD5);
    _delay_ms(100);
    PORTD &= ~_BV(PORTD4);
    _delay_ms(100);
    PORTD &= ~_BV(PORTD3);
    _delay_ms(100);
    PORTD &= ~_BV(PORTD2);
    _delay_ms(100);

    /* B BLOCK, HIGH */
    PORTB |= _BV(PORTB1);
    _delay_ms(100);
    PORTB |= _BV(PORTB0);
    _delay_ms(100);
    PORTD |= _BV(PORTD7);
    _delay_ms(100);
    PORTD |= _BV(PORTD6);
    _delay_ms(100);
    PORTD |= _BV(PORTD5);
    _delay_ms(100);
    PORTD |= _BV(PORTD4);
    _delay_ms(100);
    PORTD |= _BV(PORTD3);
    _delay_ms(100);
    PORTD |= _BV(PORTD2);
    _delay_ms(100);

    /* A BLOCK, LOW */
    PORTD &= ~_BV(PORTD2);
    _delay_ms(100);
    PORTD &= ~_BV(PORTD3);
    _delay_ms(100);
    PORTD &= ~_BV(PORTD4);
    _delay_ms(100);
    PORTD &= ~_BV(PORTD5);
    _delay_ms(100);
    PORTD &= ~_BV(PORTD6);
    _delay_ms(100);
    PORTD &= ~_BV(PORTD7);
    _delay_ms(100);
    PORTB &= ~_BV(PORTB0);
    _delay_ms(100);
    PORTB &= ~_BV(PORTB1);
    _delay_ms(100);

  }
  return 0;
}
