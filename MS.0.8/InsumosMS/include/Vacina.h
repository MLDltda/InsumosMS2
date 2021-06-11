#ifndef VACINA_H
#define VACINA_H

#include "Insumo.h"

class Vacina : public Insumo
{
    public:
        Vacina();
        Vacina(int tipoInsumo, std::string nome, int quantidade, float valorUnitario, std::string dtVencimento, std::string nomeFabricante, std::string tipo, int quantDoses, int intervalo);
        void exibeDescricao();
        std::string getTipo();
        int getQuantDoses();
        int getIntervalo();
        void salves(std::ofstream &fp);
        virtual ~Vacina();

    protected:

    private:
        std::string tipo;
        int quantDoses;
        int intervalo;
};

#endif // VACINA_H
