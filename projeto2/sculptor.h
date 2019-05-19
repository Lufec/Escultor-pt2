#ifndef SCULPTOR_H
#define SCULPTOR_H

#include <string>

/**
 * @brief The Voxel struct is like a "pixel" with 3 properties: Color (r,g,b), transparency (a) and its current Status(on/off)
 */
struct Voxel {

    //!Red Component of color
    float r;
    //!Green Component of color
    float g;
    //!Blue Component of color
    float b;
    //!Transparency component of voxel
    float a;
    //! Status of Voxel: if "on", will be drawn, if "off", won't be drawn
    bool isOn; // Included or not
};

/**
 * @brief The Sculptor class is the workspace where everything will be drawn and created
 */
class Sculptor {
protected:
    /**
   * @brief v is a 3 Dimensional pointer of the workspace
   */
  Voxel ***v;
  //! nx is the size X of our box-shaped workspace
  int nx;
  //! nx is the size Y of our box-shaped workspace
  int ny;
  //! nx is the size Z of our box-shaped workspace
  int nz;
  //!Stores Red Component of color
  float r;
  //!Stores Green Component of color
  float g;
  //!Stores Blue Component of color
  float b;
  //!Stores Transparency component
  float a;
public:
  /**
   * @brief Constructor of Sculptor, will set the X,Y and Z sizes and dynamically create the 3D matrix V
   * @param tx set size nx
   * @param ty set size ny
   * @param tz set size nz
   */
  Sculptor(int tx,int ty,int tz);
  /**
   * @brief setColor changes the current color and trasparency stored in Sculptor
   * @param _r set Red Component
   * @param _g set Green Component
   * @param _b set Blue Component
   * @param alpha set transparency component
   */
  void setColor(float _r, float _g, float _b, float alpha);

  /**
   * @brief putVoxel changes the voxel status in position (x,y,z) to an "On" state, storing the values of color and transparency with it.
   * @param x is the x position of putted Voxel
   * @param y is the y position of putted Voxel
   * @param z is the z position of putted Voxel
   */
  void putVoxel(int x, int y, int z);

  /**
   * @brief cutVoxel changes the voxel status in position (x,y,z) , to an "Off" state.  Any stored color and transparency will not be drawn
   * @param x is the x position of cutted voxel
   * @param y is the y position of cutted voxel
   * @param z is the z position of cutted voxel
   */
  void cutVoxel(int x, int y, int z);

  /**
   * @brief writeOFF will create an archive of format .off that will draw the current status of all workspace. When read by programs like Geomview, will execute the drawn figure in box-shaped voxels
   * @param filename is the path to given archive
   */
  void writeOFF(const std::string filename);

  /**
   * @brief writeOFF will create an archive of format .vect that will draw the current status of all workspace. When read by programs like Geomview, will execute the drawn figure in collored points, referencing the center of each voxel
   * @param filename is the path to given archive
   */
  void writeVECT(const std::string filename);
  //! Destructor of Sculptor, delete the dynamically constructed Sculptor
  ~Sculptor();
};




#endif // ESCULTOR_H
