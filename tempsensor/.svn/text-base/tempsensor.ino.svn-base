
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
