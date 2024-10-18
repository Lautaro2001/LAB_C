#include <stdio.h>
#include <stdbool.h>

struct triangulo {
        int l1;
        int l2;
        int l3;
};

struct caract_triangulo {
        bool es_equilatero;
        int  perimetro;
};

int pedir_entero(void){
  int x;
  printf("Ingrese un entero: \n");
  scanf("%d",&x);
  return x;

}

struct caract_triangulo averiguar_caract(struct triangulo tri_ent){
   struct caract_triangulo res;
   res.es_equilatero =  tri_ent.l1 ==tri_ent.l2 && tri_ent.l2 ==tri_ent.l3 ;
   res.perimetro =tri_ent.l1 + tri_ent.l2 + tri_ent.l3 ;
   return res;
}

int main(void){

  struct caract_triangulo res;
  struct triangulo entrada;
  entrada.l1 = pedir_entero();
  entrada.l2 = pedir_entero();
  entrada.l3 = pedir_entero();
  res=averiguar_caract(entrada);
  printf ("El triángulo ingresado es equilatero? %d  y su perimetro  es %d ",res.es_equilatero,res.perimetro);
  return 0;
}