#ifndef CUTVOXEL_H
#define CUTVOXEL_H
#include "figurageometrica.h"

/**
 * @brief The CutVoxel class defines a voxel that will be cut from the Sculptor's 3D Matrix
 */
class CutVoxel : public FiguraGeometrica
{
     //! Parameter "x" of voxel
     int x;
     //! Parameter "y" of voxel
     int y;
     //! Parameter "z" of voxel
     int z;
public:
     /**
     * @brief Constructor of CutVoxel, sets parameters
     * @param _x set the x position
     * @param _y set the y position
     * @param _z set the z position
     */

    CutVoxel(int _x, int _y, int _z);

    /**
     * @brief draw function of CutVoxel, "turn off" constructed Voxel, using function Sculptor::CutVoxel
     * @param t is the adress of constructed Sculptor
     */
    void draw(Sculptor &t);
    //! Destructor of CutVoxel
    ~CutVoxel();
};

#endif // CUTVOXEL_H
