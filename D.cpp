#include <iostream>
using namespace std;

class D {
private:
    int D1;
    string D2;

public:
    void setD1(int d1) { D1 = d1; }
    void setD2(string d2) { D2 = d2; }

    int getD1() const { return D1; }
    string getD2() const { return D2; }

    void MD1() {
        cout << "Método MD1 chamado" << endl;
    }

    void MD2() {
        cout << "Método MD2 chamado" << endl;
    }
    void MD3() { cout << "Método MD3 chamado" << endl; }
    
    void MD4() {
        cout << "Método MD4 chamado" << endl;
    }
};
