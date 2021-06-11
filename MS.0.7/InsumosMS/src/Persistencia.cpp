#include "Persistencia.h"
#include "Local.h"

Persistencia::Persistencia()
{
    //ctor
}

void lerInsumos(){

}

void salvarInsumos(std::vector<Insumo*>insumos){
    std::ofstream fp;
    fp.open("Insumos.txt",std::fstream::out);

    if(fp.is_open()){
            for(int i = 0 ; i < insumos.size(); i++){
                fp << insumos[i]->getNome();
                fp << insumos[i]->getQuant();
                fp << insumos[i]->getValorUnitario();
                fp << insumos[i]->getDtVencimento();
                fp << insumos[i]->getNomeFabricante();
                fp << insumos[i]->getTipoInsumo();
                if(insumos[i]->getTipoInsumo() == 1){
                fp << insumos[i]->getTipo();
                fp << insumos[i]->getQuantDoses();
                fp << insumos[i]->getIntervalo();
                }
                if(insumos[i]->getTipoInsumo() == 2){
                fp << insumos[i]->getDosagem();
                fp << insumos[i]->getAdministracao();
                fp << insumos[i]->getDisponibilizacao();
                }
                if(insumos[i]->getTipoInsumo() == 3){
                fp << insumos[i]->getTipo();
                fp << insumos[i]->getDescricao();
                }
            }
            fp.close();
    }
    std::cout << "Dados salvos com sucesso!\n";
}

Persistencia::~Persistencia()
{
    //dtor
}
