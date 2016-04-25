void setup() {
Serial.begin(9600);

// declare pin 9 to be an output:
pinMode(9, OUTPUT);
}

void loop()
{
int brightness = analogRead(2);
brightness = map(brightness, 0, 1023, 0, 255);
Serial.println(brightness);
analogWrite(9, brightness);
}
