#include <iostream>
#include <string>
#include <vector>

#ifndef INSUMO_H
#define INSUMO_H


class Insumo
{
    public:
        Insumo();
        Insumo(int tipoInsumo, std::string nome, int quantidade, int valorUnitario, std::string dtVencimento, std::string nomeFabricante);
        void setTipoInsumo();
        int getTipoInsumo();
        std::string getNome();
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
