#ifndef PUTVOXEL_H
#define PUTVOXEL_H
#include "figurageometrica.h"


class PutVoxel : public FiguraGeometrica
{
    int x, y, z;
public:
    PutVoxel(int _x, int _y, int _z);
    void draw(Sculptor &t);
    ~PutVoxel();
};

#endif // PUTVOXEL_H
