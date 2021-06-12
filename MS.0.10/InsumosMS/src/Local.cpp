#include "Local.h"
#include "Vacina.h"
#include "Medicamento.h"
#include "EPI.h"
#include "Controler.h"
#include "Persistencia.h"

using namespace std;

Local::Local()
{

}

void Local::setInsumo(Insumo* ins){
    insumo.push_back(ins);
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
        for(unsigned int i = 0; i < insumo.size(); i++){
        insumo[i]->exibeDados();
    }
    }
}

void Local::getInsumo2(){
        for(unsigned int i = 0; i < insumo.size(); i++){
        std::cout<<i+1<<". ";
        insumo[i]->exibeDados();
}
}

void Local::getInsumoDescricao(){
    if(insumo.size() == 0){
        std::cout<<"Nao existem dados salvos"<<std::endl;
    }else{
        for(unsigned int i = 0; i < insumo.size(); i++){
        insumo[i]->exibeDescricao();
    }
    }
}

void Local::getInsumoTipo(int tipo){
    bool confirm;
    confirm  = false;
    for(unsigned int i = 0; i < insumo.size(); i++){
        if(insumo[i]->getTipoInsumo() == tipo){
            insumo[i]->exibeDados();
            confirm = true;
        }

    }
    if(!confirm){
        std::cout<<"Insumo desse tipo nao cadastrado."<<std::endl;
    }
    return;
}

int Local::checkInsumo(std::string name){
        for(unsigned int i = 0; i < insumo.size(); i++){
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

int Local::subtraiQuant(int num, int quant){
    int total;
    total = insumo[num]->getQuant();
    if(total < quant){
        std::cout<<"Quantidade Insuficiente para o envio."<<std::endl;
        return 0;
    }else{
        total -= quant;
        return total;
    }
}

Insumo* Local::getVect(int num){
    return insumo[num];
}

void Local::copVect(Insumo *ins, int num){
    int caso;
    caso = ins->getTipoInsumo();
    switch(caso){
case 1:
    disVacina(ins);
    break;
case 2:
    disMedicamento(ins);
    break;
case 3:
    disEPI(ins);
    break;
default:
    break;
    }
    int i;
    i = insumo.size();
    i--;
    insumo[i]->setQuant(num);
}

void Local::disVacina(Insumo *ins){
    Persistencia pers;
    auto *vet = new Vacina(1, ins->getNome(), ins->getQuant(), ins->getValorUnitario(), ins->getDtVencimento(), ins->getNomeFabricante(), ins->getTipo(), ins->getQuantDoses(), ins->getIntervalo());
    pers.salvarInsumosVacina(1, ins->getNome(), ins->getQuant(), ins->getValorUnitario(), ins->getDtVencimento(), ins->getNomeFabricante(), ins->getTipo(), ins->getQuantDoses(), ins->getIntervalo(), nomeLocal);
    insumo.push_back(vet);
}

void Local::disMedicamento(Insumo *ins){
    Persistencia pers;
    auto *vet = new Medicamento(2, ins->getNome(), ins->getQuant(), ins->getValorUnitario(), ins->getDtVencimento(), ins->getNomeFabricante(), ins->getDosagem(), ins->getAdministracao(), ins->getDisponibilizacao());
    pers.salvarInsumosMedicamento(2, ins->getNome(), ins->getQuant(), ins->getValorUnitario(), ins->getDtVencimento(), ins->getNomeFabricante(), ins->getDosagem(), ins->getAdministracao(), ins->getDisponibilizacao(), nomeLocal);
    insumo.push_back(vet);
}

void Local::disEPI(Insumo *ins){
    Persistencia pers;
    auto *vet = new EPI(3, ins->getNome(), ins->getQuant(), ins->getValorUnitario(), ins->getDtVencimento(), ins->getNomeFabricante(), ins->getTipo(), ins->getDescricao());
    pers.salvarInsumosEPI(3, ins->getNome(), ins->getQuant(), ins->getValorUnitario(), ins->getDtVencimento(), ins->getNomeFabricante(), ins->getTipo(), ins->getDescricao(), nomeLocal);
    insumo.push_back(vet);
}

void Local::novaQuant(int num, int quant){
    insumo[num]->setQuant(quant);
}

bool Local::checkExistencia(unsigned int num){
    if(num >= insumo.size()){
        std::cout<<"Escolha Invalida"<<std::endl;
        return true;
    }else
    return false;
}

/*void Local::salvarInsumos(){
    Persistencia pers;
    string name;
    int quant, tipoIns;
    float value;
    string date, Fabricant, type;
    int doses, inter;
    std::string dose, admin, dispo;
    string desc;
    for(unsigned int i = 0; insumo.size(); i++){
        nome = insumo[i]->getNome();
        quant = insumo[i]->getQuant();
        value = insumo[i]->getValorUnitario();
        date = insumo[i]->getDtVencimento();
        Fabricant = insumo[i]->getNomeFabricante();
        tipoIns = insumo[i]->getTipoInsumo();
        switch(tipoIns){
    case 1:
        type = insumo[i]->getTipo();
        doses = insumo[i]->getQuantDoses();
        inter = insumo[i]->getIntervalo();
        pers.salvarInsumosVacina(1, name, quant, value, date, Fabricant, type, doses, inter, nomeLocal);
        break;
    case 2:
        dose = insumo[i]->getDosagem();
        admin = insumo[i]->getAdministracao();
        dispo = insumo[i]->getDisponibilizacao();
        pers.salvarInsumosMedicamento(2, name, quant, value, date, Fabricant, dose, admin, dispo, nomeLocal);
        break;
    case 3:
        type = insumo[i]->getTipo();
        desc = insumo[i]->getDescricao();
        pers.salvarInsumosEPI(3, name, quant, value, date, Fabricant, type, desc, nomeLocal);
        break;
    default:
        break;
        }
        return;
    }
}*/

Local::~Local()
{
    //dtor
}
