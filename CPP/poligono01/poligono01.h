#include <iostream>
#include <string>
#include <math.h>
using namespace std;

class poligono01
{
private:
    float lado;
public:
    void set_lado(float);
    float get_lado();
};

class quadrado : public poligono
{
public:
    float calcula_area(float);
};
class triangulo : public triangulo
{
public:
    float calcula_area(float);
};
#endif
