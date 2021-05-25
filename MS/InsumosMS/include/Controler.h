#ifndef CONTROLER_H
#define CONTROLER_H

#include "Local.h"

class Controler : public Local
{
    public:
        Controler();
        void cadastraInsumosMS();
        void consultaInsumos(Local loc);
        void consultaInsumosDescricao(Local loc);
        insumo consultaInsumos(Local loc, int tipoInsumo);
        void distribuiInsumo(Local dest, Insumo insumo);
        virtual ~Controler();

    protected:

    private:
        std::vector<Local> locais[28];
};

#endif // CONTROLER_H
