#include <stdio.h>
int main() {
    int base = 1000 ;
    int tamaño = 8 ;   
    printf(" Salida:\n") ;
    for(int i = 0; i < 3; i++) {
        int direccion = base + (i * tamaño);
        printf("&a[%d] = %d\n", i, direccion);
    }
    return 0;
}
