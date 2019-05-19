#ifndef PUTBOX_H
#define PUTBOX_H
#include "figurageometrica.h"

/**
 * @brief The PutBox class creates a box with certain color and transparency in the Sculptor's 3D matrix
 */
class PutBox : public FiguraGeometrica
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
     * @brief Constructor of PutBox, sets the parameters
     * @param _x0 Set position x0
     * @param _x1 Set position y0
     * @param _y0 Set position z0
     * @param _y1 Set position x1
     * @param _z0 Set position y1
     * @param _z1 Set position z1
     * @param _r Set red component of color
     * @param _g Set green component of color
     * @param _b Set blue component of color
     * @param _a Set transparency of Box
     */
    PutBox(int _x0, int _x1, int _y0, int _y1, int _z0, int _z1, float _r, float _g, float _b, float _a);

    /**
     * @brief draw function of PutBox, sets the colors and transparency parameters of Box, then "turn on" any voxels inside of constructed Box. Uses functions Sculptor::SetColor and Sculptor::PutVoxel
     * @param t is the adress of constructed Sculptor
     */
    void draw(Sculptor &t);

    //! Destructor of PutBox
    ~PutBox();
};

#endif // PUTBOX_H
