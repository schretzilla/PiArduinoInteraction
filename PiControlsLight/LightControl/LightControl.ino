// Turns an LED on and off with serial Input from python
int LED = 13;
int msgFromPi;

void setup()
{
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
}

void loop()
{
  if (Serial.available() > 0 )
  {
    msgFromPi = Serial.read();
    Serial.println("Message from Pi: " + String(msgFromPi));
    
    //Determine if the Pi wants the light on or off
    if(msgFromPi == 0 )
    {
      //turn light off
      Serial.println("Turn light off...");
      digitalWrite(LED, LOW);
    }
    else if(msgFromPi == 1)
    {
      Serial.println("Turn light on...");
      digitalWrite(LED, HIGH);
    }
  }
}
