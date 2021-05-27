#include <iostream>
#include <string>

#include "Controler.h"

Controler::Controler()
{
    //ctor
}

void Controler::cadastraInsumosMS(){
    std::cout<<"Escolha o Tipo de Insumo a ser cadastrado:\n1.Vacina.\n2.Medicamento.\n3.EPI."<<std::endl;
    for(unsigned i = 0; i < 100; i++){
        insumo[i].tipoInsumo;
    }
}

void Controler::consultaInsumos(Local loc){

}

void Controler::consultaInsumosDescricao(Local loc){

}

Insumo Controler::consultaInsumos(Local loc, int tipoInsumo){

}

void Controler::distribuiInsumo(Local dest, Insumo insumo){

}

Controler::~Controler()
{
    //dtor
}
