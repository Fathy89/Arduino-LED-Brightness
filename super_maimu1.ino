// C++ code
//
void setup()
{
  pinMode(9,OUTPUT)  ;
}

void loop()
{
 analogWrite(9, 255);
delay(1000);
analogWrite(9, 128);
delay(1000);
analogWrite(9,65);
delay(1000);
analogWrite(9,255);
delay(1000);
analogWrite(9,65 );
delay(1000);
analogWrite(9,0 );
delay(1000);

}