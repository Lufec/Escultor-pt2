#include "putvoxel.h"

PutVoxel::PutVoxel(int _x, int _y, int _z, float _r, float _g, float _b, float _a)
{
    x=_x; y=_y; z=_z;
    r=_r; g=_g; b=_b; a=_a;
}

PutVoxel::~PutVoxel()
{

}

void PutVoxel::draw(Sculptor &t){
 t.setColor(r,g,b,a);
 t.putVoxel(x,y,z);

}
