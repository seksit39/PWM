int pwmDelay = 0;
const uint16_t sine[8]  = {2048,3495,4095,3495,2048,600,0,600}; 
void setup() {
  Serial.begin(115200);
  pinMode(9,OUTPUT);      // PIN 9 PWM OUT
}

void loop() {
  for(int i=0 ; i<8 ; i++){
    analogWrite(9,sine[i]); 
  }
}
