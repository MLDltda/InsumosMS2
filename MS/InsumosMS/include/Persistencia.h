#ifndef PERSISTENCIA_H
#define PERSISTENCIA_H

#include "Controler.h"

class Persistencia : public Controler
{
    public:
        Persistencia();
        void lerInsumos();
        void salvarInsumos();
        virtual ~Persistencia();

    protected:

    private:
};

#endif // PERSISTENCIA_H
