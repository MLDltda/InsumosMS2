#ifndef VACINA_H
#define VACINA_H

#include "Insumo.h"

class Vacina : public Insumo
{
    public:
        Vacina();
        Vacina(int tipoInsumo, std::string nome, int quantidade, int valorUnitario, std::string dtVencimento, std::string nomeFabricante, int tipo, int quantDoses, int intervalo);
        virtual ~Vacina();

    protected:

    private:
        int tipo;
        int quantDoses;
        int intervalo;
};

#endif // VACINA_H
