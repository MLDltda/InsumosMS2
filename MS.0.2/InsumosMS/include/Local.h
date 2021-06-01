#include <iostream>
#include <vector>

#ifndef LOCAL_H
#define LOCAL_H

#include "Insumo.h"

class Local : public Insumo
{
    public:
        Local();
        void setInsumo();
        void setDadosVacina();
        void setDadosMedicamento();
        void setDadosEPI();
        virtual ~Local();

    protected:

    private:
        std::string nome;
        int tipo;
        std::vector<Insumo*> insumo;
};

#endif // LOCAL_H
