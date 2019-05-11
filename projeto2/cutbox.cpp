#include "cutbox.h"

CutBox::CutBox(int _x0, int _y0, int _z0, int _x1, int _y1, int _z1)
{
    x0=_x0; y0=_y0; z0=_z0;
    x1=_x1; y1=_y1; z1=_z1;
}

CutBox::~CutBox()
{

}

void CutBox::draw(Sculptor &t){
    t.cutBox(x0,y0,z0,x1,y1,z1);
}


