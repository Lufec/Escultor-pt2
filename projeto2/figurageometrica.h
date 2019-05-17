#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include "sculptor.h"
#include <iostream>

using namespace std;

class FiguraGeometrica
{
public:
    FiguraGeometrica();
    virtual void draw(Sculptor &t)=0;
    virtual  ~FiguraGeometrica();

};

#endif // FIGURAGEOMETRICA_H
