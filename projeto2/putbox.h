#ifndef PUTBOX_H
#define PUTBOX_H
#include "figurageometrica.h"


class PutBox : public FiguraGeometrica
{
    int x0,y0,z0,x1,y1,z1;
public:
    PutBox(int _x0, int _y0, int _z0, int _x1, int _y1, int _z1);
    void draw(Sculptor &t);
    ~PutBox();
};

#endif // PUTBOX_H
