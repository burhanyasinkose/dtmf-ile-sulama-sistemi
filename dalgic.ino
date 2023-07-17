int q1_pin=12;
int q2_pin=11;
int q3_pin=10;
int q4_pin=9;
int q5_pin=8;
int q1, q2, q3, q4, q5;

void setup(){
  Serial.begin(9600);
  pinMode(q1_pin, INPUT);
  pinMode(q2_pin, INPUT);
  pinMode(q3_pin, INPUT);
  pinMode(q4_pin, INPUT);
  pinMode(q5_pin, INPUT);
  pinMode(2, OUTPUT);
  digitalWrite(2, HIGH);
}

void loop(){
  q1=digitalRead(q1_pin);
  q2=digitalRead(q2_pin);
  q3=digitalRead(q3_pin);
  q4=digitalRead(q4_pin);
  q5=digitalRead(q5_pin);
 
  if(q1==1 && q2==0 && q3==0 && q4==0)  // 1 basılmışsa
  {
    digitalWrite(2, LOW);
     Serial.println("Role Cekti");
  }
  if(q1==0 && q2==1 && q3==0 && q4==1)  // 0 basılmışsa
  {
    digitalWrite(2, HIGH);
     Serial.println("Role Birakti");
  }
      
}
