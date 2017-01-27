//declaring variables
int EN = 10;
int IN1 = 6;
int IN2 = 8;
int IN1B = 2;
int IN2B = 4;
int ENB = 11;

//declaring input output modes
void setup() {
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(EN, OUTPUT);
  pinMode(IN1B, OUTPUT);
  pinMode(IN2B, OUTPUT);
  pinMode(ENB, OUTPUT);
}
void loop() {
  delay(1000); // wait 1 sec
  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);
  digitalWrite(EN,HIGH); // go forwards
  delay(4900); // wait 4.9 sec
  digitalWrite(EN,LOW);
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,HIGH);
  delay(1000);// stop motor 1 and wait one sec
  digitalWrite(IN1B,HIGH);
  digitalWrite(IN2B,LOW);
  digitalWrite(ENB,HIGH); // start motor 2
  delay(1000); // wait 1 sec
  digitalWrite(IN1B,HIGH);
  digitalWrite(IN2B,LOW);
  digitalWrite(ENB,LOW);  // stop motor 2
  while(1)
  { // stop forever so that it doesn’t loop
   }
}

