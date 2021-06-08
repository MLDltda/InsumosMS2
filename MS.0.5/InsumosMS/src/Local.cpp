#include "Local.h"
#include "Vacina.h"
#include "Medicamento.h"
#include "EPI.h"
#include "Controler.h"

Local::Local()
{

}

void Local::setInsumo(Insumo* ins){
    insumo.push_back(ins);
    std::cout<<insumo.size()<<std::endl;
}

void Local::setNomeLocal(std::string Onome){
    nomeLocal = Onome;
}

std::string Local::getNomeLocal(){
    return nomeLocal;
}

void Local::getInsumo(){
    if(insumo.size() == 0){
        std::cout<<"Nao existem dados salvos"<<std::endl;
    }else{
        for(int i = 0; i < insumo.size(); i++){
        insumo[i]->exibeDados();
    }
    }
}

void Local::getInsumoDescricao(){
    for(int i = 0; i < insumo.size(); i++){
        insumo[i]->exibeDescricao();
    }
}

void Local::getInsumoTipo(int tipo){
    for(int i = 0; i < insumo.size(); i++){
        if(insumo[i]->getTipoInsumo() == tipo){
            insumo[i]->exibeDados();
        }
    }
}

int Local::checkInsumo(std::string name){
        for(int i = 0; i < insumo.size(); i++){
        if(insumo[i]->getNome() == name){
            return i;
        }
        }
    return -1;
}


void Local::somaQuant(int Place){
    int soma;
    int tipo;

    while(1){
    std::cout<<", deseja acrescentar a quantidade atual?\n1.acrescentar.\n2.voltar."<<std::endl;
    std::cin>>tipo;

    switch(tipo){
case 1:
    break;
case 2:
    return;
    break;
default:
    std::cout<<"Dado invalido, digite novamente:"<<std::endl;
    break;
    }
    std::cout<<"Quantos Insumos a mais serao somados?"<<std::endl;
    std::cin>>soma;
    insumo[Place]->somaInsumo(soma);

    return;
}
}

Local::~Local()
{
    //dtor
}
