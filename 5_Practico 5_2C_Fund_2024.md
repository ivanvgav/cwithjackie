**Práctico Nº 5**

> ***Tema: Lenguaje C: Introducción y Entrada-Salida***

**[Temas]{.underline}:** *sintaxis, variables y constantes, entrada y
salida de datos, tabla ASCII.* ([Material de estudio:
Lenguaje](https://www.evirtual.unsl.edu.ar/moodle/mod/resource/view.php?id=48091)
C: Temas 1,2,3,4,5. Tema 10.2 (Entrada Salida Formateada) - Pág. 50)

1)  Dadas el siguiente programa codificado en el Lenguaje C: (Material
    de estudio Leng C: Pág. 1-15)

+-----------------------------------------------------------------------+
| > [#include\<stdio.h\>]{.mark}                                        |
|                                                                       |
| int main ( ) {                                                        |
|                                                                       |
| const int C = 4;                                                      |
|                                                                       |
| char vrC = 'p';                                                       |
|                                                                       |
| float vrF;                                                            |
|                                                                       |
| int vrE =15;                                                          |
|                                                                       |
| vrF = vrE/C;                                                          |
|                                                                       |
| vrE= vrE%C;                                                           |
|                                                                       |
| printf("Los valores finales son: \\n");                               |
|                                                                       |
| printf("%d \-\-- %f \\n", vrE, vrF);                                  |
|                                                                       |
| printf("El caracter es %c y su valor en la tabla ASCII es %d", vrC,   |
| vrC);                                                                 |
|                                                                       |
| return (0);                                                           |
|                                                                       |
| }                                                                     |
+=======================================================================+
+-----------------------------------------------------------------------+

> **Se pide:**

a.  ¿Qué tipo de objeto es C? ¿Cuál es la diferencia con variables?

  *C es un objeto constante. La diferencia es que su valor no puede ser modificado*

b.  ¿De qué tipo son las variables vrE, vrC y vrF?
  
  *`vrE` es un número real, `vrC` es un carácter, `vrF` es un float*

c.  ¿De qué tipo son los resultados de las dos operaciones realizadas?

  *Van a ser de números, integers uno float*

d.  Determinar los valores finales de vrE y vrF.

  *`vrE` es 3 y `vrF` es 3.00

e.  En una de las variables vrE o en vrF, hubo pérdida de información.
    ¿A cuál de las variables se hace referencia y cómo lo solucionaría?

  *La perdida se da en `vrF` pero no sé cómo solucionarlo

f.  Completar la tabla y realizar la ejecución.

  -----------------------------------------------------------------------------
  **Sentencias**   **C**   **vrC**    **vrE**   **vrF**   **Pantalla**
  ---------------- ------- ---------- --------- --------- ---------------------
  const int C = 4; 4                                      

  \...                                                    
  -----------------------------------------------------------------------------

2)  Dadas el siguiente programa codificado en el Lenguaje C:

+-----------------------------------------------------------------------+
| [#include\<stdio.h\>]{.mark}                                          |
|                                                                       |
| int main ( ) {                                                        |
|                                                                       |
| const char C = 'q';                                                   |
|                                                                       |
| int Ci;                                                               |
|                                                                       |
| char varc=113;                                                        |
|                                                                       |
| Ci = varc-32;                                                         |
|                                                                       |
| printf("El caracter es %c y su valor en la tabla ASCII es %d", varc,  |
| varc );                                                               |
|                                                                       |
| printf("%c \-\-\-\-- %c", varc, varc-32 );                            |
|                                                                       |
| scanf("%d", &Ci);                                                     |
|                                                                       |
| getchar();                                                            |
|                                                                       |
| printf("Valor final: %d",Ci);                                         |
|                                                                       |
| return (0);                                                           |
|                                                                       |
| }                                                                     |
+=======================================================================+
+-----------------------------------------------------------------------+

> **Se pide:**

a.  Indicar de qué tipo son las variables Ci y varc.

  *`Ci` es un integer y `varc` es caracter*

b.  ¿Cuál es la diferencia entre C y varc? ¿Tienen igual o diferente
    valor?

  *El tipo es distinto pero tienen el mismo valor*

c.  ¿Qué se muestra en la pantalla luego de ejecutar todos los printf?

  El caracter es q y su valor en la tabla ASCII es 113 
  q ----- Q 
  Valor final: 81

d.  Realizar la tabla de ejecución con el valor {120}.(tener en cuenta
    la tabla del **ejercicio 1 f**).

3)  Dadas las siguientes sentencias y el valor asignado a cada una de
    las variables: []{.mark}

+-----------------------------------------------------------------------+
| > char x= 66; char y= 73; char j= x+3; char n;                        |
| >                                                                     |
| > printf ("Original: %c %c %c %c \n Modificada: %c %c %c %c \n ", |
| > x, y, j, j+9, x+32, y+32, j+32, j+9+32 );                           |
| >                                                                     |
| > n= getchar();                                                       |
| >                                                                     |
| > printf("el caracter es %c", n);                                     |
+=======================================================================+
+-----------------------------------------------------------------------+

