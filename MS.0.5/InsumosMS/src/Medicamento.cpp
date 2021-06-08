#include "Medicamento.h"

Medicamento::Medicamento()
{
    //ctor
}

Medicamento::Medicamento(int tipoInsumo, std::string nome, int quantidade, int valorUnitario, std::string dtVencimento, std::string nomeFabricante, std::string dosagem, std::string administracao, std::string disponibilizacao)
    : Insumo(tipoInsumo, nome, quantidade, valorUnitario, dtVencimento, nomeFabricante)
{
    this->tipoInsumo = tipoInsumo;
    this->nome = nome;
    this->quantidade = quantidade;
    this->valorUnitario = valorUnitario;
    this->dtVencimento = dtVencimento;
    this->nomeFabricante = nomeFabricante;
    this->dosagem = dosagem;
    this->administracao = administracao;
    this->disponibilizacao = disponibilizacao;
}

void Medicamento::exibeDescricao(){
    std::cout<<nome<<" do Fabricante "<<nomeFabricante<<" /"<<"valor: R$"<<valorUnitario<<" /"<<"vence: "<<dtVencimento<<" / doses de "<<dosagem<<", administracao via "<<administracao<<", disponibilidade: "<<disponibilizacao<<std::endl;
}

Medicamento::~Medicamento()
{
    //dtor
}
