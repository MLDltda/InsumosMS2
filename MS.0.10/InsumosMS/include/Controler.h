#include <fstream>
#include <iostream>
#include <vector>

#ifndef CONTROLER_H
#define CONTROLER_H

#include "Local.h"

class Controler : public Local
{
    public:
        Controler();
        void carregarDados();
        void cadastraInsumosMS();
        void consultaInsumos(int escolha);
        void consultaInsumosDescricao(int escolha);
        void consultaInsumosTipo(int escolha);
        void distribuiInsumo(int escolha);
        void setDadosVacina(std::string name);
        void setDadosMedicamento(std::string name);
        void setDadosEPI(std::string name);
        int checkCadastro(std::string name);
        //void salvarDados();
        virtual ~Controler();

    protected:
        Local locais[28];

    private:

};

#endif // CONTROLER_H
