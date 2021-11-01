#ifndef FILA_H
#define FILA_H 

template < class T >
class Fila 
{
public:
  Fila( int = 10 );
  ~Fila();
  
  bool push(const T &);
  bool pop(T &);
  T imprimir();

  bool isEmpty() const { return pos == 0; }
  bool isFull() const { return pos == tam;}
private:
  T *pPtr;
  int pos, tam;
};

template < class T >
Fila<T>::Fila( int tam )
{
  this->tam = ( (tam > 0) ? tam : 10 );
  pos = 0;

  pPtr = new T[this->tam];
}

template < class T >
Fila<T>::~Fila()
{
  delete [] pPtr;
}

template < class T >
bool Fila<T>::push(const T &el)
{
  if (!isFull())
  {
    pPtr[pos++] = el;
    return true;
  }
  return false;
}

template < class T>
bool Fila<T>::pop(T &el)
{
  if (!isEmpty())
  {
    int dado = pPtr[0];
	for (int i = 0 ; i < pos -1 ; i++)
  	pPtr[i] = pPtr[i+1];
	  pos--;
    return true;
  }
  return false;
}

template < class T>
T Fila<T>::imprimir() {
    printf("\n");
    printf("F[ ");
    for (int i = 0 ; i < pos ; i++)
        printf("%d ",pPtr[i]);
    printf("]\n");
}

#endif