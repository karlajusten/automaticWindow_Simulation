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

bool Sensor::isRaining(){
  if(RAIN == 1)
	return true;
  return false;
}

int Sensor::getTemperature(){
	return DHT11;
}

bool Sensor::isDay(){
  if(LDR == 1)
	return true;
  return false;
}


/**
	led = 1 = HIGH = window open = ON;	 0 = LOW = window close = OFF;
	rain = 0 = not raining; 			 1 = raining;
	light = 0 = night; 					 1 = day;
	temp = [0,50] em graus Celsius; -1 = error;
**/
void Sensor::setConditionstoSimulate(int led, int rain, int temp,  int light){
	if (led == 0 || led == 1)
		LED = led;		
	else
		throw std::runtime_error("ERROR: value LED not excepted:" + std::to_string(led) + "It's 0 or 1.");

	if (rain == 0 || rain == 1)
		RAIN = rain;		
	else
		throw std::runtime_error("ERROR: value RAIN not excepted:" + std::to_string(rain) + "It's 0 or 1.");

	if (temp >= 0 || temp <=50)
		DHT11 = temp; //na versão não simulada precisará ser tratado o dado recebido pelo DHT11 para conseguir extrair a temperatura;	
	else
		throw std::runtime_error("ERROR: value temperature not excepted:" + std::to_string(temp));

	if (light == 0 || light == 1)
		LDR = light;		
	else
		throw std::runtime_error("ERROR: value LDR not excepted:" + std::to_string(light));
}

