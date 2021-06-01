#ifndef MEDICAMENTO_H
#define MEDICAMENTO_H

#include "Insumo.h"

class Medicamento : public Insumo
{
    public:
        Medicamento();
        Medicamento(int tipoInsumo, std::string nome, int quantidade, int valorUnitario, std::string dtVencimento, std::string nomeFabricante, std::string dosagem, std::string administracao, std::string disponibilizacao);
        virtual ~Medicamento();

    protected:

    private:
        std::string dosagem;
        std::string administracao;
        std::string disponibilizacao;
};

#endif // MEDICAMENTO_H
