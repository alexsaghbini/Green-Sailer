char t;
 
void setup() {
pinMode(12,OUTPUT);
pinMode(11,OUTPUT);
pinMode(6,OUTPUT); 
pinMode(5,OUTPUT); 
 
Serial.begin(9600);
 
}
 
void loop() {
if(Serial.available()){
  t = Serial.read();
  Serial.println(t);
}
 
if(t == '1'){           
  digitalWrite(12,HIGH);
  digitalWrite(11,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(5,LOW);
}
 
else if(t == '2'){     
  digitalWrite(12,LOW);
  digitalWrite(11,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(5,HIGH);
}
 
else if(t == '3'){
  digitalWrite(12,LOW);
  digitalWrite(11,LOW);
  digitalWrite(6,LOW);
  digitalWrite(5,HIGH);
}
 
else if(t == '4'){
  digitalWrite(12,LOW);
  digitalWrite(11,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(5,LOW);
}
 
else if(t == '0'){   
  digitalWrite(12,LOW);
  digitalWrite(11,LOW);
  digitalWrite(6,LOW);
  digitalWrite(5,LOW);
}
delay(100);
}