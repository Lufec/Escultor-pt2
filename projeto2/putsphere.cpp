#include "putsphere.h"

PutSphere::PutSphere(int _xcenter, int _ycenter, int _zcenter, int _radius, float _r, float _g, float _b, float _a)
{
    xcenter=_xcenter; ycenter=_ycenter;
    zcenter=_zcenter; radius=_radius;
    r=_r; g=_g; b=_b; a=_a;
}

PutSphere::~PutSphere()
{

}

void PutSphere::draw(Sculptor &t){
    t.setColor(r,g,b,a);
    t.putSphere(xcenter, ycenter, zcenter, radius);
}
