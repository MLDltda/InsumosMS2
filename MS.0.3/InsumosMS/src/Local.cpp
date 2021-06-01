#include "Local.h"
#include "Vacina.h"
#include "Medicamento.h"
#include "EPI.h"

Local::Local()
{
    //ctor
}

void Local::setInsumo(Insumo* ins){
    nomeLocal = "Ministerio da Saude";
    insumo.push_back(ins);
}

Local::~Local()
{
    //dtor
}
