#include <stdio.h>

int main() {
    char letra;
    int edad;
    char sl;

    // Ingresar inicial del nombre
    printf("Ingrese la inicial del nombre de un estudiante: ");
    scanf("%c", &letra);
    getchar();

    // Verificar que sea letra mayúscula usando ASCII (A = 65, Z = 90)
    if (letra < 65 || letra > 90) {
        printf("Error: La letra ingresada no es mayúscula (A-Z).\n");
        return 1;
    }

    // Ingresar edad
    printf("Ingrese la edad del estudiante: ");
    scanf("%d", &edad);
    getchar();

    // Verificar que edad no sea mayor a 75
    if (edad > 75) {
        printf("Error: La edad ingresada es mayor a 75.\n");
        return 1;
    }

    // Preguntar si es de San Luis
    printf("¿El estudiante es de San Luis? (S/N): ");
    scanf("%c", &sl);
    getchar();

    // Validar respuesta usando códigos ASCII
    if (sl != 83 && sl != 115 && sl != 78 && sl != 110) {
        printf("Error: Respuesta inválida. Debe ingresar 'S' o 'N'.\n");
        return 1;
    }

    // Mostrar los datos ingresados
    printf("\n--- Datos del estudiante ---\n");
    printf("Inicial del nombre: %c\n", letra);
    printf("Edad: %d años\n", edad);
    printf("¿Es de San Luis?: %s\n", (sl == 83 || sl == 115) ? "Sí" : "No");

    return 0;
}
