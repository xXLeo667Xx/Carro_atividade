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
    //contrutor ja definito para não precisar ficar instanciando no programa principal
    carro(){
    VelMax = 220.f;
    modelo = "Camaro";
    cor = "Amarelo";
   }
};

int main(){
    
    //criando as novas variaveis do carro
    carro MeuCarro;
    carro carro2;
     MeuCarro.cor="Branco";
     MeuCarro.modelo="Fusca";
     MeuCarro.VelMax=150.0f;
     //interface de usuario sobre o carro
     MeuCarro.Buzinar();
     cout<<MeuCarro.cor<<endl;
     cout<<MeuCarro.modelo<<endl;
     cout<<MeuCarro.VelMax<<endl;
     //interface que mostrara o resultado do nosso constrtutor camaro ja colocado na classe para n precisar ficar instanciando
     carro2.Buzinar();
     cout << carro2.cor << endl;
     cout << carro2.VelMax << endl;
     cout << carro2.modelo << endl;
}
//interface de usuario do modulo 
void carro::Buzinar(){
    cout<<"Bi, Bi!!!"<<endl;
}
