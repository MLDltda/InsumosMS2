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

std::string Insumo::getNome(){
    return nome;
}

void Insumo::exibeDados(){
    std::cout<<nome<<": "<<quantidade<<" unidades"<<std::endl;
}

void Insumo::exibeDescricao(){

}

Insumo::~Insumo()
{
    //dtor
}
