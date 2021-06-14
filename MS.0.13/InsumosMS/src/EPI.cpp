#include "EPI.h"

EPI::EPI()
{
    //ctor
}

EPI::EPI(int tipoInsumo, std::string nome, int quantidade, float valorUnitario, std::string dtVencimento, std::string nomeFabricante)
    : Insumo(tipoInsumo, nome, quantidade, valorUnitario, dtVencimento, nomeFabricante)
{
    //ctor
}

EPI::EPI(int tipoInsumo, std::string nome, int quantidade, float valorUnitario, std::string dtVencimento, std::string nomeFabricante, std::string tipo, std::string descricao)
    : Insumo(tipoInsumo, nome, quantidade, valorUnitario, dtVencimento, nomeFabricante)
{
    this->tipo = tipo;
    this->descricao = descricao;
}

void EPI::exibeDescricao(){
    std::cout<<nome<<" do "<<"Tipo "<<tipo<<" do Fabricante "<<nomeFabricante<<" /"<<"valor: R$"<<valorUnitario<<" /"<<"vence: "<<dtVencimento<<" / Descricao:"<<descricao<<std::endl;
}

std::string EPI::getTipo(){
    return tipo;
}

std::string EPI::getDescricao(){
    return descricao;
}

void EPI::salves(std::ofstream &fp){
    fp << tipo << std::endl;
    fp << descricao << std::endl;
}

void EPI::lerAtributos(std::ifstream &fp){
    fp >> tipo;
    fp >> descricao;
}

EPI::~EPI()
{
    //dtor
}
