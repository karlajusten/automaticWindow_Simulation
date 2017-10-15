#include "gtest/gtest.h"

#include <vector>

#include "Brain.h"
#include "Sensor.h"


/**
	Informations about the data received by the sensors

	led = 1 = HIGH = window open = ON;	 0 = LOW = window close = OFF;
	rain = 0 = not raining; 			 1 = raining;
	light = 0 = night; 					 1 = day;
	temp = [0,50] em graus Celsius; -1 = error;
**/

TEST(Example,AutomaticWindow) {



	/*
		Como pretendes fazer:	
			1 - acessar os dados dos sensores através do objeto Brain, precisando replicar alguns métodos dos sensores no brain, para conseguirmos acessar pelo objeto brain algumas informações;
			2 - criar um objeto Sensor e enviá-lo via construtor do Brain, assim será trabalhado com o mesmo objeto sensor.		

	**/








	Brain brain;
	Sensor sensor;
	sensor.openWindow();
	sensor.setConditionstoSimulate(1, 0, 25, 1); //setConditionstoSimulate(int led, int rain, int temp,  int light)
	//chamar o método do brain que irá fazer o processamento de automatização
	EXPECT_EQ(false, sensor.isOpen());
}

