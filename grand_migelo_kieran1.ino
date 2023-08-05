int green1 = 11;
int green2 = 3;



void setup()
{ 
  pinMode(11, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(12,INPUT);
  pinMode(13,INPUT);
}

void loop()
{
   int switch1 = digitalRead(12);
  switch(switch1){
    case 1:
    analogWrite(11,0);
    analogWrite(9,0);
    delay(50);
    analogWrite(11,25);
    analogWrite(9,50);
    delay(50);
    analogWrite(11,50);
    analogWrite(9,100);
    delay(50);
    analogWrite(11,75);
    analogWrite(9,100);
    delay(50);
    analogWrite(11,100);
    analogWrite(9,150);
    delay(50);
    analogWrite(11,125);
    analogWrite(9,255);
    while( digitalRead(12)==HIGH);
    break;
    case 0:
    analogWrite(11,127);
    analogWrite(9,255);
    delay(50);
    analogWrite(11,100);
    analogWrite(9,200);
    delay(50);
    analogWrite(11,75);
    analogWrite(9,150);
    delay(50);
    analogWrite(11,50);
    analogWrite(9,100);
    delay(50);
    analogWrite(11,25);
    analogWrite(9,50);
    delay(50);
    analogWrite(11,0);
    analogWrite(9,0);
    while( digitalRead(12)==LOW);
    break;
  }
  int switch2 = digitalRead(13);
  switch(switch2){
    case 1:
    analogWrite(3,0);
    analogWrite(4,0);
    delay(50);
     analogWrite(3,25);
     analogWrite(4,50);
     delay(50);
     analogWrite(3,50);
     analogWrite(4,100);
     delay(50);
     analogWrite(3,75);
     analogWrite(4,100);
     delay(50);
     analogWrite(3,100);
     analogWrite(4,150);
     delay(50);
     analogWrite(3,125);
     analogWrite(4,255);
    while( digitalRead(13)==HIGH);
    break;
    case 0:
    analogWrite(3,127);
        analogWrite(4,255);
    delay(50);
     analogWrite(3,100);
        analogWrite(4,200);
    delay(50);
     analogWrite(3,75);
        analogWrite(4,150);
    delay(50);
     analogWrite(3,50);
        analogWrite(4,100);
    delay(50);
     analogWrite(3,25);
        analogWrite(4,50);
    delay(50);
     analogWrite(3,0);
        analogWrite(4,0);
    while( digitalRead(13)==LOW);
    break;
  }
  
}