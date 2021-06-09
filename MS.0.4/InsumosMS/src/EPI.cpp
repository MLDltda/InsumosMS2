#include "EPI.h"

EPI::EPI()
{
    //ctor
}

EPI::EPI(int tipoInsumo, std::string nome, int quantidade, int valorUnitario, std::string dtVencimento, std::string nomeFabricante, int tipo, std::string descricao)
    : Insumo(tipoInsumo, nome, quantidade, valorUnitario, dtVencimento, nomeFabricante)
{
    this->tipoInsumo = tipoInsumo;
    this->nome = nome;
    this->quantidade = quantidade;
    this->valorUnitario = valorUnitario;
    this->dtVencimento = dtVencimento;
    this->nomeFabricante = nomeFabricante;
    this->tipo = tipo;
    this->descricao = descricao;
}

void EPI::exibeDescricao(){
    std::cout<<nome<<" do "<<"Tipo "<<tipo<<" do Fabricante "<<nomeFabricante<<" /"<<"valor: R$"<<valorUnitario<<" /"<<"vence: "<<dtVencimento<<" / Descricao:"<<descricao<<std::endl;
}

EPI::~EPI()
{
    //dtor
}