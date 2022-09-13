#include <avr/io.h>
#include <util/delay.h>
#define LED_PIN PB5 // вбудований в Arduino nano світлодіод
int main(void)
{
    DDRB |= 1 << LED_PIN;
    while (1)
    {
        for (int i = 0; i < 3; i++)
        {
            PORTB |= 1 << LED_PIN; 
            _delay_ms(150); 
            PORTB &= ~(1 << LED_PIN);
            _delay_ms(150);
        }
        _delay_ms(400);
        for (int i = 0; i < 3; i++)
        {
            PORTB |= 1 << LED_PIN; 
            _delay_ms(350); 
            PORTB &= ~(1 << LED_PIN);
            _delay_ms(350);
        }
        _delay_ms(400);
        for (int i = 0; i < 3; i++)
        {
            PORTB |= 1 << LED_PIN; 
            _delay_ms(150); 
            PORTB &= ~(1 << LED_PIN);
            _delay_ms(150);
        }
        _delay_ms(1000);
    }
    return 0;
}



