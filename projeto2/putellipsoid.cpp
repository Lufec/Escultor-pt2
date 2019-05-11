#include "putellipsoid.h"

PutEllipsoid::PutEllipsoid(int _xcenter, int _ycenter, int _zcenter, int _rx, int _ry, int _rz)
{
    xcenter=_xcenter;
    ycenter=_ycenter;
    zcenter=_zcenter;
    rx=_rx;
    ry=_ry;
    rz=_rz;
}

PutEllipsoid::~PutEllipsoid()
{

}

void PutEllipsoid::draw(Sculptor &t){


}
