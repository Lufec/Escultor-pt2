#ifndef PUTELLIPSOID_H
#define PUTELLIPSOID_H
#include "figurageometrica.h"


class PutEllipsoid : public FiguraGeometrica
{
    int xcenter, ycenter, zcenter, rx, ry, rz;
public:
    PutEllipsoid(int _xcenter, int _ycenter, int _zcenter, int _rx, int _ry, int _rz);
    void draw(Sculptor &t);
    ~PutEllipsoid();

};

#endif // PUTELLIPSOID_H
