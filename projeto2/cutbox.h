#ifndef CUTBOX_H
#define CUTBOX_H
#include "figurageometrica.h"

/**
 * @brief The CutBox class defines a box that will be cut in the Sculptor's 3D matrix
 */
class CutBox : public FiguraGeometrica
{
 //!Initial position X of the box
 int x0;
 //!Initial position Y of the box
 int y0;
 //!Initial position Z of the box
 int z0;
 //!Final position X of the box
 int x1;
 //!Final position Y of the box
 int y1;
 //!Final position Z of the box
 int z1;

public:
 /**
     * @brief Constructor of CutBox, sets the parameters
     * @param _x0 Sets position x0
     * @param _x1 Sets position y0
     * @param _y0 Sets position z0
     * @param _y1 Sets position x1
     * @param _z0 Sets position y1
     * @param _z1 Sets position z1
     */
    CutBox(int _x0, int _x1, int _y0, int _y1, int _z0, int _z1);

    /**
     * @brief Draw function of CutBox, "turn off" any voxels inside the constructed Box, using function Sculptor::CutVoxel
     * @param t is the adress of constructed Sculptor
     */
    void draw(Sculptor &t);
    //! Destructor of Class CutBox;
    ~CutBox();
};

#endif // CUTBOX_H
