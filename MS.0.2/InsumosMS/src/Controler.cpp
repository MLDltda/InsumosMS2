#include <iostream>
#include <string>

#include "Controler.h"

Controler::Controler()
{
    //ctor
}

void Controler::cadastraInsumosMS(){
    std::cout<<"Cadastro de Insumos:"<<std::endl;

    locais[0]->setInsumo();
    return;
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
