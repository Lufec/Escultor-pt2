#ifndef SCULPTOR_H
#define SCULPTOR_H

#include <string>

struct Voxel {
  float r,g,b; // Colors
  float a;
// Transparency
  bool isOn; // Included or not
};

class Sculptor {
protected:
  Voxel ***v;
  // 3D matrix
  int nx,ny,nz; // Dimensions
  float r,g,b,a; // Current drawing color
public:
  Sculptor(int tx,int ty,int tz);
  void setColor(float _r, float _g, float _b, float alpha);
  void putVoxel(int x, int y, int z);
  void cutVoxel(int x, int y, int z);
  void writeOFF(const std::string filename);
  void writeVECT(const std::string filename);
  ~Sculptor();
};




#endif // ESCULTOR_H
