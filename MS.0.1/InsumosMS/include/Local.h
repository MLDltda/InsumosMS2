#include <iostream>
#include <vector>

#ifndef LOCAL_H
#define LOCAL_H

#include "Insumo.h"

class Local : public Insumo
{
    public:
        Local();
        void setInsumo(int i);
        virtual ~Local();

    protected:

    private:
        std::string nome;
        int tipo;
        std::vector<Insumo> insumo[100];
};

#endif // LOCAL_H
