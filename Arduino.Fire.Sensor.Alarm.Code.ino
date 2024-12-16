/*
 * Author: Ashish Vegan (Labade) | https://www.ashishvegan.com | +91-9890345539
 * Subscribe YouTube Channel - Tech Vegan Click https://www.youtube.com/channel/UCs_dbtq_OF-0HxkAQnBGapA?sub_confirmation=1
 * For Customize Hardware & Software Projects Contact Me | Email: technologyvegan@gmail.com
 * Watch Complete Video: For Code Explanation
 */
const int buzzerPin = 9;
const int fireSensorPin = 8;
void setup()
{
  Serial.begin(9600);
  pinMode(buzzerPin, OUTPUT);
  pinMode(fireSensorPin, INPUT);
}
void loop()
{
  int fireValue = digitalRead(fireSensorPin);
  Serial.println(fireValue);
  if(fireValue == 0)
  {
    digitalWrite(buzzerPin, HIGH);
    delay(5000);
  }
  else
  {
    digitalWrite(buzzerPin, LOW);
  }
  delay(500);
}
