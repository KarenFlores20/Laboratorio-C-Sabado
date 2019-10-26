#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*autor:Karen Aracely Flores Martinez
 *fecha: 24/08/19
 *grupo:006
 *horario:Viernes 7:00-9:00am
 *Matrícula:1866124
 actividad 12
*/

int primo(int i,int n1,int n2, int n3, int num){/*Hacemos la funcion*/
	
	for(i=1;i<=n1;i++){/*Utilizamos un for para que el programa pueda hacer si es primo o no*/
			n2=num%i;
			if(n2==0){/*Tambien usamos un if*/
				n3++;
			}
		}
		if(n3!=2){
	      printf("El numero es primo");/*Imprimimos el resultado*/
		}else if(n3==2){
	    	printf("El numero no es primo");
		}
	}
int potencia(int num, int num2){/*Hacemos la funcion*/
	return pow(num,num2);/*Hacemos la operacion*/
}
int main() {
/**************************************Actividad 1**********************************************/
	int i,n1,n2,n3,num;
	printf("Ingrese un numero entero: ");
	scanf("%d",&num);
	if(num>0){
		primo(i,n1,n2,n3,num);
	}
/**************************************Actividad 2**********************************************/
    int numm,num2,accion;
    printf("\n\n");
    printf("Introduzca una cifra entera y positiva: ");/*Le pediremos al usuario que introduzca la cifra*/
    scanf("%d",&numm);/*Escaneamos el primer numero*/
    printf("Introduzca el numero a lo que ira elevado la cifra: ");/*Le pedimos al usuario que introduzca el otro*/
    scanf("%d",&num2);/*Escaneamos el segundo*/
    if(numm>0){/*Hacemos que valide numeros positivos */
    	accion=potencia(numm,num2);/*Agregamos la funcion*/
    	printf("%d",accion);/*E imprimimos el resultado*/
	}
	return 0;
}
