#include <iostream>

#include "Controler.h"
#include "Menu.h"

using namespace std;

int main()
{
    Menu control;
    cout<<"Carregando dados salvos..."<<endl;
    control.carregarDados();
    system("CLS");

    cout<<"BEM VINDO AO SISTEMA DO MINISTERIO DA SAUDE"<<endl<<endl<<endl;

    control.exibeMenu1();
    return 0;
}
