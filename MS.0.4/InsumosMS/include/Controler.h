#include <iostream>
#include <vector>

#ifndef CONTROLER_H
#define CONTROLER_H

#include "Local.h"

class Controler : public Local
{
    public:
        Controler();
        void cadastraInsumosMS();
        void consultaInsumos(int escolha);
        void consultaInsumosDescricao(int escolha);
        Insumo consultaInsumos(Local loc, int tipoInsumo);
        void distribuiInsumo(Local dest, Insumo insumo);
        void setDadosVacina();
        void setDadosMedicamento();
        void setDadosEPI();
        virtual ~Controler();

    protected:
        Local locais[28];

    private:

};

#endif // CONTROLER_H
