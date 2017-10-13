#ifndef SENSOR_H
#define SENSOR_H

//#include <wiringPi.h>

class Sensor {
  public:
    Sensor();
    virtual ~Sensor();
    int testing();
    void openWindow();
    void closeWindow();
    bool isWindowOpen();
	bool isRaining();
	int getTemperature();
	bool isDay();

    void setConditionstoSimulate(int led, int rain, int temp,  int light);
    
  private:
	int LED;
	int DHT11;
	int LDR;
	int RAIN;

};
#endif /* SENSOR_H */
