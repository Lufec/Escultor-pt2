#ifndef CUTVOXEL_H
#define CUTVOXEL_H
#include "figurageometrica.h"


class CutVoxel : public FiguraGeometrica
{
     int x, y, z;
public:
    CutVoxel(int _x, int _y, int _z);
    void draw(Sculptor &t);
    ~CutVoxel();
};

#endif // CUTVOXEL_H
