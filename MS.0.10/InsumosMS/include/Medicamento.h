#ifndef MEDICAMENTO_H
#define MEDICAMENTO_H

#include "Insumo.h"

class Medicamento : public Insumo
{
    public:
        Medicamento();
        Medicamento(int tipoInsumo, std::string nome, int quantidade, float valorUnitario, std::string dtVencimento, std::string nomeFabricante);
        Medicamento(int tipoInsumo, std::string nome, int quantidade, float valorUnitario, std::string dtVencimento, std::string nomeFabricante, std::string dosagem, std::string administracao, std::string disponibilizacao);
        void exibeDescricao();
        std::string getDosagem();
        std::string getAdministracao();
        std::string getDisponibilizacao();
        void salves(std::ofstream &fp);
        void lerAtributos(std::ifstream &fp);
        virtual ~Medicamento();

    protected:

    private:
        std::string dosagem;
        std::string administracao;
        std::string disponibilizacao;
};

#endif // MEDICAMENTO_H
