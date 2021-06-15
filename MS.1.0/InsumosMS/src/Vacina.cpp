#include "Vacina.h"

Vacina::Vacina()
{
    //ctor
}

Vacina::Vacina(int tipoInsumo, std::string nome, int quantidade, float valorUnitario, std::string dtVencimento, std::string nomeFabricante)
    : Insumo(tipoInsumo, nome, quantidade, valorUnitario, dtVencimento, nomeFabricante)
{
    //ctor
}

Vacina::Vacina(int tipoInsumo, std::string nome, int quantidade, float valorUnitario, std::string dtVencimento, std::string nomeFabricante, std::string tipo, int quantDoses, int intervalo)
    : Insumo(tipoInsumo, nome, quantidade, valorUnitario, dtVencimento, nomeFabricante)
{
    this->tipo = tipo;
    this->quantDoses = quantDoses;
    this->intervalo = intervalo;
}

void Vacina::exibeDescricao(){
    std::cout<<nome<<" do "<<"Tipo "<<tipo<<" do Fabricante "<<nomeFabricante<<" /"<<"valor: R$"<<valorUnitario<<"/"<<"vence: "<<dtVencimento<<" /"<<quantDoses<<" doses em um intervalo de "<<intervalo<<" dias"<<std::endl;
}

std::string Vacina::getTipo(){
    return tipo;
}

int Vacina::getQuantDoses(){
    return quantDoses;
}

int Vacina::getIntervalo(){
    return intervalo;
}

void Vacina::salves(std::ofstream &fp){
    fp << tipo << std::endl;
    fp << quantDoses << std::endl;
    fp << intervalo << std::endl;
}

void Vacina::lerAtributos(std::ifstream &fp){
    fp >> tipo;
    fp >> quantDoses;
    fp >> intervalo;
}

Vacina::~Vacina()
{
    //dtor
}
