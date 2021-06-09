#include <iostream>
#include <string>

#include "Controler.h"
#include "Vacina.h"
#include "Medicamento.h"
#include "EPI.h"

Controler::Controler()
{
    locais[0].setNomeLocal("Ministerio da Saude");
    locais[1].setNomeLocal("Distrito Federal");
    locais[2].setNomeLocal("Acre");
    locais[3].setNomeLocal("Alagoas");
    locais[4].setNomeLocal("Amapa");
    locais[5].setNomeLocal("Amazaonas");
    locais[6].setNomeLocal("Bahia");
    locais[7].setNomeLocal("Ceara");
    locais[8].setNomeLocal("Espirito Santo");
    locais[9].setNomeLocal("Goias");
    locais[10].setNomeLocal("Maranhao");
    locais[11].setNomeLocal("Mato Grosso");
    locais[12].setNomeLocal("Mato Grosso do Sul");
    locais[13].setNomeLocal("Minas Gerais");
    locais[14].setNomeLocal("Para");
    locais[15].setNomeLocal("Paraiba");
    locais[16].setNomeLocal("Parana");
    locais[17].setNomeLocal("Pernambuco");
    locais[18].setNomeLocal("Piaui");
    locais[19].setNomeLocal("Rio de janeiro");
    locais[20].setNomeLocal("Rio Grande do Norte");
    locais[21].setNomeLocal("Rio Grande do Sul");
    locais[22].setNomeLocal("Rondonia");
    locais[23].setNomeLocal("Roraima");
    locais[24].setNomeLocal("Santa Catarina");
    locais[25].setNomeLocal("Sao Paulo");
    locais[26].setNomeLocal("Sergipe");
    locais[27].setNomeLocal("Tocantins");
}

void Controler::cadastraInsumosMS(){
    int tipo;
    int cadastro;
    std::string name;
    std::cout<<"Cadastro de Insumos:"<<std::endl;
    while(1){
    std::cout<<"Escolha o Tipo de Insumo a ser cadastrado:\n1.Vacina.\n2.Medicamento.\n3.EPI.\n4.voltar."<<std::endl;
    std::cin>>tipo;

    switch(tipo){
case 1:
    std::cout<<"Digite o nome da Vacina:"<<std::endl;
    getchar();
    getline(std::cin,name);
    cadastro = checkCadastro(name);
    if(cadastro >= 0){
    std::cout<<"Vacina ja cadastrada";
    locais[0].somaQuant(cadastro);
    }else
    setDadosVacina(name);
    break;
case 2:
    std::cout<<"Digite o nome do Medicamento:"<<std::endl;
    getchar();
    getline(std::cin,name);
    cadastro = checkCadastro(name);
    if(cadastro >= 0){
    std::cout<<"Medicamento ja cadastrado";
    locais[0].somaQuant(cadastro);
    }else
    setDadosMedicamento(name);
    break;
case 3:
    std::cout<<"Digite o nome do EPI:"<<std::endl;
    getchar();
    getline(std::cin,name);
    cadastro = checkCadastro(name);
    if(cadastro >= 0){
    std::cout<<"EPI ja cadastrado";
    locais[0].somaQuant(cadastro);
    }else
    setDadosEPI(name);
    break;
case 4:
    return;
    break;
default:
    std::cout<<"Tipo de Insumo invalido, digite novamente:"<<std::endl;
    break;
    }
    }
}

int Controler::checkCadastro(std::string name){
    std::cout<<"Checando Cadastros...."<<std::endl;
    return locais[0].checkInsumo(name);
}

void Controler::setDadosVacina(std::string name){
    //variaveis temporarias de cadastro
    int quant, value;
    std::string date, Fabricant;
    int type, doses, inter;
    //ate aqui

    int tipo;

    while(1){
    std::cout<<"Vacina "<<name<<" ainda nao cadastrada, deseja cadastrar?\n1.cadastrar.\n2.voltar."<<std::endl;
    std::cin>>tipo;

    switch(tipo){
case 1:
    break;
case 2:
    return;
    break;
default:
    std::cout<<"Dado invalido, digite novamente:"<<std::endl;
    break;
    }
    std::cout<<"Digite os Dados da vacina "<<name<<":"<<std::endl;

    std::cout<<"Quantidade da vacina:"<<std::endl;
    std::cin>>quant;
    std::cout<<"Valor Unitario da vacina:"<<std::endl;
    std::cin>>value;
    getchar();
    std::cout<<"Data de vencimento da vacina:"<<std::endl;
    std::getline(std::cin,date);
    std::cout<<"Nome do Fabricante da vacina:"<<std::endl;
    std::getline(std::cin,Fabricant);
    std::cout<<"Tipo da vacina:"<<std::endl;
    std::cin>>type;
    std::cout<<"Quantidade de doses da vacina:"<<std::endl;
    std::cin>>doses;
    std::cout<<"Intervalo de dias entre as doses da vacina:"<<std::endl;
    std::cin>>inter;

    auto vet = new Vacina(1, name, quant, value, date, Fabricant, type, doses, inter);

    std::cout<<"esse e o nome da vacina cadastrada:"<<vet->getNome()<<std::endl;

    locais[0].setInsumo(vet);

    return;
    }
}

