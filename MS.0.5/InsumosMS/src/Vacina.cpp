#include "Vacina.h"

Vacina::Vacina()
{
    //ctor
}

Vacina::Vacina(int tipoInsumo, std::string nome, int quantidade, int valorUnitario, std::string dtVencimento, std::string nomeFabricante, int tipo, int quantDoses, int intervalo)
    : Insumo(tipoInsumo, nome, quantidade, valorUnitario, dtVencimento, nomeFabricante)
{
    this->tipoInsumo = tipoInsumo;
    this->nome = nome;
    this->quantidade = quantidade;
    this->valorUnitario = valorUnitario;
    this->dtVencimento = dtVencimento;
    this->nomeFabricante = nomeFabricante;
    this->tipo = tipo;
    this->quantDoses = quantDoses;
    this->intervalo = intervalo;
}

void Vacina::exibeDescricao(){
    std::cout<<nome<<" do "<<"Tipo "<<tipo<<" do Fabricante "<<nomeFabricante<<" /"<<"valor: R$"<<valorUnitario<<"/"<<"vence: "<<dtVencimento<<" /"<<quantDoses<<" doses em um intervalo de "<<intervalo<<" dias"<<std::endl;
}

Vacina::~Vacina()
{
    //dtor
}
