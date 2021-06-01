#include <iostream>
#include <vector>

#ifndef LOCAL_H
#define LOCAL_H

#include "Insumo.h"

class Local : public Insumo
{
    public:
        Local();
        void setInsumo(Insumo *ins);
        virtual ~Local();

    protected:

    private:
        std::string nomeLocal;
        int tipo;
        std::vector<Insumo*> insumo;
};

#endif // LOCAL_H
