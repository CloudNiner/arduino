
#define RED_LED_PIN 9
#define GREEN_LED_PIN 10
#define BLUE_LED_PIN 11
#define TEMP_SENSOR_PIN 0

// constrain(input_value, low_bound, high_bound); 
// map(input_value, from_low_bound, from_high_bound, to_low_bound, to_high_bound);

int constrainLEDColor(int value);

void setup() {

}

void loop() {
    // read in softpot value
    int tempValue = analogRead(TEMP_SENSOR_PIN);

    // set each led pin to x/255
    int redMap = map(tempValue, 0, 512, 255, 0);
    int greenMap = map(tempValue, 0, 512, 0, 255);
    int blueMap = map(tempValue, 512, 1023, 0, 255);
    
    // write led values to led
    analogWrite(RED_LED_PIN, constrainLEDColor(redMap));
    analogWrite(GREEN_LED_PIN, constrainLEDColor(greenMap));
    analogWrite(BLUE_LED_PIN, constrainLEDColor(blueMap));

    delay(200);
}

int constrainLEDColor(int value) {
    return constrain(value, 0, 255);
}


