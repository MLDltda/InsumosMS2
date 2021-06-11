#ifndef EPI_H
#define EPI_H

#include "Insumo.h"

class EPI : public Insumo
{
    public:
        EPI();
        EPI(int tipoInsumo, std::string nome, int quantidade, float valorUnitario, std::string dtVencimento, std::string nomeFabricante, std::string tipo, std::string descricao);
        void exibeDescricao();
        std::string getTipo();
        std::string getDescricao();
        void salves(std::ofstream &fp);
        virtual ~EPI();

    protected:

    private:
        std::string tipo;
        std::string descricao;
};

#endif // EPI_H
