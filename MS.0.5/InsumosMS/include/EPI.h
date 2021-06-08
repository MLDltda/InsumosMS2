#ifndef EPI_H
#define EPI_H

#include "Insumo.h"

class EPI : public Insumo
{
    public:
        EPI();
        EPI(int tipoInsumo, std::string nome, int quantidade, int valorUnitario, std::string dtVencimento, std::string nomeFabricante, int tipo, std::string descricao);
        void exibeDescricao();
        virtual ~EPI();

    protected:

    private:
        int tipo;
        std::string descricao;
};

#endif // EPI_H
