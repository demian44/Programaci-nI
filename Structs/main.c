#include <stdio.h>
#include <stdlib.h>
#include "entidades.h"
#define MAX 2


int main()
{
        EPersona persona;
        printf("\n Tamanio persona: %d",sizeof(persona));
        printf("\n Tamanio nombre, apellido y fecha: %d",(sizeof(char))*30+(sizeof(char)*30)+(sizeof(int)*3));
        printf("\n int: %d",sizeof(int));
        printf("\n char: %d",sizeof(char));
        printf("\n long: %d",sizeof(long));
////    struct EFecha fecha;
////    printf("Ingrese nombre: ");
////    gets(persona.nombre);
////
////    printf("Ingrese apellido: ");
////    gets(persona.apellido);
////
////    printf("Ingrese dia de nacimiento: ");
////    scanf("%d",&fecha.dia);
////
////    printf("Ingrese mes de nacimiento: ");
////    scanf("%d",&fecha.mes);
////
////    printf("Ingrese a¤o de nacimiento: ");
////    scanf("%d",&fecha.anio);
////
////    system("cls");
////    ///system("clear");
////    persona.fechaNac=fecha; ///Se le asigna la fecha de nacimiento.
////
////    printf("------ Datos personales ------\n\n");
////    printf(" - Nombre: %s\n - Apellido: %s\n - Fecha de nacimiento: %d/%d/%d \n\n", persona.nombre,
////           persona.apellido, persona.fechaNac.dia, persona.fechaNac.mes, persona.fechaNac.anio );
////
////    printf("Presione una tecla para continuar...");
////    getchar();
    //system("cls");

    int i=0;
  //  EPersona listaPersonas[MAX];
    for( ; i<MAX; i++)
    {
//        printf("Ingrese nombre: ");
//        gets(listaPersonas[i].nombre);
//        fflush(stdin);
//        printf("Ingrese apellido: ");
//        gets(listaPersonas[i].apellido);
//        fflush(stdin);
//        printf("Ingrese dia de nacimiento: ");
//        scanf("%d",&listaPersonas[i].fechaNac.dia);
//        fflush(stdin);
//        printf("Ingrese mes de nacimiento: ");
//        scanf("%d",&listaPersonas[i].fechaNac.mes);
//        fflush(stdin);
//        printf("Ingrese a¤o de nacimiento: ");
//        scanf("%d",&listaPersonas[i].fechaNac.anio);
//        fflush(stdin);
    }

    //system("cls");
    printf("------ Datos personales ------\n\n");
    for(i=0 ; i<MAX; i++)
    {
//        printf("%d empleado\n - Nombre: %s\n - Apellido: %s\n - Fecha de nacimiento: %d/%d/%d \n\n",i+1, listaPersonas[i].nombre,
//        listaPersonas[i].apellido, listaPersonas[i].fechaNac.dia, listaPersonas[i].fechaNac.mes,
//        listaPersonas[i].fechaNac.anio );
    }

//    int pepe = 25;
//    void* puntero = &pepe;
//    void** puntero2 = &puntero;
//
//    printf(" -- A ver que pasa variable con &: %x y el puntero es : %x\n\n",(int)&pepe,(int)puntero);
//    printf("\n -- contenido puntero: %x y contenido puntero2 es: %x(apunta al puntero)\n\n",(int)puntero,(int)puntero2);
//    printf("\n -- contenido puntero a puntero: %x\n\n (apunta al contenido del puntero)",(int)*puntero2);
//    printf("\n -- *puntero: %d, **puntero puntero: %d)",(int)*(int*)puntero,(int)**(int**)puntero2);


    return 0;
}

