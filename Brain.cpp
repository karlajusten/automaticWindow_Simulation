#include <iostream>

#include "Brain.h"

Brain::Brain(){}

Brain::~Brain() {}

void Brain::test(){

	/* Set led on and off five times. 
	And check if window is closed*/
	for (int x=0; x<5; x++){
		sensor.setConditionstoSimulate(0, 0, 25, 1);

		sensor.openWindow();
		if (sensor.isWindowOpen())
		  std::cout << "Open Window!" << std::endl;
		else
		  std::cout << "Close Window!" << std::endl;

		sensor.closeWindow();
		if (sensor.isWindowOpen())
		  std::cout << "Open Window!" << std::endl;
		else
		  std::cout << "Close Window!" << std::endl;	

		if (sensor.isRaining())
		  std::cout << "Raining!" << std::endl;
		else
		  std::cout << "Not Raining!" << std::endl;

		std::cout << "Temperature: " << sensor.getTemperature() << "C"<< std::endl;

		if (sensor.isDay())
		  std::cout << "It's Day!" << std::endl;
		else
		  std::cout << "It's Night!" << std::endl;

		sensor.setConditionstoSimulate(0, 1, 10, 0);
		if (sensor.isRaining())
		  std::cout << "Raining!" << std::endl;
		else
		  std::cout << "Not Raining!" << std::endl;

		std::cout << "Temperature: " << sensor.getTemperature() << "C"<< std::endl;

		if (sensor.isDay())
		  std::cout << "It's Day!" << std::endl;
		else
		  std::cout << "It's Night!" << std::endl;

	}
}
