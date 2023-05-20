
volatile unsigned long timerTicks = 0;


ISR(TIMER1_COMPA_vect) {
    timerTicks++; 
}

int main(void) {
    
    TCCR1B |= (1 << WGM12);
    OCR1A = 15624; 
    TIMSK1 |= (1 << OCIE1A); 
    sei(); 

    
    DDRB |= (1 << PB0);

    while (1) {
        if (timerTicks >= 1000) {
            
            PORTB |= (1 << PB0); 

            
            _delay_ms(100);

            
            PORTB &= ~(1 << PB0); 

            timerTicks = 0; 
        }
    }

    return 0;
}
