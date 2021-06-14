#include "Medicamento.h"

Medicamento::Medicamento()
{
    //ctor
}

Medicamento::Medicamento(int tipoInsumo, std::string nome, int quantidade, float valorUnitario, std::string dtVencimento, std::string nomeFabricante)
    : Insumo(tipoInsumo, nome, quantidade, valorUnitario, dtVencimento, nomeFabricante)
{
    //ctor
}

Medicamento::Medicamento(int tipoInsumo, std::string nome, int quantidade, float valorUnitario, std::string dtVencimento, std::string nomeFabricante, std::string dosagem, std::string administracao, std::string disponibilizacao)
    : Insumo(tipoInsumo, nome, quantidade, valorUnitario, dtVencimento, nomeFabricante)
{
    this->dosagem = dosagem;
    this->administracao = administracao;
    this->disponibilizacao = disponibilizacao;
}

void Medicamento::exibeDescricao(){
    std::cout<<nome<<" do Fabricante "<<nomeFabricante<<" /"<<"valor: R$"<<valorUnitario<<" /"<<"vence: "<<dtVencimento<<" / doses de "<<dosagem<<", administracao via "<<administracao<<", disponibilidade: "<<disponibilizacao<<std::endl;
}

std::string Medicamento::getDosagem(){
    return dosagem;
}

std::string Medicamento::getAdministracao(){
    return administracao;
}

std::string Medicamento::getDisponibilizacao(){
    return disponibilizacao;
}

void Medicamento::salves(std::ofstream &fp){
    fp << dosagem << std::endl;
    fp << administracao << std::endl;
    fp << disponibilizacao << std::endl;
}

void Medicamento::lerAtributos(std::ifstream &fp){
    fp >> dosagem;
    fp >> administracao;
    fp >> disponibilizacao;
}

Medicamento::~Medicamento()
{
    //dtor
}
