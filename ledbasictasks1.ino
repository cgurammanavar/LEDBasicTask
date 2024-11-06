void setup(){
	pinMode(13,OUTPUT);
    pinMode(12,OUTPUT);
  
  //TASK 3 SEQUENTIALLY
  digitalWrite(13,HIGH);
  delay(1000);
  digitalWrite(13,LOW);
  delay(1000);
  digitalWrite(12,HIGH);
  delay(1000);
  digitalWrite(12,LOW);
  delay(1000);
  
}

void loop(){
}

 
//TASK 1 BLINK TWO LED's ALTERNATIVELY
/*void loop(){
  digitalWrite(13,HIGH);
  delay(1000);
  digitalWrite(13,LOW);
  delay(1000);
  digitalWrite(12,HIGH);
  delay(1000);
  digitalWrite(12,LOW);
  delay(1000);
}*/

//TASK 2 SIMULTANIOUSLY
/*void loop(){
  digitalWrite(13,HIGH);
  digitalWrite(12,HIGH);
  delay(1000);
  digitalWrite(13,LOW);
  digitalWrite(12,LOW);
  delay(1000);
}*/