a)  ¿Qué se muestra en la pantalla luego de ejecutar los printf? Suponga
    una ejecución con el caracter { **'**2**'** }

  Original: B I E N 
  Modificada: b i e n 
  2
  el caracter es 2

4)  Para los siguientes programas, se pide:

> (Material de estudio Leng C: Tema 5 Pág. 49(if) - Pag 17 (while) )

a)  Para el programa 1, determinar de qué tipo es el resultado de la
    división, ¿se ejecuta el printf?

  *Si, se ejecuta*

b)  Para el programa 2, determinar cuántas veces se ejecuta el printf.
  
  *5 veces*

c)  Realizar las tablas de ejecución de cada uno.
  
d)  Analizar cuál es el objetivo de cada programa. Indicar si haría
    mejoras a los programas de acuerdo con sus objetivos.

  
+---------------------------------+------------------------------------+
| > **Programa 1**                | **Programa 2**                     |
+=================================+====================================+
| > int m; float a;               | int p; int n;                      |
| >                               |                                    |
| > m=62;                         | p= 0; n = 1;                       |
| >                               |                                    |
| > //Divido por la cant de meses | while (n <6) {                    |
| > en un año                     |                                    |
| >                               | p=n%2;                             |
| > a= m/12.0;                    |                                    |
| >                               | printf("El resultado del número %d |
| > if (a > 0 && a < 18 ) {     | es %d", n, p);                     |
| >                               |                                    |
| > printf("Tiene %f años", a);   | n = n+1;                           |
| >                               |                                    |
| > }                             | }                                  |
+---------------------------------+------------------------------------+

5)  Corregir y completar el siguiente programa de manera tal que le
    solicite al usuario la inicial de su nombre y lo muestre por
    pantalla.

+-----------------------------------------------------------------------+
| > #include \<stdio.h\>                                                |
| >                                                                     |
| > int main()                                                          |
| >                                                                     |
| > char Letra;                                                         |
| >                                                                     |
| > printf(\"Hola Mundo! \\n\";                                         |
| >                                                                     |
| > scanf("%c", letra);                                                 |
| >                                                                     |
| > getchar();                                                          |
| >                                                                     |
| > printf ("Este es mi primer programa en Lenguaje %d", letra);        |
| >                                                                     |
| > return 0;                                                           |
| >                                                                     |
| > }                                                                   |
+=======================================================================+
+-----------------------------------------------------------------------+

6)  Para cada uno de los programas del ejercicio 4 se pide:

```{=html}
<!-- -->
```
a)  Codificarlos en lenguaje C, mostrando por pantalla el contenido de
    todas las variables.

b)  Modificar el código del ej 4 Programa 1 para que el usuario ingrese
    los valores a las variables.

c)  Modificar el código del ej 4 Programa 2, implementar el mismo código
    con la sentencia for.

d)  Realizar el DF de cada uno de los programas escritos en lenguaje C
    en el punto b) y en el punto c).

7)  Completar el siguiente programa:

+-----------------------------------------------------------------------+
| > #include \<stdio.h\>                                                |
| >                                                                     |
| > int main(){                                                         |
| >                                                                     |
| > char letra; //declarar las variables necesarias                     |
| >                                                                     |
| > printf(\"Ingrese la inicial del nombre de un estudiante \");        |
| >                                                                     |
| > scanf ("%c", &letra);                                               |
| >                                                                     |
| > getchar();                                                          |
| >                                                                     |
| > // Controlar que sea letra mayúscula.                               |
| >                                                                     |
| > // Ingresar el año de nacimiento del estudiante.                    |
| >                                                                     |
| > // Controlar que la edad en el corriente año, no sea mayor a 75.    |
| >                                                                     |
| > // Preguntar si dicho estudiante nació en San Luis.                 |
| >                                                                     |
| > // Controlar la respuesta anterior.                                 |
| >                                                                     |
| > // Mostrar con carteles adecuados, todos los datos solicitados. Y   |
| > la edad del estudiante.                                             |
| >                                                                     |
| > return 0;                                                           |
|                                                                       |
| }                                                                     |
+=======================================================================+
+-----------------------------------------------------------------------+

a)  Codificar en lenguaje C las sentencias de los comentarios.

b)  Realizar la tabla de ejecución con valores adecuados.

8)  Para los items f) y h) del Ejercicio 8 del Práctico 4 se pide:

a)  Codificarlos en lenguaje C.

b)  Realizar la tabla de ejecución del ejercicio f) teniendo en cuenta
    que el grupo es de 5 personas.

c)  Realizar la tabla de ejecución del ejercicio h) teniendo en cuenta
    que son 4 números.

9)  Realizar un programa que dado un número ingresado por el usuario,
    determine e informe:

-   si está incluido en el rango establecido en el Ejercicio 11 del
    Práctico 2.

-   si es válido para la expresión del Ejercicio 12 del Práctico 2.

a)  Realizar el DF del programa resultante.
