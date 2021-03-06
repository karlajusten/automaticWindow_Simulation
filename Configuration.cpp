#include "Configuration.h"
#include <iostream>

Configuration::Configuration(){}

Configuration::~Configuration() {}

int Configuration::getMaxTemp(){
	return tempMax;
}

void Configuration::setMaxTemp(int temp){
	if (temp > tempMin)
		tempMax = temp;
	else //(temp <= tempMin)
		std::cout << "Invalid value! New temperature is lower or equal than minimum temperature" << std::endl;
}

int Configuration::getMinTemp(){
	return tempMin;
}

void Configuration::setMinTemp(int temp){
	if (temp < tempMax)
		tempMin = temp;
	else //(temp >= tempMin)
		std::cout << "Invalid value! New temperature is greater or equal than maximun temperature" << std::endl;
		
}

bool Configuration::isAutomaticDay(){
	return isAutDay;
}

void Configuration::setAutomaticDay(bool aut){
	isAutDay = aut;
}

bool Configuration::isAutomaticNight(){
	return isAutNight;
}
void Configuration::setAutomaticNight(bool aut){
	isAutNight = aut;
}
