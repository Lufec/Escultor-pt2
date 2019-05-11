#ifndef PUTSPHERE_H
#define PUTSPHERE_H
#include "figurageometrica.h"


class PutSphere : public FiguraGeometrica
{
    int xcenter, ycenter, zcenter, radius;
public:
    PutSphere(int _xcenter, int _ycenter, int _zcenter, int _radius);
    void draw(Sculptor &t);
    ~PutSphere();
};

#endif // PUTSPHERE_H
