#include <stdio.h>
#include <stdbool.h>
#include <assert.h>
#include <stdio.h>
#define N 5

void ingresar_arreglo(int arreglo[N]){
  int i=0;
  while(i < N){
    printf("Ingresar el elemento de indice %d de tipo int:\n",i);
    scanf(" %d",&arreglo[i]);
    i = i + 1;
  }
}

struct datos {
    bool esta_ordenado_asc;
    int maximo;
};


struct datos esta_ordenado_asc(int tam, int a[] ){
  struct datos res;
  int i = 1;
  res.esta_ordenado_asc = true;
  res.maximo=a[0];
  assert(tam >=1);
  if (tam>1){
    while (i<tam){
     res.esta_ordenado_asc = res.esta_ordenado_asc && a[i] > a[i-1];
     if (res.maximo < a[i])
       res.maximo = a[i];
     i = i+1;
  }
}
  return res;
}

int main(void){
  int a[N];
  struct datos res;

  ingresar_arreglo(a);
  res = esta_ordenado_asc(N,a);
  printf ("El arreglo ordenado? = %d, y el maximo es =%d' ",res.esta_ordenado_asc,res.maximo );
  

  return 0;
}