bluetooth module with pir sensor      
BY DEBANKAR SHUBHRAM

int sensor = 13;//defining the pin
int state = 0; //defing a variable
void setup() {
  pinMode(sensor,INPUT);
  Serial.begin(9600);
  

}

void loop() {
 int val = digitalRead(sensor);
 if(val == 0 && state == 0){       //condition
  Serial.println("A");             //statement
  state = HIGH;
  delay(1000); 
 }
 else if(val == 0 && state == 1){     //condition
  Serial.println("a");                //statement
  state = LOW;
  delay(1000);
 }
 delay(1000);
}
