int value = 0;

void setup() 
{
  // put your setup code here, to run once:
  pinMode(8, OUTPUT);
  pinMode(9,INPUT);
}

void loop() 
{
  value = digitalRead(9);
  
  digitalWrite(8,value);
  delay(1000);
  digitalWrite(8,LOW);
  delay(1000);
  
  digitalWrite(8,value);
  delay(2000);
  digitalWrite(8,LOW);
  delay(2000);  
}
