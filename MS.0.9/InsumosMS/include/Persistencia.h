#ifndef PERSISTENCIA_H
#define PERSISTENCIA_H

#include "Controler.h"

class Persistencia : public Controler
{
    public:
        Persistencia();
        Insumo* lerInsumos(std::string nomeLocal);
        void salvarInsumos(std::vector<Insumo*>insumos, std::string nomeLocal);
        virtual ~Persistencia();

    protected:

    private:
};



#endif // PERSISTENCIA_H
