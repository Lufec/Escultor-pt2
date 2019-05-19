#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include "sculptor.h"
#include <iostream>

using namespace std;
/**
 * @brief The FiguraGeometrica class is the superclass that will reference all classes that works with shapes
 */
class FiguraGeometrica
{
public:
    //! Constructor of FiguraGeometrica, used as pointer in a vector
    FiguraGeometrica();

    /**
     * @brief virtual draw function of FiguraGeometrica, used to call others draw functions, depending on which class is pointing
     * @param t is the adress of constructed Sculptor
     */
    virtual void draw(Sculptor &t)=0;

    //! Destructor of FiguraGeometrica
    virtual  ~FiguraGeometrica();

};

#endif // FIGURAGEOMETRICA_H
