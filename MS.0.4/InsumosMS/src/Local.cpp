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

Local::~Local()
{
    //dtor
}
