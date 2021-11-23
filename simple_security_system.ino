#define trig 2
#define echo 3
void setup() {
pinMode(trig,OUTPUT);
pinMode(echo,INPUT);
Serial.begin(9600);
}

void loop() {
digitalWrite(trig,LOW);
delayMicroseconds(2);
digitalWrite(trig,HIGH);
delayMicroseconds(10);
digitalWrite(trig,LOW);

long t = pulseIn(echo,HIGH);
long inches = t/74/2;
long Cm = t/29/2;

Serial.print(inches);
Serial.print("in");
Serial.print(Cm);
Serial.println("cm");
  
  if(inches<20){
    //Do somthing here
    //ex- digitalWrite(1,HIGH);
}
  else{
    //Do somthing here
    //ex- digitalWrite(1,LOW);
  }
