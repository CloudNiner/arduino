#include "Arduino.h"

int ledPin = 13;

void setup() {
	pinMode(ledPin, OUTPUT);
}

void loop() {
	digitalWrite(ledPin, HIGH);
	delay(1000);
	digitalWrite(ledPin, LOW);
	delay(3000);
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

