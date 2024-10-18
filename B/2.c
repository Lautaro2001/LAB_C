#include <assert.h>
#include <stdio.h>

int pedirEntero(void){
  int x;
  printf("Ingrese un entero: \n");
  scanf("%d",&x);
  return x;
  
}

int main(void){
  
  int x,y,z, xInput,yInput,zInput;
  xInput=pedirEntero();
  yInput=pedirEntero();
  zInput=pedirEntero();
  x=xInput;
  y=yInput;
  z=zInput;
  
  assert(x==xInput && y==yInput && z==zInput &&x>0  && y>0);
  if (x<=y){
    x=yInput*zInput;
    y=zInput+yInput+xInput;
    z =xInput+yInput;
    
  }else{
    x=yInput;
    y=zInput;
    z =xInput;
  };
  printf("x=%d, y=%d, z=%d \n xInput=%d, yInput=%d, zInput=%d \n", x, y, z ,xInput ,yInput ,zInput );
  assert( (xInput <= yInput && x==yInput*zInput && y == zInput+yInput+xInput && z ==xInput+yInput) || (xInput >  yInput  && x==yInput && y == zInput && z ==xInput) );  
  
  return 0;
}