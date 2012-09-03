#include "Arduino.h"

#define DIGITALVALUETOVOLTS 0.004882814

int tempPin = 0;

float getVoltage(int tempPin);
float getTempFromVoltage(float tempVoltage);

void setup() {
    Serial.begin(9600);
}

void loop() {
    float tempVoltage = getVoltage(tempPin);

    Serial.println(getTempFromVoltage(tempVoltage)); 
    delay(1000);
}

float getVoltage(int tempPin) {
    return (analogRead(tempPin) * DIGITALVALUETOVOLTS);
}

float getTempFromVoltage(float tempVoltage) {
    return (tempVoltage - 0.5) * 100;
}
extern "C" void __cxa_pure_virtual() { while (1) ; }
#include <Arduino.h>

int main(void)
{
	init();

#if defined(USBCON)
	USB.attach();
#endif
	
	setup();
    
	for (;;) {
		loop();
		if (serialEventRun) serialEventRun();
	}
        
	return 0;
}

