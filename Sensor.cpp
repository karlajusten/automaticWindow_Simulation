#include "Sensor.h"
#include <iostream>

//#define	LED 17

Sensor::Sensor(){
	//wiringPiSetupGpio () ;
 	//pinMode (LED, OUTPUT) ;
}

Sensor::~Sensor() {}

void Sensor::openWindow(){
  LED = 1; // on = window open = HIGH
}

void Sensor::closeWindow(){
  LED = 0; // off = window close = LOW
}

bool Sensor::isWindowOpen(){
  //if(digitalRead(LED))
  if(LED == 1)
	return true;
  return false;
}

void Sensor::setConditionstoSimulate(int led, int light, int rain, int temp){
	if (led == 0 || led == 1)
		LED = led;		
	else
		throw std::runtime_error("ERROR: value LED not excepted:" + std::to_string(led) + "It's 0 or 1.");

	if (true)
		LDR = light;		
	else
		throw std::runtime_error("ERROR: value LDR not excepted:" + std::to_string(light));

	if (true)
		RAIN = rain;		
	else
		throw std::runtime_error("ERROR: value RAIN not excepted:" + std::to_string(rain));

	if (true)
		DHT11 = temp; //na versão não simulada precisará ser tratado o dado recebido pelo DHT11 para conseguir extrair a temperatura;	
	else
		throw std::runtime_error("ERROR: value temperature not excepted:" + std::to_string(temp));

}

