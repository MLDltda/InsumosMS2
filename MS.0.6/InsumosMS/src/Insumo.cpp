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

void Insumo::setQuant(int num){
    quantidade = num;
}

int Insumo::getTipoInsumo(){
    return tipoInsumo;
}

std::string Insumo::getNome(){
    return nome;
}

int Insumo::getQuant(){
    return quantidade;
}

int Insumo::getValorUnitario(){
    return valorUnitario;
}

std::string Insumo::getDtVencimento(){
    return dtVencimento;
}

std::string Insumo::getNomeFabricante(){
    return nomeFabricante;
}

int Insumo::getTipo(){


}
int Insumo::getQuantDoses(){

}

int Insumo::getIntervalo(){

}

std::string Insumo::getDosagem(){

}

std::string Insumo::getAdministracao(){

}

std::string Insumo::getDisponibilizacao(){

}

std::string Insumo::getDescricao(){

}

void Insumo::exibeDados(){
    std::cout<<nome<<": "<<quantidade<<" unidades"<<std::endl;
}

void Insumo::exibeDescricao(){

}

void Insumo::somaInsumo(int soma){
    quantidade += soma;
}

Insumo::~Insumo()
{
    //dtor
}
