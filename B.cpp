#include <iostream>
using namespace std;

class B {
private:
    int B1;
    float B2;

public:
    int getB1() const { return B1; }
    float getB2() const { return B2; }

    void setB1(int b1) { B1 = b1; }
    void setB2(float b2) { B2 = b2; }

    void MB1() { cout << "Método MB1 chamado" << endl; }
    void MB2() { cout << "Método MB2 chamado" << endl; }
    void MB3() { cout << "Método MB3 chamado" << endl; }
};

// Exportando a classe para uso externo
B global_B;