void Controler::setDadosMedicamento(std::string name){
    //variaveis temporarias de cadastro
    int quant, value;
    std::string date, Fabricant;
    std::string dose, admin, dispo;
    //ate aqui

    int tipo;

    while(1){
    std::cout<<"Medicamento "<<name<<" ainda nao cadastrada, deseja cadastrar?\n1.cadastrar.\n2.voltar."<<std::endl;
    std::cin>>tipo;

    switch(tipo){
case 1:
    break;
case 2:
    return;
    break;
default:
    std::cout<<"Dado invalido, digite novamente:"<<std::endl;
    break;
    }
    std::cout<<"Digite os Dados do medicamento "<<name<<":"<<std::endl;

    std::cout<<"Quantidade do medicamento:"<<std::endl;
    std::cin>>quant;
    std::cout<<"Valor Unitario do medicamento:"<<std::endl;
    std::cin>>value;
    getchar();
    std::cout<<"Data de vencimento do medicamento:"<<std::endl;
    std::getline(std::cin,date);
    std::cout<<"Nome do Fabricante do medicamento:"<<std::endl;
    std::getline(std::cin,Fabricant);
    std::cout<<"Dosagem do medicamento:"<<std::endl;
    std::getline(std::cin,dose);
    std::cout<<"Administracao do medicamento:"<<std::endl;
    std::getline(std::cin,admin);
    std::cout<<"Disponibilizacao do medicamento:"<<std::endl;
    std::getline(std::cin,dispo);

    auto vet = new Medicamento(2, name, quant, value, date, Fabricant, dose, admin, dispo);

    locais[0].setInsumo(vet);
    return;
    }
}


void Controler::setDadosEPI(std::string name){
    //variaveis temporarias de cadastro
    int quant, value;
    std::string date, Fabricant;
    int type;
    std::string desc;
    //ate aqui

    int tipo;

    while(1){
    std::cout<<"EPI "<<name<<" ainda nao cadastrada, deseja cadastrar?\n1.cadastrar.\n2.voltar."<<std::endl;
    std::cin>>tipo;

    switch(tipo){
case 1:
    break;
case 2:
    return;
    break;
default:
    std::cout<<"Dado invalido, digite novamente:"<<std::endl;
    break;
    }
    std::cout<<"Digite os Dados do EPI "<<name<<":"<<std::endl;

    std::cout<<"Quantidade do EPI:"<<std::endl;
    std::cin>>quant;
    std::cout<<"Valor Unitario do EPI:"<<std::endl;
    std::cin>>value;
    getchar();
    std::cout<<"Data de vencimento do EPI:"<<std::endl;
    std::getline(std::cin,date);
    std::cout<<"Nome do Fabricante do EPI:"<<std::endl;
    std::getline(std::cin,Fabricant);
    std::cout<<"Tipo do EPI:"<<std::endl;
    std::cin>>type;
    getchar();
    std::cout<<"Descricao do EPI:"<<std::endl;
    std::getline(std::cin,desc);

    auto vet = new EPI(3, name, quant, value, date, Fabricant, type, desc);

    locais[0].setInsumo(vet);

    return;
    }
}

void Controler::consultaInsumos(int escolha){
    std::cout<<" ----------------------------------------- "<<locais[escolha].getNomeLocal()<<" ----------------------------------------- "<<std::endl;
    locais[escolha].getInsumo();
}

void Controler::consultaInsumosDescricao(int escolha){
    std::cout<<" ----------------------------------------- "<<locais[escolha].getNomeLocal()<<" ----------------------------------------- "<<std::endl;
    locais[escolha].getInsumoDescricao();
}

void Controler::consultaInsumosTipo(int escolha){
    int type;

    while(1){
    std::cout<<"Qual O tipo de Insumo visualizar:\n1.Vacina.\n2.Medicamento.\n3.EPI.\n4.voltar."<<std::endl;
    std::cin>>type;

    switch(type){
case 1:
    std::cout<<" ----------------------------------------- "<<locais[escolha].getNomeLocal()<<" ----------------------------------------- "<<std::endl;
    std::cout<<" ----------------------------------------- "<<"Vacinas:"<<" ----------------------------------------- "<<std::endl;
    locais[escolha].getInsumoTipo(1);
    break;
case 2:
    std::cout<<" ----------------------------------------- "<<locais[escolha].getNomeLocal()<<" ----------------------------------------- "<<std::endl;
    std::cout<<" ----------------------------------------- "<<"Medicamento:"<<" ----------------------------------------- "<<std::endl;
    locais[escolha].getInsumoTipo(2);
    break;
case 3:
    std::cout<<" ----------------------------------------- "<<locais[escolha].getNomeLocal()<<" ----------------------------------------- "<<std::endl;
    std::cout<<" ----------------------------------------- "<<"EPI:"<<" ----------------------------------------- "<<std::endl;
    locais[escolha].getInsumoTipo(3);
    break;
case 4:
    return;
    break;
default:
    std::cout<<"Tipo de Insumo invalido, digite novamente:"<<std::endl;
    break;
    }
    }
}

void Controler::distribuiInsumo(int escolha){
    int ins, quant, esc;
    bool conf;
    int total;
    std::cout<<"Qual Insumo distribuir:"<<std::endl;
    locais[0].getInsumo2();
    std::cin>>ins;
    ins--;
    conf = locais[0].checkExistencia(ins);
    if(conf){
        return;
    }
    while(1){
    std::cout<<"Quantos Insumos deseja enviar:"<<std::endl;
    std::cin>>quant;
    total = locais[0].subtraiQuant(ins, quant);
    if(total){
        auto *vet = locais[0].getVect(ins);
        locais[escolha].copVect(vet, quant);
        locais[0].novaQuant(ins, total);
        return;

    }else{
        do{
          std::cout<<"1.Digitar outro valor.\n2.Voltar."<<std::endl;
        std::cin>>esc;
        switch(esc){
        case 1:
            esc = 0;
            break;
        case 2:
            return;
        default:
            std::cout<<"Escolha invalida, digite novamente."<<std::endl;
        }
        }while(esc > 0);
    }
    }
}

Controler::~Controler()
{
    //dtor
}
