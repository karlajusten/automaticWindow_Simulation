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

	Sensor sensor;
	Configuration config;
	Brain brain;
	
	sensor.setConditionstoSimulate(1, 0, 20, 1); // led, chuva, temperatura, luz
	config.setAutomaticDay(true);
	config.setAutomaticNight(true);
	config.setMinTemp(17);
	config.setMaxTemp(24);
	sensor.openWindow();

TEST(Linha1,AutomaticWindow) {

	brain.test();
	EXPECT_EQ(true, sensor.isOpen());
}
TEST(Linha2,AutomaticWindow) {

	sensor.setConditionstoSimulate(1, 0, 24, 1); // led, chuva, temperatura, luz
	brain.test();
	EXPECT_EQ(true, sensor.isOpen());
}
TEST(Linha3,AutomaticWindow) {

	sensor.setConditionstoSimulate(1, 0, 25, 1); // led, chuva, temperatura, luz
	brain.test();
	EXPECT_EQ(true, sensor.isOpen());
}
TEST(Linha4,AutomaticWindow) {

	sensor.setConditionstoSimulate(1, 0, 23, 1); // led, chuva, temperatura, luz
	brain.test();
	EXPECT_EQ(true, sensor.isOpen());
}
TEST(Linha5,AutomaticWindow) {

	sensor.setConditionstoSimulate(1, 1, 21, 1); // led, chuva, temperatura, luz
	brain.test();
	EXPECT_EQ(false, sensor.isOpen());
}
TEST(Linha6,AutomaticWindow) {

	sensor.setConditionstoSimulate(0, 1, 20, 1); // led, chuva, temperatura, luz
	brain.test();
	EXPECT_EQ(false, sensor.isOpen());
}
TEST(Linha7,AutomaticWindow) {

	sensor.setConditionstoSimulate(0, 0,19, 0); // led, chuva, temperatura, luz
	brain.test();
	EXPECT_EQ(false, sensor.isOpen());
}
TEST(Linha8,AutomaticWindow) {

	sensor.setConditionstoSimulate(0, 0, 18, 0); // led, chuva, temperatura, luz
	brain.test();
	EXPECT_EQ(false, sensor.isOpen());
}
TEST(Linha9,AutomaticWindow) {

	sensor.setConditionstoSimulate(0, 0,17, 0); // led, chuva, temperatura, luz
	brain.test();
	EXPECT_EQ(false, sensor.isOpen());
}
TEST(Linha10,AutomaticWindow) {

	sensor.setConditionstoSimulate(0, 0,16, 0); // led, chuva, temperatura, luz
	brain.test();
	EXPECT_EQ(false, sensor.isOpen());
}
TEST(Linha11,AutomaticWindow) {

	sensor.setConditionstoSimulate(0, 0,25, 0); // led, chuva, temperatura, luz
	brain.test();
	EXPECT_EQ(true, sensor.isOpen());
}
