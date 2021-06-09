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
        void setQuant(int num);
        int getTipoInsumo();
        std::string getNome();
        int getQuant();
        int getValorUnitario();
        std::string getDtVencimento();
        std::string getNomeFabricante();
        virtual int getTipo();
        virtual int getQuantDoses();
        virtual int getIntervalo();
        virtual std::string getDosagem();
        virtual std::string getAdministracao();
        virtual std::string getDisponibilizacao();
        virtual std::string getDescricao();
        virtual void exibeDescricao();
        void exibeDados();
        void somaInsumo(int soma);
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
