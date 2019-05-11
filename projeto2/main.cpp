#include <iostream>
#include <vector>

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
    Sculptor t(20,20,20);
    vector<FiguraGeometrica*> figs;
    figs.push_back(new PutBox(10,14,10,14,10,14,1,1,0,1));

    figs[0]->draw(t);

    delete figs[0];

    t.writeOFF("/home/lufec/Desktop/Prog Avanc/Parte2/projeto2/off.off");

    return 0;
}
