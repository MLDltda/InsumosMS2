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

Vacina::~Vacina()
{
    //dtor
}
