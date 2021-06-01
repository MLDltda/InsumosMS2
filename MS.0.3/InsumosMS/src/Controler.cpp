#include <iostream>
#include <string>

#include "Controler.h"
#include "Vacina.h"
#include "Medicamento.h"
#include "EPI.h"

Controler::Controler()
{
    //ctor
}

void Controler::cadastraInsumosMS(){
    int tipo;
    std::cout<<"Cadastro de Insumos:"<<std::endl;
    while(1){
    std::cout<<"Escolha o Tipo de Insumo a ser cadastrado:\n1.Vacina.\n2.Medicamento.\n3.EPI.\n4.voltar."<<std::endl;
    std::cin>>tipo;

    switch(tipo){
case 1:
    setDadosVacina();
    break;
case 2:
    setDadosMedicamento();
    break;
case 3:
    setDadosEPI();
    break;
case 4:
    return;
    break;
default:
    std::cout<<"Tipo de Insumo invalido, digite novamente:"<<std::endl;
    break;
    }
    }
}

void Controler::setDadosVacina(){
    //variaveis temporarias de cadastro
    std::string name;
    int quant, value;
    std::string date, Fabricant;
    int type, doses, inter;
    //ate aqui

    std::string place;

    place = "Ministerio da Saude";

    std::cout<<"Digite os Dados da vacina:"<<std::endl;
    std::cout<<"Nome da vacina:"<<std::endl;
    getchar();
    std::getline(std::cin,name);
    std::cout<<"Quantidade da vacina:"<<std::endl;
    std::cin>>quant;
    std::cout<<"Valor Unitario da vacina:"<<std::endl;
    std::cin>>value;
    getchar();
    std::cout<<"Data de vencimento da vacina:"<<std::endl;
    std::getline(std::cin,date);
    std::cout<<"Nome do Fabricante da vacina:"<<std::endl;
    std::getline(std::cin,Fabricant);
    std::cout<<"Tipo da vacina:"<<std::endl;
    std::cin>>type;
    std::cout<<"Quantidade de doses da vacina:"<<std::endl;
    std::cin>>doses;
    std::cout<<"Intervalo de dias entre as doses da vacina:"<<std::endl;
    std::cin>>inter;

    auto vet = new Vacina(1, name, quant, value, date, Fabricant, type, doses, inter);

    std::cout<<"esse e o nome da vacina cadastrada:"<<vet->getNome()<<std::endl;

    locais[0].setInsumo(vet);

    return;
}

void Controler::setDadosMedicamento(){
    //variaveis temporarias de cadastro
    std::string name;
    int quant, value;
    std::string date, Fabricant;
    std::string dose, admin, dispo;
    //ate aqui

    std::string place;

    place = "Ministerio da Saude";

    std::cout<<"Digite os Dados do medicamento:"<<std::endl;
    std::cout<<"Nome do medicamento:"<<std::endl;
    getchar();
    std::getline(std::cin,name);
    std::cout<<"Quantidade do medicamento:"<<std::endl;
    std::cin>>quant;
    std::cout<<"Valor Unitario do medicamento:"<<std::endl;
    std::cin>>value;
    getchar();
    std::cout<<"Data de vencimento do medicamento:"<<std::endl;
    std::getline(std::cin,date);
    std::cout<<"Nome do Fabricante do medicamento:"<<std::endl;
    std::getline(std::cin,Fabricant);
    std::cout<<"Dosagem do medicamento:"<<std::endl;
    std::getline(std::cin,dose);
    std::cout<<"Administracao do medicamento:"<<std::endl;
    std::getline(std::cin,admin);
    std::cout<<"Disponibilizacao do medicamento:"<<std::endl;
    std::getline(std::cin,dispo);

    auto vet = new Medicamento(2, name, quant, value, date, Fabricant, dose, admin, dispo);

    locais[0].setInsumo(vet);

    return;
}


void Controler::setDadosEPI(){
    //variaveis temporarias de cadastro
    std::string name;
    int quant, value;
    std::string date, Fabricant;
    int type;
    std::string desc;
    //ate aqui

    std::string place;

    place = "Ministerio da Saude";

    std::cout<<"Digite os Dados do EPI:"<<std::endl;
    std::cout<<"Nome do EPI:"<<std::endl;
    getchar();
    std::getline(std::cin,name);
    std::cout<<"Quantidade do EPI:"<<std::endl;
    std::cin>>quant;
    std::cout<<"Valor Unitario do EPI:"<<std::endl;
    std::cin>>value;
    getchar();
    std::cout<<"Data de vencimento do EPI:"<<std::endl;
    std::getline(std::cin,date);
    std::cout<<"Nome do Fabricante do EPI:"<<std::endl;
    std::getline(std::cin,Fabricant);
    std::cout<<"Tipo do EPI:"<<std::endl;
    std::cin>>type;
    getchar();
    std::cout<<"Descricao do EPI:"<<std::endl;
    std::getline(std::cin,desc);

    auto vet = new EPI(3, name, quant, value, date, Fabricant, type, desc);

    locais[0].setInsumo(vet);

    return;
}

void Controler::consultaInsumos(Local* loc){
    //std::cout<<" ----------------------------------------- "<<loc->nomeLocal<<" ----------------------------------------- "<<std::endl;
    //loc->getInsumo();
    return;
}

void Controler::consultaInsumosDescricao(Local* loc){

}

Insumo Controler::consultaInsumos(Local* loc, int tipoInsumo){

}

void Controler::distribuiInsumo(Local* dest, Insumo insumo){

}

Controler::~Controler()
{
    //dtor
}