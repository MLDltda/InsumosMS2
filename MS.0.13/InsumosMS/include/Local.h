#include <iostream>
#include <vector>

#ifndef LOCAL_H
#define LOCAL_H

#include "Insumo.h"

class Local : public Insumo
{
    public:
        Local();
        void setInsumo(Insumo *ins);
        void setNomeLocal(std::string Onome);
        std::string getNomeLocal();
        void getInsumo();
        void getInsumo2();
        void getInsumoDescricao();
        void getInsumoTipo(int tipo);
        int checkInsumo(std::string name);
        void somaQuant(int Place);
        int subtraiQuant(int num, int quant);
        Insumo* getVect(int num);
        void copVect(Insumo *ins, int num);
        void disVacina(Insumo *ins);
        void disMedicamento(Insumo *ins);
        void disEPI(Insumo *ins);
        void novaQuant(int num, int quant);
        bool checkExistencia(unsigned int num);
        std::vector<Insumo*> RetornaInsumo();
        void PreencheInsumo(std::vector<Insumo*> vet);
        virtual ~Local();


    protected:
        std::vector<Insumo*> insumo;

    private:
        std::string nomeLocal;
        int tipo;
};

#endif // LOCAL_H
