#include <iostream>
#include <string>
#include <vector>

#ifndef INSUMO_H
#define INSUMO_H


class Insumo
{
    public:
        Insumo();
        virtual ~Insumo();

    protected:
        std::string nome;
        int quantidade;
        int valorUnitario;
        std::string dtVencimento;
        std::string nomeFabricante;
        int  tipoInsumo;
    private:
};

#endif // INSUMO_H
