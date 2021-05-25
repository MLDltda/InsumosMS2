#ifndef MEDICAMENTO_H
#define MEDICAMENTO_H

#include "Insumo.h"

class Medicamento : public Insumo
{
    public:
        Medicamento();
        virtual ~Medicamento();

    protected:

    private:
        std::string dosagem;
        std::string administracao;
        std::string disponibilizacao;
};

#endif // MEDICAMENTO_H
