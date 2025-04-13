#include <stdio.h>

// Ejercicio 1
/*int main( ) {*/
/*    const int C = 4;*/
/*    char vrC = 'p';*/
/*    float vrF;*/
/*    int vrE =15;*/
/**/
/*    vrF = vrE/C;*/
/*    vrE= vrE%C;*/
/**/
/*    printf("Los valores finales son: \\n");*/
/*    printf("%d \-\-- %f \\n", vrE, vrF);*/
/*    printf("El caracter es %c y su valor en la tabla ASCII es %d", vrC, vrC);*/
/**/
/*    return (0);*/
/*}*/

// Ejercicio 2
/*int main ( ) {*/
/*    const char C = 'q';*/
/*    int Ci;*/
/*    char varc=113;*/
/**/
/*    Ci = varc-32;*/
/**/
/*    printf("El caracter es %c y su valor en la tabla ASCII es %d \n", varc, varc );*/
/*    printf("%c ----- %c \n", varc, varc-32 );*/
/*    scanf("%d", &Ci);*/
/*    getchar();*/
/*    printf("Valor final: %d",Ci);*/
/**/
/*    return (0);*/
/*}*/

//Ejercicio 4
/*int main() {*/
/*    char x= 66; char y= 73; char j= x+3; char n;*/
/**/
/*    printf ("Original: %c %c %c %c \n Modificada: %c %c %c %c \n ", x, y, j,*/
/*            j+9, x+32, y+32, j+32, j+9+32 );*/
/**/
/*    n= getchar();*/
/**/
/*    printf("el caracter es %c", n);*/
/*}*/

// Ejercicio 5
int main(){
    char letra[25];

    printf("Inserte su nombre: \n");
    scanf("%s", letra);
    getchar();

    printf("Tu nombre es: %s\n", letra);

    return 0;
}
