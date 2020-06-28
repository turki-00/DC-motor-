

//name of each pin used

int in1=11; //input1 for 1st DC motor.
int in2=10; //input2 for 1st DC motor.
int in3=5;  //input1 for 2nd DC motor.
int in4=4;  //input2 for 2nd DC motor.

//pins used to controll movment of DC motors.
int cont1=A0; 
int cont2=A1;
int cont3=A2;
int cont4=A3;

//mode for each pin used.
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(1,OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(cont1, INPUT);
  pinMode(cont2, INPUT);
  pinMode(cont3,INPUT);
  pinMode(cont4,INPUT);
  digitalWrite(13, HIGH);
  digitalWrite(1, HIGH);
  
}

void loop()
{
int state1=digitalRead(cont1); 
int state2=digitalRead(cont2); 
int state3=digitalRead(cont3);
int state4=digitalRead(cont4); 


  //following block to run 1st DC motorc in clockwise.
  if(state1 == HIGH){
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
  }
  
  
  if (state2 == HIGH){
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);
  }
  
  //delay(4000);
 //following block run DC motor in anti clockwise
  else if (state3 == HIGH){
    digitalWrite(in1, LOW);
    digitalWrite(in2, HIGH);
     
 }

  else if (state4 == HIGH){
    digitalWrite(in3, LOW);
    digitalWrite(in4, HIGH);
  }
  
  else if ((state1 == LOW)& (state3 == LOW)){
    digitalWrite(in1, LOW);
    digitalWrite(in2, LOW);
  }

  if ((state2 == LOW)& (state4 == LOW)){
    digitalWrite(in3, LOW);
    digitalWrite(in4, LOW);
  }
 
}
