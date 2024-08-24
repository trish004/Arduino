void setup(){
  for(int i =2 ; i < 14 ;i++){ // choose pins 2-13
    pinMode(i, OUTPUT); //setup pins as output 
  }
}

void allLEDsOff(void){
   for(int i =2 ; i < 14 ;i++){ // choose pins 2-13
 digitalWrite(i, LOW);
  }
}// function to turn off all leds at the sametime 

void loop(){
   for(int i =2 ; i < 14 ;i++){ //left to right once then switch off 
    allLEDsOff();
    digitalWrite(i, HIGH);
    delay(1000);
  }

   for(int i =14 ; i > 2 ;i--){ // right to left 
    allLEDsOff();
    digitalWrite(i, HIGH);
    delay(1000);
  }
}