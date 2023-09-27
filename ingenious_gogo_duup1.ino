int led = 5;
 int on = HIGH;
 int off = LOW;
int Dec = 255;
int Inc = 0;

void setup()
{
  pinMode(led, OUTPUT);
}

void loop()
{
  Dec= 255;
  for(int i=255; i>0; i-=5)
  {
    analogWrite(led, Dec);
    delay(40);
    Dec-=5;
  }
  Inc = 0;
  for(int i1=0; i1<255; i1+=5)
  {
    analogWrite(led, Inc);
    delay(25);
    Inc+=5;
  }
  delay(200);
}