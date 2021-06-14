#include "Persistencia.h"
#include "Vacina.h"
#include "Medicamento.h"
#include "EPI.h"
#include "Local.h"
#include "Insumo.h"

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
            cout<<nome<<endl;
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


void Persistencia::salvarInsumos(vector<Insumo*>insumos, string nomeLocal){
    ofstream fp;
    fp.open(nomeLocal+".txt", fstream::out);

    if(fp.is_open()){
            for(unsigned int i = 0 ; i < insumos.size(); i++){
                fp << insumos[i]->getNome() << endl;
                fp << insumos[i]->getQuant() << endl;
                fp << insumos[i]->getValorUnitario() << endl;
                fp << insumos[i]->getDtVencimento() << endl;
                fp << insumos[i]->getNomeFabricante() << endl;
                fp << insumos[i]->getTipoInsumo() << endl;
                insumos[i]->salves(fp);
            }
            fp.close();
    }
}

Persistencia::~Persistencia()
{
    //dtor
}
