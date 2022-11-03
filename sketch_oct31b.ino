void setup() {
  Serial.begin(57600);
}

void loop() {
  float t = micros()/1.0e6;
  float xn = sin(2*PI*0.5*t);  
  float yn = 0.5*sin(2*PI*1*t); 
  delay(100);  // to make loop() speed 1kHz
  Serial.print(xn);   
  Serial.print(" ");   
  Serial.println(yn);   
}
