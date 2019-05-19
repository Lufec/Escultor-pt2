#ifndef PUTSPHERE_H
#define PUTSPHERE_H
#include "figurageometrica.h"

/**
 * @brief The PutSphere class creates a Sphere with certain color and transparency in the Sculptor's 3D matrix
 */
class PutSphere : public FiguraGeometrica
{
    //! Parameter "x" of Sphere center
    int xcenter;
    //! Parameter "y" of Sphere center
    int ycenter;
    //! Parameter "z" of Sphere center
    int zcenter;
    //! Parameter "radius" of Sphere
    int radius;
    //!Red Component of color
    float r;
    //!Green Component of color
    float g;
    //!Blue Component of color
    float b;
    //!Transparency component of voxel
    float a;

public:
    /**
     * @brief Constructor of CutSphere, sets parameters
     * @param _xcenter set x-center
     * @param _ycenter set y-center
     * @param _zcenter set z-center
     * @param _radius set radius
     * @param _r Set red component of color
     * @param _g Set green component of color
     * @param _b Set blue component of color
     * @param _a Set transparency of Sphere
     */
    PutSphere(int _xcenter, int _ycenter, int _zcenter, int _radius, float _r, float _g, float _b, float _a);

    /**
     * @brief draw function of PutSphere, sets the colors and transparency parameters of Sphere, then "turn on" any voxels inside of constructed Sphere. Uses functions Sculptor::SetColor and Sculptor::PutVoxel
     * @param t is the adress of constructed Sculptor
     */
    void draw(Sculptor &t);
   //! Destructor of PutSphere
    ~PutSphere();
};

#endif // PUTSPHERE_H
