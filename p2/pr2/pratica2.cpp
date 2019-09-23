#include "veiculo.h"

int main(){
    Veiculo * terr, * aqua, * aereo, *anfi;
    
    terr = new Terrestre("VT1");
    dynamic_cast<Terrestre*>(terr)->mover();
    dynamic_cast<Terrestre*>(terr)->setCapacidadeMax(45);

    aqua = new Aquatico("VQ1");
    dynamic_cast<Aquatico*>(aqua)->mover();
    dynamic_cast<Aquatico*>(aqua)->setCargaMax(12.5);

    aereo = new Aereo("VA1");
    ((Aereo *)aereo)->setVelocidadeMax(1040.5);
    aereo->mover();

    anfi = new Anfibio("VAnf");
    anfi->mover();
    
    delete anfi;
    
    delete terr;
    delete aqua;
    delete aereo;
    
    return 0;

}
