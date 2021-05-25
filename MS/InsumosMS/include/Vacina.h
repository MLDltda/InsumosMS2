#ifndef VACINA_H
#define VACINA_H

#include "Insumo.h"

class Vacina : public Insumo
{
    public:
        Vacina();
        virtual ~Vacina();

    protected:

    private:
        int tipo;
        int quantDoses;
        int intervalo;
};

#endif // VACINA_H
