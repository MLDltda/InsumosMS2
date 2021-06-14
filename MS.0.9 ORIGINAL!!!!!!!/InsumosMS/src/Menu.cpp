#include "Menu.h"
#include "control.h"
#include "Persistencia.h"

using namespace std;

Menu::Menu()
{
    //ctor
}

void Menu::exibeMenu1(){
    int escolha;
    Controler control;
    /*cout<<"Carregando dados salvos..."<<endl;
    control.carregarDados();
    system("CLS");*/
    while(1){
    cout<<"MENU:"<<endl;
    cout<<"1.Cadastro de Insumos."<<endl;
    cout<<"2.Consulta de Insumos."<<endl;
    cout<<"3.Consulta descritiva dos Insumos."<<endl;
    cout<<"4.Consulta de Insumos por tipo."<<endl;
    cout<<"5.Distribuicao dos Insumos."<<endl;
    cout<<"6.Salvar Dados."<<endl;
    cout<<"7.Sair do Programa."<<endl;
    cin>>escolha;
    switch(escolha){
case 1:
    control.cadastraInsumosMS();
    system("CLS");
    break;
case 2:
    cout<<"Digite os Dados do Local de onde serao consultados os Insumos:\n"
    <<"0.Ministerio da Saude\n"
    <<"1.Distrito Federal\n"
    <<"2.Acre\n"
    <<"3.Alagoas\n"
    <<"4.Amapa\n"
    <<"5.Amazaonas\n"
    <<"6.Bahia\n"
    <<"7.Ceara\n"
    <<"8.Espirito Santo\n"
    <<"9.Goias\n"
    <<"10.Maranhao\n"
    <<"11.Mato Grosso\n"
    <<"12.Mato Grosso do Sul\n"
    <<"13.Minas Gerais\n"
    <<"14.Para\n"
    <<"15.Paraiba\n"
    <<"16.Parana\n"
    <<"17.Pernambuco\n"
    <<"18.Piaui\n"
    <<"19.Rio de janeiro\n"
    <<"20.Rio Grande do Norte\n"
    <<"21.Rio Grande do Sul\n"
    <<"22.Rondonia\n"
    <<"23.Roraima\n"
    <<"24.Santa Catarina\n"
    <<"25.Sao Paulo\n"
    <<"26.Sergipe\n"
    <<"27.Tocantins\n";

    cin>>escolha;
    if(escolha < 0 || escolha >27){
        cout<<"Numero invalido, digite novamente."<<endl;
    }else{
    control.consultaInsumos(escolha);
    }
    system("CLS");
    break;
case 3:
    cout<<"Digite os Dados do Local de onde serao consultados a Descricao dos Insumos:\n"
    <<"0.Ministerio da Saude\n"
    <<"1.Distrito Federal\n"
    <<"2.Acre\n"
    <<"3.Alagoas\n"
    <<"4.Amapa\n"
    <<"5.Amazaonas\n"
    <<"6.Bahia\n"
    <<"7.Ceara\n"
    <<"8.Espirito Santo\n"
    <<"9.Goias\n"
    <<"10.Maranhao\n"
    <<"11.Mato Grosso\n"
    <<"12.Mato Grosso do Sul\n"
    <<"13.Minas Gerais\n"
    <<"14.Para\n"
    <<"15.Paraiba\n"
    <<"16.Parana\n"
    <<"17.Pernambuco\n"
    <<"18.Piaui\n"
    <<"19.Rio de janeiro\n"
    <<"20.Rio Grande do Norte\n"
    <<"21.Rio Grande do Sul\n"
    <<"22.Rondonia\n"
    <<"23.Roraima\n"
    <<"24.Santa Catarina\n"
    <<"25.Sao Paulo\n"
    <<"26.Sergipe\n"
    <<"27.Tocantins\n";

    cin>>escolha;
    if(escolha < 0 || escolha >27){
        cout<<"Numero invalido, digite novamente."<<endl;
    }else{
    control.consultaInsumosDescricao(escolha);
    }
    system("CLS");
    break;
case 4:
    cout<<"Digite os Dados do Local de onde serao consultados os Insumos por tipo:\n"
    <<"0.Ministerio da Saude\n"
    <<"1.Distrito Federal\n"
    <<"2.Acre\n"
    <<"3.Alagoas\n"
    <<"4.Amapa\n"
    <<"5.Amazaonas\n"
    <<"6.Bahia\n"
    <<"7.Ceara\n"
    <<"8.Espirito Santo\n"
    <<"9.Goias\n"
    <<"10.Maranhao\n"
    <<"11.Mato Grosso\n"
    <<"12.Mato Grosso do Sul\n"
    <<"13.Minas Gerais\n"
    <<"14.Para\n"
    <<"15.Paraiba\n"
    <<"16.Parana\n"
    <<"17.Pernambuco\n"
    <<"18.Piaui\n"
    <<"19.Rio de janeiro\n"
    <<"20.Rio Grande do Norte\n"
    <<"21.Rio Grande do Sul\n"
    <<"22.Rondonia\n"
    <<"23.Roraima\n"
    <<"24.Santa Catarina\n"
    <<"25.Sao Paulo\n"
    <<"26.Sergipe\n"
    <<"27.Tocantins\n";

    cin>>escolha;
    if(escolha < 0 || escolha >27){
        cout<<"Numero invalido, digite novamente."<<endl;
    }else{
    control.consultaInsumosTipo(escolha);
    }
    system("CLS");
    break;
case 5:
    cout<<"Digite os Dados do Local para onde serao distribuidos os Insumos:\n"
    <<"1.Distrito Federal\n"
    <<"2.Acre\n"
    <<"3.Alagoas\n"
    <<"4.Amapa\n"
    <<"5.Amazaonas\n"
    <<"6.Bahia\n"
    <<"7.Ceara\n"
    <<"8.Espirito Santo\n"
    <<"9.Goias\n"
    <<"10.Maranhao\n"
    <<"11.Mato Grosso\n"
    <<"12.Mato Grosso do Sul\n"
    <<"13.Minas Gerais\n"
    <<"14.Para\n"
    <<"15.Paraiba\n"
    <<"16.Parana\n"
    <<"17.Pernambuco\n"
    <<"18.Piaui\n"
    <<"19.Rio de janeiro\n"
    <<"20.Rio Grande do Norte\n"
    <<"21.Rio Grande do Sul\n"
    <<"22.Rondonia\n"
    <<"23.Roraima\n"
    <<"24.Santa Catarina\n"
    <<"25.Sao Paulo\n"
    <<"26.Sergipe\n"
    <<"27.Tocantins\n";

    cin>>escolha;
    if(escolha < 1 || escolha >27){
        cout<<"Numero invalido, digite novamente."<<endl;
    }else{
    control.distribuiInsumo(escolha);
    }
    system("CLS");
    break;
case 6:
    cout<<"Salvando Dados......"<<endl;
    control.insumoDados();
    system("CLS");
    break;
case 7:
    return;
    break;
default:
    cout<<"Numero invalido, digite novamente."<<endl;
    break;
    }
    }
}

Menu::~Menu()
{
    //dtor
}
