#include <RTClib.h>
#include <Wire.h>
#include "RTClib.h"

#define neb 5

RTC_DS1307 rtc;

void setup() {
  rtc.begin();
  pinMode(neb,OUTPUT);
}


void acionamento_vent_min(){
  DateTime atual = rtc.now();
  DateTime timer (atual + TimeSpan(0,0,0,5));
    if(atual.second() == timer.second()) digitalWrite(neb,1);
}

void executar(){
  acionamento_vent_min();
}
  
void loop() {
  executar();
}
 
