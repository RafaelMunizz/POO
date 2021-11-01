#include "./Banco/Banco.h"
#include <string>
#include <iostream>
using namespace std;

bool Banco::Correntista() {
    cout << " Area de cadastro\nEscolha se quer se cadastrar como Pessoa Fisica (Digite 'F') ou Pessoa Juridica (Digite 'J'): ";
    char opcao;
    cin >> opcao;

    while (opcao != 'F' || opcao != 'J') {

        cout << "Opcao inválida. Digite 'F' para Pessoa Fisica ou 'J' para Pessoa Juridica: " << endl;
        cin >> opcao;
    }

    if (opcao == 'F') {

        string cpf_PF, nome_PF;

        cout<<"Insira o seu nome :"<<endl;
        getline(cin, nome_PF);

        cout << "Digite o CPF (apenas números): " << endl;
        getline(cin, cpf_PF);

        correntistas[quant_correntistas] = new PessoaFisica(nome_PF, cpf_PF);

        cout << "Cadastro realizado" << endl;

        quant_correntistas++;
        return true;

    } else if (opcao == 'J') {

        string cnpj_PJ, nome_PJ;

        cout<<"Insira o nome da sua empresa: "<<endl;
        getline(cin, nome_PJ);

        cout << "Digite o CNPJ (apenas números): " << endl;
        getline(cin, cnpj_PJ);

        correntistas[quant_correntistas] = new PessoaJuridica(nome_PJ, cnpj_PJ);

        cout << "Cadastro realizado" << endl;

        quant_correntistas++;
        return true;
    }
}

bool Banco::CadastrarConta() {

    int opcao;

    cout << "Cadastrando uma nova conta.\nQual o tipo de conta deseja abrir ? " << endl;

    cout << "Conta Comum (Digite 1)"<< endl 
         << "Conta Limite (Digite 2)" << endl 
         << "Conta Poupança (Digite 3)"<< endl;

    cout << "Opcao: ";
    cin >> opcao;

    string nome_correntista, aniversario;

    cout << "Insira o seu nome: ";
    getline(cin, nome_correntista);

    int num = 0;
    for (int i = 0; i <= quant_correntistas; i++) {

        if (correntistas[i] -> getNome() == nome)
            num = i;
    }

    if (opcao == 1) {

        ContaComum(quant_contas*100, correntistas[num]);
        quant_contas++;
        return true;

    } else if (opcao == 2) {

        int limite = 500;
        ContaLimite(quant_contas*100, correntistas[num], limite);
        quant_contas++;
        return true;

    } else if (opcao == 3) {

        cout << "Digite a data da criação da conta (DD/MM/AAAA): " << endl;
        cin >> aniversario;
        ContaPoupanca(quant_contas*100, correntistas[num], aniversario);
        quant_contas++;
        return true;

    } else 
        return false;
}

bool Banco::ConsultarConta(int conta) const {

    for (int i = 0; i < quant_contas; i++) {

        if (conta == listaContas[i] -> getConta()) {
        
        cout << "Numero da conta: " << listaContas[i] -> getConta() << endl;
        cout << "Nome do correntista: " << listaContas[i] -> getNome() << endl;
        cout << "Saldo: " << listaContas[i] -> getSaldo() << endl;
        cout << endl;
        return true;
        }
    }
    cout << "Não encontrado!" << endl;
    return false;
}

bool Banco::RemoverConta(int conta) const {

    for (int i = 0; i < quant_contas; i++) {

        if (conta == listaContas[i] -> getConta()) {
            
            delete listaContas[i];
            return true;
        }
    }

    cout << "Conta não encontrada!" << endl;
    return false;
}

bool Banco::AtualizarConta(int conta) const {


    
}
