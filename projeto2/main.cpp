#include <vector>
#include <fstream>
#include <sstream>

#include "putvoxel.h"
#include "cutvoxel.h"
#include "putbox.h"
#include "cutbox.h"
#include "putsphere.h"
#include "cutsphere.h"
#include "putellipsoid.h"
#include "cutellipsoid.h"


using namespace std;

/**
 * @brief main constitutes of 7 parts:
 * 1) open a file with given instructions to draw the figure
 * 2) Separate each line in a vector of strings
 * 3) Read the first line to construct the Sculptor and construct it
 * 4) Read each line after that to creat the vector of FiguraGeometrica*. Depending on what is written, a diferent class is called and created
 * 5) After storing everything in FiguraGeometrica*, a function draw is called to all elements and is executed according to each definition.
 * 6) Everything in FiguraGeometrica is deleted, don't need to use it again
 * 7) Functions to write the OFF and VECT archives is called
 */
int main()
{
    //1
    ifstream inputFile;
    inputFile.open("/home/lufec/Escultor2/teste.txt");

    if(!inputFile)
    {
        cout<<"Não abriu"<<endl;
        exit(1);
    }

    //2
    vector<string> linhas;
    string linha;

    while(getline(inputFile,linha))
    {
        linhas.push_back(linha);
    }

    //3
    int nx=0,ny=0,nz=0;
    stringstream header(linhas[0]);
    string nome;
    header >> nome;
    header >> nx >> ny >> nz;

    Sculptor t(nx,ny,nz); //nx,ny,nz

    //4
    vector<FiguraGeometrica*> figs;

    for(int i=1; i<static_cast<int>(linhas.size());i++){
        stringstream tipo(linhas[i]);
        tipo >> nome;

        if( nome == "putVoxel"){
            int x,y,z;
            float r,g,b,a;
            tipo >> x >> y >> z >> r>> g >> b >> a;
            figs.push_back(new PutVoxel(x,y,z,r,g,b,a));
        }

        else if (nome == "cutVoxel"){
            int x,y,z;
            tipo >>x >> y >> z;
            figs.push_back(new CutVoxel(x,y,z));
        }
        else if( nome == "putBox"){
            int x0,x1,y0,y1,z0,z1;
            float r,g,b,a;
            tipo >> x0 >> x1 >> y0 >> y1 >> z0 >> z1 >> r >> g >> b >> a;
            figs.push_back(new PutBox(x0,x1,y0,y1,z0,z1,r,g,b,a));
        }
        else if( nome == "cutBox"){
            int x0,x1,y0,y1,z0,z1;
            tipo >> x0 >> x1 >> y0 >> y1 >> z0 >> z1;
            figs.push_back(new CutBox(x0,x1,y0,y1,z0,z1));
        }
        else if(nome == "putSphere"){
            int x,y,z,rd;
            float r,g,b,a;
            tipo >> x >> y >> z >> rd >> r >> g >>b >>a;
            figs.push_back(new PutSphere(x,y,z,rd,r,g,b,a));

        }

        else if(nome == "cutSphere"){
            int x,y,z,rd;
            tipo >> x >> y >> z >> rd;
            figs.push_back(new CutSphere(x,y,z,rd));
        }

        else if (nome == "putEllipsoid") {
            int x,y,z,rx,ry,rz;
            float r,g,b,a;
            tipo >> x >> y >> z >> rx >> ry >> rz >> r >> g >> b >> a;
            figs.push_back(new PutEllipsoid(x,y,z,rx,ry,rz,r,g,b,a));
        }
        else if (nome == "cutEllipsoid") {
            int x,y,z,rx,ry,rz;
            tipo >> x >> y >> z >> rx >> ry >> rz;
            figs.push_back(new CutEllipsoid(x,y,z,rx,ry,rz));
        }
    }

    //5

    for (int i =0; i<static_cast<int>(figs.size()); i++){
        figs[i]->draw(t);
    }

    //6
    for (int i =0; i<static_cast<int>(figs.size()); i++){
        delete figs[i];
    }

    //7
    t.writeOFF("/home/lufec/Escultor2/off.off");
    t.writeVECT("/home/lufec/Escultor2/vect.vect");
    inputFile.close();
    return 0;
}
