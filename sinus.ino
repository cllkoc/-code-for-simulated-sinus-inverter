unsigned long int degree = 0;
float rad = 0;
float result = 0;
void setup() {
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(10,OUTPUT);

}

void loop() {
  degree++;
  rad = degree*0.0175;
  result = sin(rad);
  
  if(result < 0)
  {
   alternans1();
   analogWrite(10,result*-1*255);
  }
  else
  {
    alternans2();
    analogWrite(10,result*255);
  }
  if(degree == 360)
  degree = -1;
  delayMicroseconds(55); //55
}
void alternans1()
{
 digitalWrite(4,LOW);
 digitalWrite(5,HIGH);  
}
void alternans2()
{
  digitalWrite(5,LOW);
  digitalWrite(4,HIGH);
}

