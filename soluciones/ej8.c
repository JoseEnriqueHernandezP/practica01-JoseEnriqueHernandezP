#include <stdio.h>

int main() {

    int base =2000;
    int size =4;          
    int direccion =2024;  
    int columnas= ((direccion - base) / size) - 2; 
    int filas = 2;                           
    int totalElementos =filas*columnas;
    int tamañoTotal=totalElementos*size;

    printf("Datos:\nBase = %d\nsizeof(int) =%d\nm[1][2] =%d\n\n",
           base, size, direccion);

    printf("Numero de columnas = %d\n", columnas);
    printf("El tamaño total de la matriz = %d bytes\n", tamañoTotal);

    return 0;
}
