#include <iostream>
using std::cin; using std::cout; using std::endl;

//using std::ios;
using std::fixed; using std::defaultfloat;

using std::left; using std::right;

using std::ios;

#include <iomanip>
using std::setw;

using std::setprecision;

#include <fstream>
using std::fstream;

//um registro para organizar dados
struct D_CONTA {
  int n_conta;
  char nome[15];
  double saldo;
  int status;
};

int tContas;

/*
D_CONTA contas[10] = {
  {100, "John", 3000,1},
  {200, "Julia", 0,1},
  {300, "Ash", 1500,1},
  {400, "Lucas", -200,1},
  {500, "Victor", -500,1},
  {600, "Lara", 0,1},
  {700, "Guilherme", 1500,1},
  {800, "Pedro", 360,1},
  {900, "Carlos", -1500,1},
  {1000, "Lucia", 0,1}
};

bool salvar_dados(D_CONTA c[], int n, fstream &f)
{
  //posiciona "ponto de escrita" para início (byte 0)
  f.seekp(0);  
  for (int i = 0 ; i < n ; i++)
    //reinterpret_cast permite converter entre tipos de ponteiros não relacionados
    f.write(reinterpret_cast<char *>(&c[i]),sizeof(c[i]));

  
  //força a escrita imediata no arquivo
  f.flush();

  return true;
} */

int contar_registros(fstream &f)
{
  D_CONTA c;
  int toR = 0;

  f.clear();
  //posiciona "ponto de leitura" para o byte 0
  f.seekg(0);
  while (true)
  {
    f.read(reinterpret_cast<char *> (&c),sizeof(D_CONTA));

    if (f.eof())
      break;
    
    toR++;
  }

  return toR;
}

bool listar_todos(fstream &f)
{  
  D_CONTA c;

  cout << " CONTA " << "      NOME     " << "   SALDO  " << endl;
  
  cout << fixed;
  f.clear();

  //posiciona "ponto de leitura" para o byte 0
  f.seekg(0);
  while (true)
  {
    f.read(reinterpret_cast<char *> (&c),sizeof(D_CONTA));

    if (f.eof())
      break;

    if (!c.status)
      continue;
    
    cout << setw(7) << c.n_conta << ' ' << setw(15) << left << c.nome << ' ' << setw(8) << right << setprecision(2) << c.saldo << endl;
  }
  cout << defaultfloat;

  return true;
}

bool listar_credito(fstream &f)
{
  D_CONTA c;

  cout << " CONTA " << "      NOME     " << "   SALDO  " << endl;
  
  cout << fixed;
  f.clear();
  //posiciona "ponto de leitura" para o byte 0
  f.seekg(0);
  while (true)
  {
    f.read(reinterpret_cast<char *> (&c),sizeof(D_CONTA));

    if (f.eof())
      break;
    
    if (!c.status)
      continue;
    
    if (c.saldo > 0)
      cout << setw(7) << c.n_conta << ' ' << setw(15) << left << c.nome << ' ' << setw(8) << right << setprecision(2) << c.saldo << endl;
  }
  cout << defaultfloat;

  return true;
}

bool listar_debito(fstream &f)
{
  D_CONTA c;

  cout << " CONTA " << "      NOME     " << "   SALDO  " << endl;
  
  cout << fixed;
  f.clear();
  //posiciona "ponto de leitura" para o byte 0
  f.seekg(0);
  while (true)
  {
    f.read(reinterpret_cast<char *> (&c),sizeof(D_CONTA));

    if (f.eof())
      break;
    
    if (!c.status)
      continue;
    
    if (c.saldo < 0)
      cout << setw(7) << c.n_conta << ' ' << setw(15) << left << c.nome << ' ' << setw(8) << right << setprecision(2) << c.saldo << endl;
  }
  cout << defaultfloat;

  return true;
}

bool listar_saldo_zero(fstream &f)
{
  D_CONTA c;

  cout << " CONTA " << "      NOME     " << "   SALDO  " << endl;
  
  cout << fixed;
  f.clear();
  //posiciona "ponto de leitura" para o byte 0
  f.seekg(0);
  while (true)
  {
    f.read(reinterpret_cast<char *> (&c),sizeof(D_CONTA));

    if (f.eof())
      break;
    
    if (!c.status)
      continue;
    
    if (c.saldo == 0.0)
      cout << setw(7) << c.n_conta << ' ' << setw(15) << left << c.nome << ' ' << setw(8) << right << setprecision(2) << c.saldo << endl;
  }
  cout << defaultfloat;

  return true;
}

