void setup()
{
  DisableADCandComparator();
  EnablePCInterrupts();

  while (1) {
    DeepSleep();
    Transmit();
  }
}

ISR(PCINT0_vect) {}
ISR(PCINT1_vect) {}
ISR(PCINT2_vect) {}

void DeepSleep()
{
  char *smcr = (char *)0x53;
  volatile char *mcucr = (char *) 0x55; *smcr = 5; //Sleep mode = POWER DOWN, Sleep Enable = True
  *mcucr = 0b01100000; //Set Both BODS and BODSE
  *mcucr = 0b01000000; //Set BODS and clear BODSE
  asm("sleep"); //Invoke in line assembler to sleep
}

void DisableADCandComparator()
{
  char* adcsra = (char *)0x7A;
  char* acsr = (char *) 0x50; *adcsra = 0; //Disable ADC
  *acsr = 1 << 7; //Disable comparator
}

void EnablePCInterrupts()
{
  char* sreg = (char*) 0x5F;
  char* pcicr = (char*) 0x68;
  char* pcmsk0 = (char*) 0x6B;
  char* pcmsk1 = (char*) 0x6C;
  char* pcmsk2 = (char*) 0x6D;
  *sreg |= (1 << 7); //Enable interrupts
  *pcicr = 7; //Enable PC interrupts
  *pcmsk0 = 31; //Enable PC PORT B (0 t0 5)
  *pcmsk1 = 31; //Enable PC PORT C (0 t0 5) *pcmsk2 = 255; //Enable PC PORT D (0 t0 7)
}

void Transmit()
{
  //Find out which pin is HIGH and
  //Transmit respective code at 38kHz
}
