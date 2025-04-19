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
/*int main(){
    char letra[25];

    printf("Inserte su nombre: \n");
    scanf("%s", letra);
    getchar();

    printf("Tu nombre es: %s\n", letra);

    return 0;
} */

// Ejercicio 6
// Programa 1
// int main(){
//     int m; float a;
//     // m=62;
//     printf("Inserte un número para calcular la edad\n");
//     scanf("%d", &m);
//     //Divido por la cant de meses en un año
//     a= m/12.0;
//     if (a > 0 && a < 18 ) {
//         printf("Tiene %f años\n", a);
//     }
//     printf("El valor de m es %d\n", m);
//     printf("El valor de a es %f\n", a);
// }

// Programa 2
// int main(){
//     int p; int n;
//     // p= 0; n = 1;
//     p= 0;
//     // while (n < 6) {
//     //     p=n%2;
//     //     printf("El resultado del número %d %d\n", n, p);
//     //     n = n+1;
//     //     printf("El valor de p es %d\n", p);
//     //     printf("El valor de n es %d\n", n);
//     //     printf("--------\n");
//     // }
//     for (n = 1; n < 6; n++){
//                 p=n%2;
//         printf("El resultado del número %d %d\n", n, p);
//         printf("El valor de p es %d\n", p);
//         printf("El valor de n es %d\n", n);
//         printf("--------\n");
//     }
// }

// Ejercicio 7
//
int main(){
    char letra; //declarar las variables necesarias
    int nac;
    int year = 2025;
    char sl;

    printf("Ingrese la inicial del nombre de un estudiante ");
    scanf ("%c", &letra);
    getchar();
    // Controlar que sea letra mayúscula
    if (letra < 65 || letra > 90){
        printf("Error: La letra ingresada no es mayúscula (A-Z).\n");
        return 1;
    }
    // Ingresar el año de nacimiento del estudiante.
    printf("Ingrese el año de nacimiento ");
    scanf("%d", &nac);
    getchar();
    // Controlar que la edad en el corriente año, no sea mayor a 75.
    if (year - nac > 75){
        printf("Edad mayor a 75");
        return 1;
    }
    // Preguntar si dicho estudiante nació en San Luis.
    printf("¿El estudiante es de San Luis? (S/N): ");
    scanf("%c", &sl);
    getchar();
    // Controlar la respuesta anterior.
    if (sl != 83 && sl != 115 && sl != 78 && sl != 110) {
        printf("Error: Respuesta inválida. Debe ingresar 'S' o 'N'.\n");
        return 1;
    }
    // Mostrar con carteles adecuados, todos los datos solicitados. Y la edad del estudiante.
    printf("\n--- Datos ---\n");
    printf("Inicial del nombre: %c\n", letra);
    printf("Año: %d \n", nac);
    printf("¿Es de San Luis?: %s\n", (sl == 83 || sl == 115) ? "Sí" : "No");

    return 0;
}
