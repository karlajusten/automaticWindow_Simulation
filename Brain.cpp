#include "Brain.h"

Brain::Brain(){}

Brain::~Brain() {}

int Brain::test(){

	sensor.setConditionstoSimulate(1, 5, 5, 5);

	/* Set led on and off five times. 
	And check if window is closed*/
	for (int x=0; x<5; x++){
	  sensor.openWindow();
	  sensor.closeWindow();
	}
	
	sensor.setConditionstoSimulate(1, 5, 5, 5);
	
	if (sensor.isWindowOpen())
		return 1;
	return 0;

}
