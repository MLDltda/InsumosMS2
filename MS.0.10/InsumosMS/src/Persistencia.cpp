#include "Persistencia.h"
#include "Vacina.h"
#include "Medicamento.h"
#include "EPI.h"

using namespace std;

Persistencia::Persistencia()
{
    //ctor
}

Insumo* Persistencia::lerInsumos(string nomeLocal){
    ifstream fp;
    string nome,ven,nFab;
    int quant,tipo;
    float val;
    std::string type;
    int quantDoses, intervalo;
    std::string dosagem, administracao, disponibilizacao;
    std::string descricao;

    cout<<"Abrindo o arquivo "<<nomeLocal<<endl;

    Insumo *ins;
    fp.open(nomeLocal+".txt", fstream::in);

    if (fp.is_open()) {
            /*if (fp.eof() || fp.bad())
                break;*/
            fp >> tipo;
            getline(fp, nome);
            fp >> quant;
            fp >> val;
            getline(fp, ven);
            getline(fp, nFab);
            fp.ignore();
            switch (tipo) {
                case 1:
                    getline(fp, type);
                    fp >> quantDoses;
                    fp >> intervalo;
                    ins = new Vacina(tipo, nome, quant, val, ven, nFab, type, quantDoses, intervalo);
                    break;
                case 2:
                    getline(fp, dosagem);
                    getline(fp, administracao);
                    getline(fp, disponibilizacao);
                    ins = new Medicamento(tipo, nome, quant, val, ven, nFab, dosagem, administracao, disponibilizacao);
                    break;
                case 3:
                    getline(fp, type);
                    getline(fp, descricao);
                    ins = new EPI(tipo, nome, quant, val, ven, nFab, type, descricao);
                    break;
            }

        }
        fp.close();


    return ins;
}

void Persistencia::salvarInsumosVacina(int tipoInsumo, std::string nome, int quantidade, float valorUnitario, std::string dtVencimento, std::string nomeFabricante, std::string tipo, int quantDoses, int intervalo, string nomeLocal){
    ofstream fp;
    fp.open(nomeLocal+".txt", fstream::app);

    if(fp.is_open()){
                fp << tipoInsumo << endl;
                fp << nome << endl;
                fp << quantidade << endl;
                fp << valorUnitario << endl;
                fp << dtVencimento << endl;
                fp << nomeFabricante << endl;
                fp << tipo << endl;
                fp << quantDoses << endl;
                fp << intervalo << endl;
            }
            fp.close();
}

void Persistencia::salvarInsumosMedicamento(int tipoInsumo, std::string nome, int quantidade, float valorUnitario, std::string dtVencimento, std::string nomeFabricante, std::string dosagem, std::string administracao, std::string disponibilizacao, string nomeLocal){
    ofstream fp;
    fp.open(nomeLocal+".txt", fstream::app);

    if(fp.is_open()){
                fp << tipoInsumo << endl;
                fp << nome << endl;
                fp << quantidade << endl;
                fp << valorUnitario << endl;
                fp << dtVencimento << endl;
                fp << nomeFabricante << endl;
                fp << dosagem << endl;
                fp << administracao << endl;
                fp << disponibilizacao << endl;
            }
            fp.close();
}

void Persistencia::salvarInsumosEPI(int tipoInsumo, std::string nome, int quantidade, float valorUnitario, std::string dtVencimento, std::string nomeFabricante, std::string tipo, std::string descricao, string nomeLocal){
    ofstream fp;
    fp.open(nomeLocal+".txt", fstream::app);

    if(fp.is_open()){
                fp << tipoInsumo << endl;
                fp << nome << endl;
                fp << quantidade << endl;
                fp << valorUnitario << endl;
                fp << dtVencimento << endl;
                fp << nomeFabricante << endl;
                fp << tipo << endl;
                fp << descricao << endl;
            }
            fp.close();
}

Persistencia::~Persistencia()
{
    //dtor
}
