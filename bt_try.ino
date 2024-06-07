int enA =3;
int in1 = 8;
int in2 = 4;

int enB = 6;
int in3 = 5;
int in4 = 7;

char t;

void setup()
{
  pinMode(enA, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(enB, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);

  Serial.begin(9600);
 
}

void loop()
{
  if(Serial.available()){
  t = Serial.read();
  Serial.println(t);
}
  if(t == '1')
  {  
    digitalWrite(in1,HIGH);//Move forward for 1.5 seconds
    digitalWrite(in2,LOW);
    digitalWrite(in3,LOW);
    digitalWrite(in4,HIGH);
    analogWrite(enA,255);
    analogWrite(enB,255);
  }

  else if(t == '2')
  {
    digitalWrite(in1,LOW);//Move backward for 1.5 seconds
    digitalWrite(in2,HIGH);
    digitalWrite(in3,HIGH);
    digitalWrite(in4,LOW);
    analogWrite(enA,255);
    analogWrite(enB,255);
  }

  else if(t == '4') //Turn left
  { 
    digitalWrite(in1,HIGH);//Turn for 0.5 seconds
    digitalWrite(in2,LOW);
    digitalWrite(in3,HIGH);
    digitalWrite(in4,LOW);
    analogWrite(enA,255);
    analogWrite(enB,255);
  }

  else if(t == '3') //Turn Right
  { 
  digitalWrite(in1,LOW);//Turn for 0.5 seconds
  digitalWrite(in2,HIGH);
  digitalWrite(in3,LOW);
  digitalWrite(in4,HIGH);
  analogWrite(enA,255);
  analogWrite(enB,255);
  }

  else if(t == '5')
  {
  digitalWrite(in1,LOW);//Stop for 0.5 seconds
  digitalWrite(in2,LOW);
  digitalWrite(in3,LOW);
  digitalWrite(in4,LOW);
  analogWrite(enA,0);
  analogWrite(enB,0);
  }

}
