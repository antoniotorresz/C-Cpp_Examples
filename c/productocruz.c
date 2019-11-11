#include<conio.h>
#include<stdio.h>

int getI(int u[], int v[]);
int getJ(int u[], int v[]);
int getK(int u[], int v[]);

int main() {
  int u [3];
  int v [3];
  int cruz [3];
  int number, producto;

printf("---------------- VECTOR U ----------------\n");
for (int i = 0; i < 3; i++) {
  printf("Ingrese un numero entero para la posision [%d]\n", i);
  scanf("%d", &number);
  u[i] = number;
}

printf("---------------- VECTOR V ----------------\n");
for (int i = 0; i < 3; i++) {
  printf("Ingrese un numero entero para la posision [%d]\n", i);
  scanf("%d", &number);
  v[i] = number;
}
  cruz[0] = getI(u, v);
  cruz[1] = (-1 * getJ(u, v));
  cruz[2] = getK(u, v);

  for (int i = 0; i < 3; i++) {
    printf("[%d] ->x [%d]\n", u[i], v[i]);
  }
  printf(" = \n");
  for (int i = 0; i < 3; i++) {
    printf("[%d]\n",cruz[i]);
  }
  return 0;
}


int getI(int u[], int v[]){
  //Separamos la columna i
  int detI [2][2] = {
     u[1], u[2],
     v[1], v[2]
  };
  //Hacemos la operacion
return ((detI[0][0] * detI[1][1]) - (detI[0][1] * detI[1][0]));
}

int getJ(int u[], int v[]){
  //Separamos j
  int detJ [2][2] = {
     u[0], u[2],
     v[0], v[2]
  };
  //Hacemos la operacion
    return ((detJ[0][0] * detJ[1][1]) - (detJ[0][1] * detJ[1][0]));
}

int getK(int u[], int v[]){
  //separamos k
  int detK [2][2] = {
     u[0], u[1],
     v[0], v[1]
  };
  //Hacemos la operacion
    return ((detK[0][0] * detK[1][1]) - (detK[0][1] * detK[1][0]));
}
