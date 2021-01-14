#include <EEPROM.h>

// start reading from the first byte (address 0) of the EEPROM
int address = 0;
int count = 0;
byte value = 10;

void setup() {
  Serial.begin(9600);
  value = EEPROM.read(address);
}

void loop() {
  Serial.print(value);
  Serial.print("  ");
  Serial.println(count);
  EEPROM.update(address, value);
  count++;
  value++;
  delay(1000);
}
