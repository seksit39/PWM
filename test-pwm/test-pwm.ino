int pwmDelay = 0;
const uint16_t sine[8]  = {2048,3495,4095,3495,2048,600,0,600}; 
void setup() {
  Serial.begin(115200);
  pinMode(9,OUTPUT);      // PIN 9 PWM OUT
}

void loop() {
  for(int i=0 ; i<8 ; i++){
    int pwmOut = map(sine[i],0,4095,0,255); // Mapping from 0-4095 to 0-255
    analogWrite(9,pwmOut); 
    delayMicroseconds(400);                 // Delay for change frequncy from 840 Hz to 200 Hz
  }
}
