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
    float dx,dy,dz;
    int x1 = xcenter-radius, x2 = xcenter+radius, y1 = ycenter-radius,
        y2 = ycenter+radius, z1 = zcenter-radius, z2 = zcenter+radius;
    for(int i=x1; i<x2; i++){
        dx=((static_cast<float>(i)-xcenter)/radius)*((static_cast<float>(i)-xcenter)/radius);
        for(int j=y1; j<y2; j++){
            dy=((static_cast<float>(j)-ycenter)/radius)*((static_cast<float>(j)-ycenter)/radius);
            for (int k=z1; k<z2; k++) {
                dz=((static_cast<float>(k)-zcenter)/radius)*((static_cast<float>(k)-zcenter)/radius);

                if(dx+dy+dz<=1){
                    t.putVoxel(i,j,k);
                }
            }
        }
    }
}
