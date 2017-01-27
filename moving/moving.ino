//declaring variables
int EN = 10;
int IN1 = 6;
int IN2 = 8;

//declaring input output modes
void setup() 
{
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(EN, OUTPUT);
}

void loop()
{
    delay(1000);   //wait 1 sec

    digitalWrite(EN,HIGH);
    digitalWrite(IN1,HIGH);
    digitalWrite(IN2,LOW); // start motor 1 forwards

    delay(10500); // wait 10.5 sec

    digitalWrite(EN,HIGH);
    digitalWrite(IN1,LOW);
    digitalWrite(IN2,LOW); 

    delay(1000); // wait 1 sec

    digitalWrite(EN,HIGH);
    digitalWrite(IN1,LOW);
    digitalWrite(IN2,HIGH); // motor goes backward

    delay(9500); //wait 9.5 sec

    digitalWrite(EN,LOW);
    digitalWrite(IN1,LOW);
    digitalWrite(IN2,HIGH); // stop motor 

    while(1)
    { // stop forever so that it doesn’t loop
      }
}

