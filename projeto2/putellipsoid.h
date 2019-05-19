#ifndef PUTELLIPSOID_H
#define PUTELLIPSOID_H
#include "figurageometrica.h"

/**
 * @brief The PutEllipsoid class creates an Ellipsoid with certain color and transparency in the Sculptor's 3D matrix
 */
class PutEllipsoid : public FiguraGeometrica
{
    //! Parameter "x" of the Ellipsoid center
    int xcenter;
    //! Parameter "y" of the Ellipsoid center
    int ycenter;
    //! Parameter "z" of the Ellipsoid center
    int zcenter;
    //! Parameter "Radius in the X-dimension" of the Ellipsoid
    int  rx;
    //! Parameter "Radius in the Y-dimension" of the Ellipsoid
    int  ry;
    //! Parameter "Radius in the Z-dimension" of the Ellipsoid
    int  rz;
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
     * @brief Constructor of PutEllipsoid, sets parameters
     * @param _xcenter set the center in X
     * @param _ycenter set the center in Y
     * @param _zcenter set the center in Z
     * @param _rx set the x-radius
     * @param _ry set the y-radius
     * @param _rz set the z-radius
     * @param _r Set red component of color
     * @param _g Set green component of color
     * @param _b Set blue component of color
     * @param _a Set transparency of Ellipsoid
     */
    PutEllipsoid(int _xcenter, int _ycenter, int _zcenter, int _rx, int _ry, int _rz, float _r, float _g, float _b, float _a);
    /**
     * @brief draw function of PutEllipsoid, sets the colors and transparency parameters of Ellipsoid, then "turn on" any voxels inside of constructed Ellipsoid. Uses functions Sculptor::SetColor and Sculptor::PutVoxel
     * @param t is the adress of constructed Sculptor
     */
    void draw(Sculptor &t);
    //! Destructor of PutEllipsoid
    ~PutEllipsoid();

};

#endif // PUTELLIPSOID_H
