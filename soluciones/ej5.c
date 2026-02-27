#include <stdio.h>
int main() {
    int base=1000 ;  
    int direccion_a10=1010;
    int tamaño= ( direccion_a10-base )/10;

    printf("Un estudiante afirma:\n");
    printf("Si a[0]=1000 entonces a [10] = 1010. \n\n");

    printf("Demostracion formal:\n");
    printf("Direccion a[10]=Base+(10 * Tamaño)\n");
    printf("1010=1000 +(10 * Tamaño)\n");
    printf("10 = 10*Tamaño\n");
    printf("Tamaño =%dbyte\n\n", tamaño);

    if ( tamaño==1 )
        printf("Finalmente, la afirmaciòn es correcta si el tamaño del tipo es de 1 byte.\n");
    else
        printf("finalmente la afirmacion no es correcta para este tamaño.\n");

    return 0;
}
