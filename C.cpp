#include <iostream>
#include <string>
using namespace std;

class C {
private:
    string C1;
    int C2;

public:
    string getC1() const { return C1; }
    int getC2() const { return C2; }

    void setC1(string c1) { C1 = c1; }
    void setC2(int c2) { C2 = c2; }

    void MC1() { cout << "Método MC1 chamado" << endl; }
    void MC2() { cout << "Método MC2 chamado" << endl; }
};

// Exportando uma instância, se necessário
C global_C;
