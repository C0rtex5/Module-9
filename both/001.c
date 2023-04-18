#include <iostream>
#include <string>

using namespace std;

class CDF{
    public:
       unsigned int idade;
       string nome;
};

int main () {
    CDF Gabriel;
    CDF Vanessa;

    Gabriel.idade = 25
    Gabriel.nome = "Gabriel Froes";

    Vanessa.idade = 52;
    Vanessa.nome = "Vanessa Weber"

    cout << Gabriel.nome " tem " << Gabriel.idade << " anos" <<endl;
    cout << Vanessa.nome " tem " << Vanessa.idade << " anos" <<endl;
    return 0 ;
}