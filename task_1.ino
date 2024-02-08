// C++ code
//
int red = 2 ;
int yellow =3 ;
int green = 4 ;
  


void setup()
{
  pinMode(red, OUTPUT);
  pinMode(yellow,OUTPUT);
  pinMode(green, OUTPUT);
}

void loop()
{
   
   digitalWrite(red,HIGH);
   digitalWrite(green,LOW);
   digitalWrite(yellow,LOW);
   delay(5000);
  
  
   digitalWrite(green,LOW);
   digitalWrite(red,HIGH);
   digitalWrite(yellow,HIGH);
   delay(2000);
   
   digitalWrite(red,HIGH); 
   digitalWrite(green,LOW);
  
   digitalWrite(yellow,HIGH);
   delay(750);
   digitalWrite(yellow,LOW);
   delay(750);

   digitalWrite(yellow,HIGH);
   delay(750);
   digitalWrite(yellow,LOW);
   delay(750);
   
   digitalWrite(yellow,HIGH);
   delay(750);
   digitalWrite(yellow,LOW);
   digitalWrite(red,LOW);
  
  
  digitalWrite(yellow,LOW);
  digitalWrite(red,LOW);
  digitalWrite(green,HIGH);
  delay(3000);
  digitalWrite(green,LOW);
}