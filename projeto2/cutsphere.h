#ifndef CUTSPHERE_H
#define CUTSPHERE_H
#include "figurageometrica.h"

/**
 * @brief The CutSphere class defines a Sphere that will be cut from the Sculptor's 3D matrix
 */
class CutSphere : public FiguraGeometrica
{
    //! Parameter "x" of Sphere center
    int xcenter;
    //! Parameter "y" of Sphere center
    int ycenter;
    //! Parameter "z" of Sphere center
    int zcenter;
    //! Parameter "radius" of Sphere
    int radius;
public:
    /**
     * @brief Constructor of CutSphere, sets parameters
     * @param _xcenter set x-center
     * @param _ycenter set y-center
     * @param _zcenter set z-center
     * @param _radius set radius
     */
    CutSphere(int _xcenter, int _ycenter, int _zcenter, int _radius);

    /**
     * @brief draw function of CutSphere, "turn off" any voxels inside constructed Sphere, using function Sculptor::CutVoxel
     * @param t is the adress of constructed Sculptor
     */
    void draw(Sculptor &t);

    //! Destructor of CutSphere
    ~CutSphere();

};

#endif // CUTSPHERE_H
