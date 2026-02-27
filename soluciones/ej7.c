#include <stdio.h>
int main(){
    int base =0;
    int columnas = 4;
    int size = 4;  
    int dir_m03 =base +((0*columnas) +3) * size;
    int dir_m10 =base +((1*columnas) +0) * size ;

    printf("Formula:\n");
    printf("Dir(m[i][j])=Base+((i * columnas) + j) * sizeof(tipo)\n\n");
    printf("m[0][3]= %d\n", dir_m03) ;
    printf("m[1][0]= %d\n\n", dir_m10);
    if(dir_m10 > dir_m03)
        printf("&m[1][0] es mayor.\n") ;
    else
        printf("&m[0][3] es mayor.\n") ; 
    return 0;
}
