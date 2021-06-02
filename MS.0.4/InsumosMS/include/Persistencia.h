#ifndef PERSISTENCIA_H
#define PERSISTENCIA_H

#include "Controler.h"

class Persistencia : public Controler
{
    public:
        Persistencia();
        void lerInsumos();
        void salvarInsumos(std::vector<Insumo*>insumo);
        virtual ~Persistencia();

    protected:

    private:
};

#endif // PERSISTENCIA_H
