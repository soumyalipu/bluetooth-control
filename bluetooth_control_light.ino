char value = 0;
void setup() {
  Serial.begin(9600);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  digitalWrite(3,1);
  digitalWrite(4,1);
  digitalWrite(5,1);
}

void loop() {
  if (Serial.available() > 0)
    {
      value = Serial.read();
      Serial.println(value);
      if (value == 'a'){
        digitalWrite(3,0);
      }
      else if(value == 'b'){
        digitalWrite(3,1);
      }
      if (value == 'c'){
        digitalWrite(4,0);
      }
      else if(value == 'd'){
        digitalWrite(4,1);
      }
      if (value == 'e'){
        digitalWrite(5,0);
      }
      else if(value == 'f'){
        digitalWrite(5,1);
      }
    }
}
