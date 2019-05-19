#ifndef PUTVOXEL_H
#define PUTVOXEL_H
#include "figurageometrica.h"

/**
 * @brief The PutVoxel class creates a voxel with ceratin color and transparency in the Sculptor's 3D matrix
 */
class PutVoxel : public FiguraGeometrica
{
    //! Parameter "x" of voxel
    int x;
    //! Parameter "y" of voxel
    int y;
    //! Parameter "z" of voxel
    int z;
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
    * @brief Constructor of PutVoxel, sets parameters
    * @param _x set the x position
    * @param _y set the y position
    * @param _z set the z position
    * @param _r Set red component of color
    * @param _g Set green component of color
    * @param _b Set blue component of color
    * @param _a Set transparency of Voxel
    */
    PutVoxel(int _x, int _y, int _z, float _r, float _g, float _b, float _a);
    /**
     * @brief draw function of PutVoxel, sets the colors and transparency parameters of Voxel, then "turn on" given Voxel constructed previously. Uses functions Sculptor::SetColor and Sculptor::PutVoxel
     * @param t is the adress of constructed Sculptor
     */
    void draw(Sculptor &t);
    //! Destructor of PutVoxel
    ~PutVoxel();
};

#endif // PUTVOXEL_H
