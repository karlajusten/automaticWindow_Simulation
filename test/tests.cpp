#include "gtest/gtest.h"

#include <vector>

#include "Brain.h"
#include "Sensor.h"
#include "Configuration.h"


/**
	Informations about the data received by the sensors

	led = 1 = HIGH = window open = ON;
	led = 0 = LOW = window close = OFF;

	rain = 0 = not raining;
	rain = 1 = raining;

	light = 0 = night;
	light = 1 = day;

	temp = [0,50] em graus Celsius; -1 = error;
**/

TEST(Example,AutomaticWindow) {

	Sensor sensor;
	Configuration config;
	Brain brain;
	

	sensor.setConditionstoSimulate(1, 0, 20, 1); // led, chuva, temperatura, luz
	config.setAutomaticDay(true);
	config.setAutomaticNight(true);
	config.setMinTemp(17);
	config.setMaxTemp(24);
	sensor.openWindow();
	//chamar o método do brain que irá fazer o processamento de automatização
	brain.test();
	EXPECT_EQ(true, sensor.isOpen());
}

