#include <iostream>

#include "Brain.h"

Brain::Brain(){}

Brain::~Brain() {}

void Brain::test(){

	update();
	act();
}

void Brain::update(){

	rain = sensor.isRaining();
	day = sensor.isDay();
	temperatureNow = sensor.getTemperature();
	automaticOn = isAutomatic();
}

void Brain::act(){

	if(automaticOn){
		if(sensor.isWindowOpen()){ 	//Window is open?
			if((rain) || (config.getMinTemp() > temperatureNow)){
			sensor.closeWindow();
			std::cout << "Close the window!" << std::endl;
			}
		}else{				//Window is closed.
			if(config.getMaxTemp() < temperatureNow){
			sensor.openWindow();
			std::cout << "Open the window!" << std::endl;
			}
		}
	}

}

bool Brain::isAutomatic(){

	if(day){		//is it day?
		if(config.isAutomaticDay()){// Automatic on day is on?
			return true;//It's on automatic mode
			}
			return false;//It's on manual mode
	}else{			//it's night.
		if(config.isAutomaticNight()){//Automatic on night is on?
			return true;//It's on automatic mode
			}
			return false;//It's on manual mode
	}

}
