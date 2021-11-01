#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
using namespace std;

template <class T>
class Array
{
  // cout << obj
    friend ostream &operator<<(ostream &out , const Array<T> &a) {
        for (int i = 0 ; i < a.tam ; i++)
            out << a.arr[i] << " ";
    
        out << endl;

        return out;
    }
  // cin >> obj
    friend istream &operator>>( istream &inp, Array<T> &a) {
        for (int i = 0 ; i < a.tam ; i++)
            inp >> a.arr[i];
    
        return inp;
    }

public:
  Array( int = 10 );    //construtor-padrão
  Array(const Array &); //construtor de cópia
  ~Array();             //destrutor

  int getSize() const;

  
  const Array &operator=( const Array & ); //operador atribuição. "const Array &" evita algo como (a = b) = c

  bool operator==( const Array & ); //operador de igualdade

  bool operator!=( const Array &dir)
  {
    return !(*this == dir);
  }

  int &operator[](T); //permite modificar o elemento
  int operator[](T) const; //não permite modificar o elemento

private:
  int tam;
  T *arr;
};

#endif

template <class T>
Array<T>::Array(int tam)
{
  this->tam = (tam > 0 ? tam : 10);

  arr = new T[this->tam];

  for (int i = 0 ; i < this->tam ; i++)
    arr[i] = 0;
}

template <class T>
Array<T>::Array(const Array &obj) : tam(obj.tam)
{
  arr = new T[this->tam];

  for (int i = 0 ; i < this->tam ; i++)
    arr[i] = obj.arr[i];
}

template <class T>
Array<T>::~Array()
{
  delete [] arr;
}

template <class T>
int Array<T>::getSize() const
{
  return tam;
}

template <class T>
const Array<T> &Array<T>::operator=(const Array &obj)
{
  if (&obj != this) // evita auto-atribuição
  {
    if (this->tam != obj.tam)
    {
      delete [] this->arr;
      this->tam = obj.tam;
      this->arr = new T[this->tam];
    }

    for (int i = 0 ; i < this->tam ; i++)
      arr[i] = obj.arr[i];

  }

  return *this;
}

template <class T>
bool Array<T>::operator==(const Array &obj)
{
  if (this->tam != obj.tam)
    return false;

  for (int i = 0 ; i < this->tam ; i++)
    if (arr[i] != obj.arr[i])
      return false;
  
  return true;
}

template <class T>
int &Array<T>::operator[](T i)
{
  if (i < 0 || i >= tam)
  {
    cerr << "Erro: Indice " << i << " fora de faixa." << endl;

    exit(1);
  }

  return arr[i];
}

template <class T>
int Array<T>::operator[](T i) const
{
  if (i < 0 || i >= tam)
  {
    cerr << "Erro: Indice " << i << " fora de faixa." << endl;

    exit(1);
  }

  return arr[i];
}