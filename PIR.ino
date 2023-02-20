// Documentation
// Name : Yohjit Chopra
// ROll No. 2110994798

int SensorPIR = 12;
int value = 0;
int LED = 2;

void setup()
{
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
  pinMode(SensorPIR, INPUT);
}

void loop()
{
  value = digitalRead(SensorPIR);
  if (value)
  {
    digitalWrite(LED, 1);
    Serial.println("Motion Detected");
  }
  else
  {
    digitalWrite(LED, 0);
    Serial.println("NO Motion Detected");
  }
  delay(1000);
}
