#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void EscrituraNumero(int *numero){
    printf("Introduce numero o 0 para salir\n");
    scanf("%d",numero);
}

void Divisores(int num, int *divisor1, int *divisor2, int *divisor3,bool *LoEs){
    //Inicializamos los divisores a 1,
    *divisor1=1;
    *divisor2=1;
    *divisor3=num;
    *LoEs=false;

    //Buscamos divisores comenzando desde 2
    for(int d1=2;d1<=num/2;d1++){// empezamos buscando el divisor d1, empezamos por 2 y vamos hasta la mitad del numero
        if(num%d1==0){//comprobamos que al dividir num con d1 el resido es 0
            for(int d2=d1;d2<=num/d1;d2++){//si encontramos un numero se iguala d2 con d1 y va hasta num /d1, nos aseguramos que d2 sea mayo o igual d1 y que el producto de d1 y d2 no sea mayor a nm
                int d3=num/(d1*d2);//calculamos d3 haciendo la formula que hay
                if(d3!=1){//Nos aseguramos a d3 sea diferente a 1
                    if (d1*d2*d3==num){
                        *divisor1=d1;
                        *divisor2=d2;
                        *divisor3=d3;
                        *LoEs=true;
                        return;
                    }
                }
            }
        }
    }
}

void Escritura(bool LoEs, int num, int divisor1, int divisor2, int divisor3, const char *mensaje, const char *mensaje1, const char *mensaje2, const char * mensaje3){
    if (LoEs){
        printf("%s %d\n%s %d\n%s %d\n%s %d\n",mensaje,num,mensaje1,divisor1,mensaje2,divisor2,mensaje3,divisor3);
    }else{
        printf("No se encontraron divisores para el numero: %d\n",num);

    }
}
int main()
{
    int num,divisor1,divisor2,divisor3;
    bool LoEs;
    EscrituraNumero(&num);
    while(num!=0){
        Divisores(num,&divisor1,&divisor2,&divisor3,&LoEs);
        Escritura(LoEs,num,divisor1,divisor2,divisor3,"numero: ","Divisor 1:","Divisor 2:","Divisor 3:");
        EscrituraNumero(&num);
    }
}
