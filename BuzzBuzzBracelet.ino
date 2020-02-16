int touch_pin_number = A0;
int BUZZ_PIN_NUMBER = 9;
int TOUCH_SENSOR_VALUE= 0;
int VALUE_THRESHOLD = 800;
void setup()
{
Serial.begin(9600);
delay(1000); 
pinMode (BUZZ_PIN_NUMBER, OUTPUT);
pinMode(touch_pin_number, INPUT);
}
void loop(){
TOUCH_SENSOR_VALUE = analogRead(touch_pin_number);
Serial.println(TOUCH_SENSOR_VALUE);
if(TOUCH_SENSOR_VALUE > VALUE_THRESHOLD)
{
digitalWrite(BUZZ_PIN_NUMBER, HIGH);
}
else{
digitalWrite(BUZZ_PIN_NUMBER, LOW);
}
}
