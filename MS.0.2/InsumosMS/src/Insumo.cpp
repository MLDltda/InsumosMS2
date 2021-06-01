#include "Insumo.h"

Insumo::Insumo()
{
    tipoInsumo = 0;
}

Insumo::Insumo(int tipoInsumo, std::string nome, int quantidade, int valorUnitario, std::string dtVencimento, std::string nomeFabricante)
{
    this->tipoInsumo = tipoInsumo;
    this->nome = nome;
    this->quantidade = quantidade;
    this->valorUnitario = valorUnitario;
    this->dtVencimento = dtVencimento;
    this->nomeFabricante = nomeFabricante;
}

void Insumo::setTipoInsumo(){

}

int Insumo::getTipoInsumo(){
    return tipoInsumo;
}

Insumo::~Insumo()
{
    //dtor
}
