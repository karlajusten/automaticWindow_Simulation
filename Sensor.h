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

    void setConditionstoSimulate(int led, int light, int rain, int temp);
    
  private:
	int LED;
	int DHT11;
	int LDR;
	int RAIN;

};
#endif /* SENSOR_H */
