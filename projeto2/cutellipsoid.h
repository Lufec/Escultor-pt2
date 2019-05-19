#ifndef CUTELLIPSOID_H
#define CUTELLIPSOID_H
#include "figurageometrica.h"

/**
 * @brief The CutEllipsoid class defines a Ellipsoid that will be cut in the Sculptor's 3D matrix
 */
class CutEllipsoid : public FiguraGeometrica
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
public:
    /**
     * @brief Constructor of CutEllipsoid, sets parameters
     * @param _xcenter set the center in X
     * @param _ycenter set the center in Y
     * @param _zcenter set the center in Z
     * @param _rx set the x-radius
     * @param _ry set the y-radius
     * @param _rz set the z-radius
     */
    CutEllipsoid(int _xcenter, int _ycenter, int _zcenter, int _rx, int _ry, int _rz);

    /**
     * @brief draw function of CutEllipsoid, "turn off" any voxels inside constructed Ellipsoid, using function Sculptor::CutVoxel
     * @param t is the adress of constructed Sculptor
     */
    void draw(Sculptor &t);

    //! Destructor of Class CutEllipsoid
    ~CutEllipsoid();
};

#endif // CUTELLIPSOID_H
