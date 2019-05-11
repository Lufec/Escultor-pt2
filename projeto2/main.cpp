#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>

#include "sculptor.h"
#include "figurageometrica.h"
#include "putvoxel.h"
#include "cutvoxel.h"
#include "putbox.h"
#include "cutbox.h"
#include "putsphere.h"
#include "cutsphere.h"
#include "putellipsoid.h"
#include "cutellipsoid.h"


using namespace std;


int main()
{
    ifstream inputFile;
    inputFile.open("/home/lufec/Desktop/Prog Avanc/Parte2/projeto2/teste.txt");

    if(!inputFile)
    {
        cout<<"Não abriu"<<endl;
        exit(1);
    }

    vector<string> linhas;
    string linha;
    vector<int>::iterator it;

    while(getline(inputFile,linha))
    {
        linhas.push_back(linha);
    }

    int nx=0,ny=0,nz=0;
    stringstream header(linhas[0]);
    string nome;
    header >> nome;
    header >> nx >> ny >> nz;

    Sculptor t(nx,ny,nz); //nx,ny,nz
    vector<FiguraGeometrica*> figs;


    figs.push_back(new PutBox(10,14,10,14,10,14,1,1,0,1));

    figs[0]->draw(t);

    delete figs[0];


    t.writeOFF("/home/lufec/Desktop/Prog Avanc/Parte2/projeto2/off.off");
    t.writeVECT("/home/lufec/Desktop/Prog Avanc/Parte2/projeto2/vect.vect");
    inputFile.close();
    return 0;
}
