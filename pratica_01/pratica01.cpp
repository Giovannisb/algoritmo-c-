#include "veiculo.cpp"
#include <iostream>

using namespace std;

int main(){
    Veiculo * obj1 = new Veiculo("v1");
    //Veiculo * obj2 = new Veiculo("v2");
    //Veiculo * obj3 = new Veiculo("v3");
    obj1->setNumRodas(4);
    obj1->setNumRodas(4);
    cout << " Com " << obj1->getNumRodas() << " rodas" << endl;
    delete obj1;
    //delete obj2;
    //delete obj3;
}