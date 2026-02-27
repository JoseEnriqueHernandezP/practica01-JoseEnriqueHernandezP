#include <stdio.h>

int main() {
    int a [5] ;
    printf("Direcciones fuera de rango:\n") ;
    printf(" &a[-1]=%p\n", (void*)&a[-1]) ;
    printf(" &a[5] =%p\n\n", (void*)&a[5]) ;

    int base = 2000;
    int sizeofInt= 4;
    int direccion= 2024;

    int columnas = ((direccion - base) / sizeofInt) - 2;
    int filas = 2;
    int totalElementos = filas* columnas;
    int tamañoTotal = totalElementos *sizeofInt;

    printf("Calculo de la matriz:\n");
    printf("Las columnas son = %d\n", columnas);
    printf("Tamaño total = %d bytes\n", tamanoTotal);

    return 0;
}
