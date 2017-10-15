#ifndef BRAIN_H
#define BRAIN_H

#include "Sensor.h"
#include "Configuration.h"

class Brain {
  public:
    Brain();
    virtual ~Brain();
    void test();

  private:
    Sensor sensor;  
	Configuration config;

};
#endif /* BRAIN_H */
