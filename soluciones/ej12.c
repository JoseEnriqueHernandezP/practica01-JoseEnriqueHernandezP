#include <stdio.h>
int main() {
    int base = 4000 ;
    int columnas = 5;
    int size = 4; 

    int dir_m24 =base +((2 * columnas +4)* size);
    int dir_m13 =base +((1 * columnas +3)* size) ;
    int diferencia= dir_m24-dir_m13;
    printf("Base = %d\n\n", base)  ;

    printf ("Direccion de la m[2][4] = %d\n", dir_m24);
    printf ("Direccion de la m[1][3] = %d\n", dir_m13)  ;
    printf ("Diferencia = %d bytes\n", diferencia);
    return 0;
}
