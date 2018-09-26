#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
struct Nodo{
  int valor;
  Nodo *siguiente;
};
void insertarLista(int);
void mostrarlista();
Nodo *inicio = NULL;
int main(int argc, char const *argv[]) {
  insertarLista(59);
  insertarLista(16);
  insertarLista(13);
  insertarLista(12);
  insertarLista(89);
  insertarLista(1);
  cout << endl;
  mostrarlista();
  getch();
  return 0;
}//fin de main

void insertarLista(int n){
  Nodo *actual = new Nodo();
  actual->valor = n;
  Nodo *aux1 = inicio;
  Nodo *aux2;
  while((aux1 != NULL) && (aux1 -> valor < n)){
    aux2 = aux1;
    aux1 = aux1 -> siguiente;
  }

  if(inicio == aux1){
    inicio = actual;
  }else{
    aux2 -> siguiente = actual;
  }
  actual -> siguiente = aux1;
}

void mostrarlista(){
  Nodo *actual = new Nodo ();
  actual = inicio;
  while (actual != NULL) {
    cout << " -> " <<actual -> valor ;
    actual = actual -> siguiente;
  }
}
