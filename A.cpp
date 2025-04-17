#include <iostream>
using namespace std;

class A {
private:
    int A1;
    float A2;

public:
    int getA1() const { return A1; }
    float getA2() const { return A2; }

    void setA1(int a1) { A1 = a1; }
    void setA2(float a2) { A2 = a2; }

    void MA1() { cout << "Método MA1 chamado" << endl; }
    void MA2() { cout << "Método MA2 chamado" << endl; }
    void MA3() { cout << "Alteração na classe A a partir do clone" << endl; }
};

// Exportando a classe para uso externo
A global_A;
