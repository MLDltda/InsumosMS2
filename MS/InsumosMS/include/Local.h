#include <vector>

#ifndef LOCAL_H
#define LOCAL_H

#include "Insumo.h"

class Local : public Insumo
{
    public:
        Local();
        virtual ~Local();

    protected:

    private:
        std::string nome;
        int tipo;
        std::vector<Insumo> insumo;
};

#endif // LOCAL_H
