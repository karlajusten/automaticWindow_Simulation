#ifndef BRAIN_H
#define BRAIN_H

#include "Sensor.h"
#include "Configuration.h"

class Brain {
  public:
    Brain();
    virtual ~Brain();
    void test();
    void update();
    void act();
    bool isAutomatic();

  private:
    Sensor sensor;  
	Configuration config;
    bool led;
    bool rain;
    bool day;
    int temperatureNow;
    int temperatureMinimum;
    int temperatureMaximum;
    bool automaticOn;

};
#endif /* BRAIN_H */