bool cadastrar_cliente(fstream &f, D_CONTA &c)
{
  D_CONTA ant;
  
  f.clear();
  f.seekg((tContas-1) * sizeof(D_CONTA));

  f.read(reinterpret_cast<char *> (&ant),sizeof(D_CONTA));
 
  c.n_conta =  ant.n_conta + 100;
  c.status = 1;

  f.seekp(tContas * sizeof(D_CONTA));
  
  f.write(reinterpret_cast<char *> (&c),sizeof(D_CONTA));

  //força a escrita imediata no arquivo
  f.flush();
  
  tContas++;

  return true;
}

bool validar_conta(int n_conta)
{
  return ((n_conta % 100) == 0) && ( (n_conta / 100 >= 1) && (n_conta / 100 <= tContas) );
}

bool atualizar_cliente(fstream &f, D_CONTA &c)
{
  f.clear();
  f.seekp((c.n_conta/100 - 1) * sizeof(D_CONTA));
  
  f.write(reinterpret_cast<char *> (&c),sizeof(D_CONTA));

  //força a escrita imediata no arquivo
  f.flush();
  return true;
}

bool modificar_status_cliente(fstream &f, int conta, int status)
{
  D_CONTA c;

  f.clear();
  f.seekg((conta/100 - 1) * sizeof(D_CONTA));

  f.read(reinterpret_cast<char *> (&c),sizeof(D_CONTA));
 
  c.status = status;

  f.seekp((conta/100 - 1) * sizeof(D_CONTA));
  
  f.write(reinterpret_cast<char *> (&c),sizeof(D_CONTA));

  //força a escrita imediata no arquivo
  f.flush();
  return true;
}

int main() {
  fstream fileIO("contas.dat", ios::out | ios::in);

  //if (!fileIO)
    //fileIO.open("contas.dat", ios::out);
  
  if (!fileIO)
    return 1;
  
  //salvar_dados(contas, 10, fileIO);

  tContas = contar_registros(fileIO);

  

  while (1)
  {
    cout << "-------------------------------------" << endl;
    cout << "Banco QUALQUER." << endl;
    cout << "Opções:" << endl;
    cout << "0 - Listar Todos os Clientes" << endl;
    cout << "1 - Listar Clientes com Crédito" << endl;
    cout << "2 - Listar Clientes com Débito" << endl;
    cout << "3 - Listar Clientes com Saldo Zero" << endl;
    cout << "4 - Cadastrar novo Cliente" << endl;
    cout << "5 - Alterar dados Cliente" << endl;
    cout << "6 - Remover Cliente" << endl;
    cout << "7 - Reativar Cliente" << endl;
    cout << endl << "-1 - Sair" << endl;
    cout << "Op: ";

    int op;
    cin >> op;

    
    switch (op)
    {
      case 0:
        listar_todos(fileIO);
        break;
      case 1:
        listar_credito(fileIO);
        break;
      case 2:
        listar_debito(fileIO);
        break;
      case 3:
        listar_saldo_zero(fileIO);
        break;
      case 4:
      {
        D_CONTA c;
        cout << "Cadastrando novo Cliente..." << endl;
        cout << "Nome: ";
        cin >> c.nome;
        cout << "Saldo: ";
        cin >> c.saldo;
        
        cadastrar_cliente(fileIO, c);
        break;
      }
      case 5:
      {
        D_CONTA c;
        cout << "Entre com o num da conta:";
        cin >> c.n_conta;
        if (validar_conta(c.n_conta))
        {
          cout << "Entre com o nome: ";
          cin >> c.nome;
          cout << "Entre com o saldo: ";
          cin >> c.saldo;
          c.status = 1;
          atualizar_cliente(fileIO,c);
        }

        break;
      }
      case 6:
      {
        int conta;
        cout << "Entre com o num da conta:";
        cin >> conta;
        if (validar_conta(conta))
          modificar_status_cliente(fileIO,conta,0);

        break;
      }
      case 7:
      {
        int conta;
        cout << "Entre com o num da conta:";
        cin >> conta;
        if (validar_conta(conta))
          modificar_status_cliente(fileIO,conta,1);

        break;
      }
      case -1:
        fileIO.close();
        exit(0);
        break;

      default:
        //
        break;
    }
  }

  return 0;
}