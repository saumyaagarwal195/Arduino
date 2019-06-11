const int LED=13;
const int GSR2=A2;
const int GSR1=A1;
String add=""; 
//int threshold=0;
int sensorValue1;
int sensorValue2;
float sum=0;
void setup(){
  //long sum=0;
  Serial.begin(9600);
  //pinMode(LED,OUTPUT);
  //digitalWrite(LED,LOW);
  //delay(1000);
  }

void loop(){
  //int temp;
  sensorValue1=analogRead(GSR1);
  sensorValue2=analogRead(GSR2);
  sum=(sensorValue1+sensorValue2)/2;
  //add=sensorValue1+"."+sensorValue2;
  //Serial.print(add);
  //Serial.print("\t");
  Serial.print(sensorValue1);
  Serial.print(".");
  Serial.println(sensorValue2);
  delay(2000);
}
