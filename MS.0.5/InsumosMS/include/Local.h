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
        void setNomeLocal(std::string Onome);
        std::string getNomeLocal();
        void getInsumo();
        void getInsumoDescricao();
        void getInsumoTipo(int tipo);
        int checkInsumo(std::string name);
        void somaQuant(int Place);
        virtual ~Local();

    protected:

    private:
        std::string nomeLocal;
        int tipo;
        std::vector<Insumo*> insumo;
};

#endif // LOCAL_H
