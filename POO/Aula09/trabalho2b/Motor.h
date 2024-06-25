#ifndef MOTOR_H
#define MOTOR_H

#include <string>

using namespace std;

class Motor {
private:
    string tipo;
    float capacidadeLitros;

public:
    Motor(const string& tipo, float capacidadeLitros);
    ~Motor();
};

#endif
