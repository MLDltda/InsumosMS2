#include "Persistencia.h"
#include "Vacina.h"
#include "Medicamento.h"
#include "EPI.h"

using namespace std;

Persistencia::Persistencia()
{
    //ctor
}

vector<Insumo*> Persistencia::lerInsumos(string nomeLocal){
    vector<Insumo*> vet;
    ifstream fp;
    string nome,ven,nFab;
    int quant,tipo;
    float val;

    Insumo *ins;
    fp.open(nomeLocal+".txt", fstream::in);

    if (fp.is_open()) {
        while (1) {
            getline(fp, nome);

            if (fp.eof() || fp.bad())
                break;

            fp >> quant;
            fp >> val;
            getline(fp, ven);
            getline(fp, nFab);
            fp >> tipo;
            fp.ignore();
            switch (tipo) {
                case 1:
                    ins = new Vacina(tipo, nome, quant, val, ven, nFab);
                    break;
                case 2:
                    ins = new Medicamento(tipo, nome, quant, val, ven, nFab);
                    break;
                case 3:
                    ins = new EPI(tipo, nome, quant, val, ven, nFab);
            }
            ins->lerAtributos(fp);
            fp.ignore();
            vet.push_back(ins);
        }
        fp.close();
    }

    return vet;
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
