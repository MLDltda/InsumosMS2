#include "Menu.h"
#include "control.h"

using namespace std;

Menu::Menu()
{
    //ctor
}

void Menu::exibeMenu1(){
    int escolha;
    Controler control;
    while(1){
    cout<<"MENU:"<<endl;
    cout<<"1.Cadastro de Insumos."<<endl;
    cout<<"2.Consulta de Insumos."<<endl;
    cout<<"3.Consulta descritiva dos Insumos."<<endl;
    cout<<"4.Consulta de Insumos por tipo."<<endl;
    cout<<"5.Distribucao dos Insumos."<<endl;
    cin>>escolha;
    switch(escolha){
case 1:
    control.cadastraInsumosMS();
    break;
case 2:

    break;
case 3:

    break;
case 4:

    break;
case 5:

    break;
default:
    cout<<"vai cagar"<<endl;
    break;
    }
    }
}

void Menu::exibeMenu2(){

}

Menu::~Menu()
{
    //dtor
}
