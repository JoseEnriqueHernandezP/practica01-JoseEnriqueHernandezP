#include <stdio.h>

int main() {

    int dir_a0= 5000;
    int dir_a3= 5012;

    int tamaño= (dir_a3-dir_a0)/3;
    int dir_a5= dir_a0+5*tamaño;

    printf("Salida:\n");
    printf("&a[0]= %d\n",dir_a0 ) ;
    printf("&a[3]= %d\n\n",dir_a3 );
    printf("Calcula:\n");
    printf("Tamaño del tipo: %d BYTES\n", tamaño );
    printf("Direccion de a[5]: %d\n", dir_a5 );

    printf( "\nFormula usada:\n" );
    printf( "Direccion a[i]=Direccion a[0] + i * sizeof(tipo)\n" );
    printf( "Aplicando: 5000+5*4=5020\n" );
    return 0 ;
}
