#include <conio.h>
#include<stdio.h>
/*
Yessenia Abigail Garcia Rizo
*/
double sueldo, n1, n2, resultado;
int opc;

double calculoSueldo(double sueldoSemanal);
double validarSueldo(double sueldo);
double operacionesBasicas(double n1, double n2);

int main() {
  /* code */
printf("Ingrese la opcion necesaria:\n1.Calculo de ahorros anuales\n2.Aumento de sueldo de trabajador, considerando sueldo\n3.Calculadora basica\n");
scanf("%d", &opc);

switch (opc) {
  case 1:

    printf("Ingrese el sueldo semanal\n");
    scanf("%Lf", &sueldo);
  //  printf("%Lf", sueldo);

    sueldo = calculoSueldo(sueldo);
    printf("Ahorros anuales: %Lf \n", sueldo);
    break;

    case 2:
    printf("Ingrese el sueldo del trabajador\n");
    scanf("%Lf", &sueldo);

    sueldo = validarSueldo(sueldo);
    printf("Sueldo correspondiente: %Lf \n", sueldo);

    break;

    case 3:

    printf("Ingrese el primer numero:\n");
    scanf("%Lf", &n1);

    printf("Ingrese el segundo numero:\n");
    scanf("%Lf", &n2);


    if (! (n1 == 0 || n2 == 0))
    {

    resultado = operacionesBasicas(n1, n2);
    printf("Resultado: %Lf\n", resultado);

    }else
    {
      printf("No puedes introducir 0, cerrando programa...\n");
    }

    break;

    default:
    printf("Opcion incorrecta, cerrando programa...\n");
    break;
}
  return 0;
}

 double calculoSueldo(double sueldoSemanal){
  //Considerando que cada mes tiene 4 semanas, el año tendrá 48 semanas
  return (sueldoSemanal * 0.15) * 48;
}

double validarSueldo(double sueldo){
  if(sueldo < 1000 ){
    return sueldo * 1.17;
  }else{
    return sueldo * 1.12;
  }
}

double operacionesBasicas(double n1, double n2){
  printf("1.Suma\n2.Resta\n3.Multiplicacion\n4.Division\n");
  scanf("%d", &opc);

  switch (opc) {
    case 1:
    return n1 + n2;
    break;

    case 2:
    return n1 - n2;
    break;

    case 3:
    return n1 * n2;
    break;

    case 4:
    return n1 / n2;
    break;

    default:
    printf("Opcion incorrecta, cerrando programa...\n");
    break;
  }
}
