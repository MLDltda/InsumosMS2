#ifndef EPI_H
#define EPI_H

#include "Insumo.h"

class EPI : public Insumo
{
    public:
        EPI();
        virtual ~EPI();

    protected:

    private:
        int tipo;
        std::string descricao;
};

#endif // EPI_H
