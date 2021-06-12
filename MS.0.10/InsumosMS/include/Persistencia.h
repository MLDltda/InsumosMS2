#ifndef PERSISTENCIA_H
#define PERSISTENCIA_H

#include "Controler.h"

class Persistencia : public Controler
{
    public:
        Persistencia();
        Insumo* lerInsumos(std::string nomeLocal);
        void salvarInsumosVacina(int tipoInsumo, std::string nome, int quantidade, float valorUnitario, std::string dtVencimento, std::string nomeFabricante, std::string tipo, int quantDoses, int intervalo, std::string nomeLocal);
        void salvarInsumosMedicamento(int tipoInsumo, std::string nome, int quantidade, float valorUnitario, std::string dtVencimento, std::string nomeFabricante, std::string dosagem, std::string administracao, std::string disponibilizacao, std::string nomeLocal);
        void salvarInsumosEPI(int tipoInsumo, std::string nome, int quantidade, float valorUnitario, std::string dtVencimento, std::string nomeFabricante, std::string tipo, std::string descricao, std::string nomeLocal);
        //void salvarInsumos(std::vector<Insumo*>insumos, std::string nomeLocal);
        virtual ~Persistencia();

    protected:

    private:
};



#endif // PERSISTENCIA_H
