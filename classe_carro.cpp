#include <iostream>
using namespace std;
//crinado a classe carro
class carro{
    public:
    //criando as variaveis da classe
    string cor;
    string modelo;
    float VelMax;
    void Buzinar();
};

int main(){
    //criando as novas variaveis do carro
    carro MeuCarro;
     MeuCarro.cor="Branco";
     MeuCarro.modelo="Fusca";
     MeuCarro.VelMax=150.0f;
     //interface de usuario sobre o carro
     MeuCarro.Buzinar();
     cout<<MeuCarro.cor<<endl;
     cout<<MeuCarro.modelo<<endl;
     cout<<MeuCarro.VelMax<<endl;
}
//interface de usuario do modulo 
void carro::Buzinar(){
    cout<<"Bi, Bi!!!"<<endl;
}