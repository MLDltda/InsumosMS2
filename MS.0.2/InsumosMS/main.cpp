#include <iostream>

#include "Controler.h"

using namespace std;

int main()
{
    Controler control;
    int escolha;
    cout<<"BEM VINDO AO SISTEMA DO MINISTERIO DA SAUDE"<<endl<<endl<<endl;
    while(1){
    cout<<"MENU:"<<endl;
    cout<<"1.Cadastro de Insumos."<<endl;
    cin>>escolha;
    switch(escolha){
case 1:
    control.cadastraInsumosMS();
    break;
default:
    cout<<"vai cagar"<<endl;
    break;
    }
    }
    return 0;
}
