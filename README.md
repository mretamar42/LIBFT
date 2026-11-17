*Este proyecto ha sido creado como parte del currículo de 42 por mretamar*

---
# Libft
---
## Índice

- [Descripción](#descripción)
	- [Objetivos](#objetivos)
	- [Características](#características)
	- [Estructura del Proyecto](#estructura-del-proyecto)
- [Instrucciones](#instrucciones)
    - [Requisitos previos](#requisitos-previos)
    - [Compilación](#compilación)
    - [Uso de la librería](#uso-de-la-librería)
    - [Documentación de las funciones](#documentación-de-las-funciones)
    - [Funciones de comprobación de caracteres](#1-funciones-de-comprobación-de-caracteres)
    - [Funciones de manipulación de memoria](#2-funciones-de-manipulación-de-memoria)
    - [Funciones de manipulación de cadenas](#3-funciones-de-manipulación-de-cadenas)
    - [Funciones de conversión de datos](#4-funciones-de-conversión-de-datos)
    - [Funciones de asignación de memoria](#5-funciones-de-asignación-de-memoria)
    - [Funciones de salida](#6-funciones-de-salida)
    - [Funciones de listas enlazadas](#7-funciones-de-listas-enlazadas)
	- [Estructura de la lista enlazada](#estructura-de-la-lista-enlazada)
	- [Normas de implementación](#normas-de-implementación)
- [Recursos](#recursos)


---
## Descripción
---
Libft es el primer proyecto del currículo de 42. Su objetivo principal es desarrollar una biblioteca personal de funciones en el lenguaje C, recreando parte del comportamiento de funciones que se usan habitualmente y añadiendo herramientas para la manipulación de cadenas, la gestión de memoria y el manejo de listas enlazadas.

El proyecto permite analizar los conceptos fundamentales de la programación con el lenguaje C en este caso. Entre ellos el uso de punteros, la asignación dinámica de memoria, el tratamiento de cadenas que terminan en nulo y la gestión estructurada de diferentes tipos de datos.

La biblioteca resultante libft.a se compila como una biblioteca estática, agrupando funciones ya compiladas para que puedan ser reutilizarlas en otros programas sin volver a compilarlas. Así se evita copiar la implementación de cada función cuando se requiera.

Libft puede denominarse como una base o "navaja suiza" llena de herramientas reutilizables para futuros proyectos de 42, donde pueden aprovecharse las funciones desarrolladas para reducir la duplicación de código y facilitar el mantenimiento de éste.

La biblioteca incluye funciones para la manipulación de cadenas, como la extracción de subcadenas, la concatenación, la eliminación de caracteres en los extremos, la división de cadenas y la aplicación de transformaciones carácter por carácter. También incorpora funciones de gestión de memoria dinámica, como `ft_calloc`, y herramientas que reservan memoria para crear nuevas cadenas y arrays que se enumerarán posteriormente en este documento.

### Objetivos

Los principales objetivos del proyecto son:

- Entender el funcionamiento interno de funciones de la biblioteca estándar en C.
- Implementar versiones propias de estas funciones respetando su descripción y comportamientos esperados.
- Trabajar con diferentes tipos de datos, punteros, arrays, bloques de memoria y listas enlazadas.
- Administrar correctamente la memoria dinámica y evitar fugas de memoria.
- Comprender como diseñar y manipular listas enlazadas.
- Crear una biblioteca estática que sea reutilizable.
- Implementar buenas prácticas de programación, organización y compilación mediante Makefile.

### Características

La biblioteca se organiza en siete grupos de funciones:

| Categoría | Descripción | Funciones |
|---|---|---|
| Comprobación de caracteres | Identifican letras, dígitos y otros caracteres según criterios ASCII. | `ft_isalpha`, `ft_isascii`, `ft_isdigit` `ft_isalnum`, `ft_isprint` |
| Manipulación de memoria | Inicializan, copian, comparan y buscan datos en bloques de memoria. | `ft_bzero`, `ft_memset`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp` |
| Manipulación de cadenas | Permiten medir, copiar, concatenar, buscar y transformar cadenas. | `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_toupper`, `ft_tolower`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup`, `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_strmapi`, `ft_striteri` |
| Conversión de datos | Convierten cadenas en números y números en cadenas. | `ft_atoi`, `ft_itoa` |
| Asignación de memoria | Reservan memoria dinámica para almacenar datos. | `ft_calloc` |
| Salida de datos | Escriben caracteres, cadenas y números en un descriptor de archivo. | `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd` |
| Listas enlazadas | Crean, recorren, modifican y liberan listas enlazadas. | `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`, `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap` |


##### Estructura del proyecto 
```text

libft/
├── Makefile
├── libft.h
├── README.md
├── ft_bzero.c
├── ft_isalpha.c
├── ft_isascii.c
├── ft_isdigit.c
├── ft_isalnum.c
├── ft_isprint.c
├── ft_strlen.c
├── ft_memset.c
├── ft_memcpy.c
├── ft_memmove.c
├── ft_strlcpy.c
├── ft_strlcat.c
├── ft_toupper.c
├── ft_tolower.c
├── ft_strchr.c
├── ft_strrchr.c
├── ft_strncmp.c
├── ft_memchr.c
├── ft_memcmp.c
├── ft_strnstr.c
├── ft_atoi.c
├── ft_calloc.c
├── ft_strdup.c
├── ft_substr.c
├── ft_strjoin.c
├── ft_strtrim.c
├── ft_split.c
├── ft_itoa.c
├── ft_strmapi.c
├── ft_striteri.c
├── ft_putchar_fd.c
├── ft_putstr_fd.c
├── ft_putendl_fd.c
├── ft_putnbr_fd.c
├── ft_lstnew.c
├── ft_lstadd_front.c
├── ft_lstsize.c
├── ft_lstlast.c
├── ft_lstadd_back.c
├── ft_lstdelone.c
├── ft_lstclear.c
├── ft_lstiter.c
└── ft_lstmap.c
```
---
# Instrucciones
---

## Requisitos previos

Para compilar y utilizar la biblioteca se necesita:

- Un compilador de C compatible con las opciones de compilación utilizadas en el proyecto, como `cc` o `gcc`.
- `make`, para hacer posible la ejecución de las reglas definidas en el `Makefile`.
- La cabecera libft.h, que contiene las declaraciones de las funciones además de la definición de la estructura para la creación de las listas enlazadas con la definición de las funciones requeridas en el proyecto.
---

## Compilación

Clona el repositorio y accede a su directorio:

```bash
git clone URL_DEL_REPOSITORIO NOMBRE_DE_LA_CARPETA_DE_DESTINO (por ejemplo :libft)
```
Accedemos a la carpeta que hemos creado:
```bash
cd libft
```
Para compilar la biblioteca debes ejecutar:
```bash
make
```
Si la compilación ha terminado correctamente, se generará el archivo:

`libft.a`

--- 

### Tabla de comandos del Makefile

Las operaciones incluidas en el `Makefile` son:

| Comando | Descripción | 
| --- | --- | 
| `make` | Compila la biblioteca y genera `libft.a`. | 
| `make clean` | Elimina los archivos objeto generados durante la compilación. | 
| `make fclean` | Elimina los archivos objeto y la biblioteca generada. | 
| `make re` | Realiza una recompilación completa. |

---
## Uso de la librería

Para poder utilizar Libft debes incluir en la cabecera:
```c
#include "libft.h"
```

Por ejemplo, el siguiente programa utiliza algunas funciones de la biblioteca:

```c
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_size;
	size_t	src_size;

	i = 0;
	dst_size = ft_strlen(dst);
	src_size = ft_strlen(src);
	if (size <= dst_size)
		return (src_size + size);
	while (src[i] && (dst_size + i) < size - 1)
	{
		dst[dst_size + i] = src[i];
		i++;
	}
	dst[dst_size + i] = '\0';
	return (src_size + dst_size);
}
```

Si el archivo se llama ft_strlcat.c, puedes compilarlo desde el directorio del proyecto mediante:
```bash
cc -Wall -Wextra -Werror ft_strlcat.c libft.a -o ft_strlcat (nombre del programa)
```
Ejecuta el programa con:
```bash
./ft_strlcat (nombre del programa que hemos usado para la función de ft_strlcat)
```
**Importante**: 

Para que el programa se ejecute se debe descomentar la función main para luego compilar el programa como acabamos de realizar y ejecutarlo con ./nombre_del_programa.

Las funciones que reservan memoria dinámica pueden devolver `NULL` si la reserva de memoria falla.
El código que utiliza sus resultados debe comprobarlos y liberar la memoria cuando deje de necesitarla con la siguiente función:

```c
free(variable_con_memoria_asignada_dinámicamente).
```

## Pruebas y Tests Visuales

Para facilitar la corrección y comprobar el comportamiento de las funciones, he incluido un bloque(`main`) **comentado al final de cada archivo `.c`** además de otras funciones que sean necesarias para poder llevar a cabo las pruebas. 

Para ejecutar los tests de una función específica:
1. Descomenta el bloque del `main` en el archivo correspondiente.
2. Algunas funciones de prueba requieren mostrar resultados por consola (`printf`). Para que funcionen correctamente, deberás añadir la librería `stdio.h` en `libft.h`:
   ```c
   #include <stdio.h>
   ```
3. Compila el archivo como se explica en esta documetación

## Control de Memoria con Valgrind

Para asegurar que la librería es robusta y no tiene fugas de memoria (**memory leaks**) ni accesos inválidos, es muy recomendable ejecutar el comando **Valgrind**.

Para comprobar una función que realice asignaciones dinámicas (como `ft_split` o `ft_strjoin`):

1. Compila tu archivo de pruebas como se mencionó en la documentación previamente ([Compilación](#compilación))   
2. Ejecuta el binario a través de Valgrind con el siguiente comando:
   ```bash
   valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./programa
   ```

- ¿En qué fijarse en el reporte?
	- All heap blocks were freed -- no leaks are possible: El mensaje ideal. Significa que has liberado correctamente toda la memoria con `free`.
	- ERROR SUMMARY: 0 errors from 0 contexts: Indica que no hay accesos a memoria no inicializada ni desbordamientos (*buffer overflows*).

---

# Documentación de las funciones:

- Cada función tiene disponible un menú desplegable que contiene su finalidad, su función original de referencia si esta existe además de la descripción de sus parámetro su valor de retorno.

- Las funciones originales mencionadas son referencias de la biblioteca estándar de C o de interfaces `POSIX (Portable Operating System Interface)`como por ejemplo strdup y strnstr, esto se aplicará según corresponda . La implementación de Libft es propia y puede tener restricciones adicionales establecidas por el currículo de 42.

### 1.-Funciones de comprobación de caracteres

Estas funciones permiten determinar si un carácter pertenece a una categoría concreta de caracteres ASCII.
<details>
<summary><strong>ft_isalpha</strong> — Comprueba si un carácter es una letra</summary>

**Archivo:** `ft_isalpha.c`

**Función original:** `isalpha`

**Descripción:**

Comprueba si el valor recibido corresponde a una letra mayúscula o minúscula del alfabeto inglés.

**Prototipo:**

```c
int ft_isalpha(int c);
```

**Parámetros:**

| Parámetro | Descripción |
|---|---|
| `c` | Valor entero que representa el carácter que se desea comprobar. |

**Valor de retorno:**

- Devuelve `1` si es un una letra del alfabeto. Límites válidos: (A (ASCII 65) y Z (ASCII 90)) y a (ASCII 97) y z (ASCII 122). 
- `0` si no es una letra.

</details>

<details>
<summary><strong>ft_isdigit</strong> — Comprueba si un carácter es un dígito</summary>

**Archivo:** `ft_isdigit.c`

**Función original:** `isdigit`

**Descripción:**

Comprueba si el carácter recibido es un dígito decimal del `0` al `9`.

**Prototipo:**

```c
int ft_isdigit(int c);
```

**Parámetros:**

| Parámetro | Descripción |
|---|---|
| `c` | Valor entero que representa el carácter que se desea comprobar. |

**Valor de retorno:**

- Devuelve `1` si es un dígito decimal. Límites válidos: '0' (ASCII 48) y '9' (ASCII 57) 
- `0` si no es un dígito decimal. El número 0 (ASCII 0, carácter nulo \0), da como resultado 0.

</details>

<details>
<summary><strong>ft_isalnum</strong> — Comprueba si un carácter es alfanumérico</summary>

**Archivo:** `ft_isalnum.c`

**Función original:** `isalnum`

**Descripción:**

Comprueba si el carácter recibido es una letra o un dígito decimal.

**Prototipo:**

```c
int ft_isalnum(int c);
```

**Parámetros:**

| Parámetro | Descripción |
|---|---|
| `c` | Valor entero que representa el carácter que se desea comprobar. |

**Valor de retorno:**

- Devuelve `1` si es una letra o un dígito decimal. Equivalente a `ft_isalpha(c) || ft_isdigit(c)`
- `0` si no pertenece a ninguna de estas categorías.

</details>

<details>
<summary><strong>ft_isascii</strong> — Comprueba si un valor pertenece al rango ASCII</summary>

**Archivo:** `ft_isascii.c`

**Función original:** `isascii`

**Descripción:**

Comprueba si el valor recibido pertenece al rango numérico ASCII, de `0` a `127`.

**Prototipo:**

```c
int ft_isascii(int c);
```

**Parámetros:**

| Parámetro | Descripción |
|---|---|
| `c` | Valor entero que se desea comprobar. |

**Valor de retorno:**

- Devuelve `1` si `c` está entre `0` y `127`, ambos incluidos.
- `0` en caso contrario.

</details>

<details>
<summary><strong>ft_isprint</strong> — Comprueba si un carácter es imprimible</summary>

**Archivo:** `ft_isprint.c`

**Función original:** `isprint`

**Descripción:**

Comprueba si el carácter recibido es imprimible dentro del conjunto de caracteres ASCII, incluidos los espacios.

**Prototipo:**

```c
int ft_isprint(int c);
```

**Parámetros:**

| Parámetro | Descripción |
|---|---|
| `c` | Valor entero que representa el carácter que se desea comprobar. |

**Valor de retorno:**

- Devuelve `1` si es un carácter imprimible, entre el 32 y el 126, ambos incluidos.
- `0` si es un carácter de control o no pertenece al rango imprimible.

</details>

### 2.-Funciones de manipulación de memoria

<details>
<summary><strong>ft_bzero</strong> — Inicializa un bloque de memoria con ceros</summary>

**Archivo:** `ft_bzero.c`

**Función original:** `bzero`

**Descripción:**

Escribe el valor cero en los primeros `n` bytes del bloque de memoria indicado.

**Prototipo:**

```c
void ft_bzero(void *s, size_t n);
```

**Parámetros:**

| Parámetro | Descripción |
|---|---|
| `s` | Puntero al bloque de memoria que se desea inicializar. |
| `n` | Número de bytes que se establecerán a cero. |

**Valor de retorno:**

No devuelve ningún valor (`void`).

**Comentarios**

En el ejemplo del ejercicio realizado, rellena un puntero `char *` con '\0' desde 0 hasta n.

Al ser un puntero void el que recibe (void *s), en el ejemplo de este ejercicio se hace un cast a (char *) y se rellena de caracter nulo '\0'.

</details>

<details>
<summary><strong>ft_memset</strong> — Rellena un bloque de memoria con un valor</summary>

**Archivo:** `ft_memset.c`

**Función original:** `memset`

**Descripción:**

Establece los primeros `n` bytes de un bloque de memoria al valor indicado.

**Prototipo:**

```c
void *ft_memset(void *s, int c, size_t n);
```

**Parámetros:**

| Parámetro | Descripción |
|---|---|
| `s` | Puntero al bloque de memoria que se desea modificar. |
| `c` | Valor que se escribirá en cada byte, convertido a `unsigned char`. |
| `n` | Número de bytes que se modificarán. |

**Valor de retorno:**

Devuelve el puntero al área de memoria de `s`.

**Comentarios:**

En el ejemplo rellena un `unsigned char *` con el `char` c hasta el valor de `n`.

Realmente es igual que la función ft_bzero pero escribe en cada byte el valor (`int c` enviado por parámetro. El puntero `void *s` debe tratarse como (`unsigned char *`) ya que la función original asi lo contempla. La función original de memset no valida ni detecta si `n` excede el tamaño real del bloque de memoria por lo tanto no se tiene en cuenta en este caso. La responsabilidad recae en el programador.

**Casos límite:**

-Cuando la longitud es cero (len = 0). Devuelve puntero `*s` intacto. `(i < len)`
-La función original de C no está protegida contra punteros NULL, el programa debe fallar.

</details>

<details>
<summary><strong>ft_memcpy</strong> — Copia un bloque de memoria, no evita solapamientos</summary>

**Archivo:** `ft_memcpy.c`

**Función original:** `memcpy`

**Descripción:**

Copia `n` bytes desde un bloque de memoria de origen a un bloque de destino. Los bloques no deben solaparse.

**Prototipo:**

```c
void *ft_memcpy(void *dest, const void *src, size_t n);
```

**Parámetros:**

| Parámetro | Descripción |
|---|---|
| `dest` | Puntero al bloque de memoria de destino. |
| `src` | Puntero al bloque de memoria de origen. |
| `n` | Número de bytes que se copiarán. |

**Valor de retorno:**

Devuelve el puntero del bloque de destino `dest`.

**Comentarios:**

En el ejercicio realizado copia un puntero `const char *` de origen(`src`) a un puntero `char *` (`dest`) hasta el valor `n`.

Se debe hacer el cast de ambos punteros ya que originalmente son void, en el ejemplo se toma como `(char *)` tanto ` const src` como `const dst`.

En la propuesta de esta función he añadido el chequeo de ambos punteros recibidos para que sean válidos (`!src && !dst`) he cambiado la variable `int i` por `size_t i` ya que si la variable size excede los 32 bits del int (en sistemas de 64 bits) puede provocar un bucle infinito.

**Casos límite**

- Si AMBOS punteros son `NULL` y n > 0, devuelve NULL.
- Si SOLO UNO de los punteros es `NULL` y `n > 0`, debe dar como resultado Segmentation Fault.
- Si hay overlap de memoria simplemente se sobreescribe no se controla.

</details>

<details>
<summary><strong>ft_memmove</strong> — Copia un bloque de memoria evitando solapamientos</summary>

**Archivo:** `ft_memmove.c`

**Función original:** `memmove`

**Descripción:**

Copia `n` bytes de un bloque de memoria a otro, permitiendo que las regiones de origen y destino se solapen.

**Prototipo:**

```c
void *ft_memmove(void *dest, const void *src, size_t n);
```

**Parámetros:**

| Parámetro | Descripción |
|---|---|
| `dest` | Puntero al bloque de memoria de destino. |
| `src` | Puntero al bloque de memoria de origen. |
| `n` | Número de bytes que se copiarán. |

**Valor de retorno:**

Devuelve el puntero del bloque de destino `dest`.

**Comentarios:**

En el ejericio realizado copia un puntero void convertido en `const char *` (`src`) a un puntero void convertido en `char *` (`dest`) hasta el valor de `n`.

A diferencia de memcpy, memmove evita el solapamiento de memoria, en el ejemplo se consigue verificando que la dirección de memoria de `strd`(destino) sea mayor que la de `strs`(origen). Si es mayor la copia se ejecuta de delante hacia atrás, es decir desde `n` hasta 0, sin embargo si la dirección de destino `strd`(destino) es menor que `strs`(origen) se copia atrás hacia delante, es decir, desde 0 hasta `n`.

**Casos límite**

- Si AMBOS punteros son `NULL` y `n > 0`. Comportamiento indefinido.
- Si AMBOS punteros son `NULL` o `n == 0`. Comportamiento indefinido. 

</details>

<details>
<summary><strong>ft_memchr</strong> — Busca un byte en un bloque de memoria enviado por parámetro</summary>

**Archivo:** `ft_memchr.c`

**Función original:** `memchr`

**Descripción:**

Busca la primera aparición del byte indicado dentro de los primeros `n` bytes de un bloque de memoria y devuelve el puntero si lo encuentra.

**Prototipo:**

```c
void *ft_memchr(const void *s, int c, size_t n);
```

**Parámetros:**

| Parámetro | Descripción |
|---|---|
| `s` | Puntero al bloque de memoria donde se realizará la búsqueda. |
| `c` | Valor del byte que se desea encontrar. |
| `n` | Número máximo de bytes que se examinarán. |

**Valor de retorno:**

- Un puntero a la primera aparición del byte encontrado.
- `NULL` si no aparece dentro de los primeros `n` bytes.

**Casos límite**

- Tanto el puntero de búsqueda (`s`) como el entero `c` que recibe deben ser tratados internamente como `unsigned char *` y `char c` y . Para comparar al igual que en `ft_strcmp` debemos hacerlo sin signo y `char` sirve para evitar valores como -1 que no entran en un `char`.
- Si n es 0, la función no debe leer ni un solo byte de la memoria y debe retornar inmediatamente `NULL`.
- No debe detenerse en el `\0` ya que trabajamos con bloques de memoria no con cadenas.

</details>

<details>
<summary><strong>ft_memcmp</strong> — Compara dos bloques de memoria</summary>

**Archivo:** `ft_memcmp.c`

**Función original:** `memcmp`

**Descripción:**

Compara los primeros `n` bytes de dos bloques de memoria, interpretándolos como valores de tipo `unsigned char`.

**Prototipo:**

```c
int ft_memcmp(const void *s1, const void *s2, size_t n);
```

**Parámetros:**

| Parámetro | Descripción |
|---|---|
| `s1` | Puntero al primer bloque de memoria. |
| `s2` | Puntero al segundo bloque de memoria. |
| `n` | Número máximo de bytes que se compararán. |

**Valor de retorno:**

- `0` si los primeros `n` bytes son iguales.
- Un valor negativo si el primer byte hasta `n` diferente de `s1` es menor que el de `s2`.
- Un valor positivo si el primer byte hasta `n` diferente de `s1` es mayor que el de `s2`.

**Comentarios:**

Para garantizar que retorna el mismo valor en todas las máquinas esta función contempla por defecto los que punteros que recibe serán asignados posteriormente como `unsigned char *` tanto `s1` como `s2` respectivamente.

**Casos Límite**
- Tanto el puntero de búsqueda como el entero c que recibe deben ser tratados internamente como unsigned char. Para comparar al igual que en `ft_strcmp` sin signo y el `char` para evitar valores como -1 que no entran en un `char`.
- Si n es `0`, la función no debe leer ni un solo byte de la memoria y debe retornar inmediatamente NULL.
- No detenerse en el `\0` ya que trabajamos con bloques de memoria no con cadenas

</details>

### 3.-Funciones de manipulación de cadenas

<details>
<summary><strong>ft_strlen</strong> — Calcula la longitud de una cadena</summary>

**Archivo:** `ft_strlen.c`

**Función original:** `strlen`

**Descripción:**

Cuenta los caracteres de una cadena hasta encontrar el terminador nulo `'\0'`, sin incluirlo.

**Prototipo:**

```c
size_t ft_strlen(const char *s);
```

**Parámetros:**

| Parámetro | Descripción |
|---|---|
| `s` | Cadena terminada en nulo cuya longitud se desea calcular. |

**Valor de retorno:**

Devuelve el número de caracteres anteriores al carácter nulo.

</details>

<details>
<summary><strong>ft_strlcpy</strong> — Copia una cadena con límite de tamaño</summary>

**Archivo:** `ft_strlcpy.c`

**Función original:** `strlcpy`

**Descripción:**

Copia una cadena de origen (src) en el destino(dest), limitando la cantidad de caracteres copiados para reservar espacio al terminador nulo cuando el tamaño es mayor que cero.

**Prototipo:**

```c
size_t ft_strlcpy(char *dst, const char *src, size_t size);
```

**Parámetros:**

| Parámetro | Descripción |
|---|---|
| `dst` | Búfer de destino donde se copiará la cadena. |
| `src` | Cadena de origen. |
| `size` | Tamaño total del búfer de destino, incluido el espacio para `'\0'`. |

**Valor de retorno:**

Devuelve la longitud total de `src`. Si el valor devuelto es mayor o igual que `dst_size`, significa que `src` es más grande que `dst` por lo tanto la cadena no se ha copiado de manera completa ya que también debe añadirse el carácter nulo.

**Comentarios:**

En el ejercicio de ejemplo si size es mayor que 0, copia un puntero `const char` (src) en un puntero `char *`(dest) hasta `size` - 1 pero solo devuelve la longitud total del `src`. Se realiza un segundo recorrido de `src` con el bucle `while` debido a que si se devuelve el valor de `i` del bucle previo puede diferir con el tamaño del `src` ya que depende del valor `size` y la cadena copiada puede ser menor al tamaño real de `src`. 

**Casos límite***

	- Si `size` es igual a 0 (size == 0), debe devolver el tamaño de src, nada más.
	- Si src está vacía, debe poner `dst[0] = '\0'`y retornar 0
	- Si dst, src y size es igual a 1 debe poner `dst[0] = '\0'`y retornar 0. 
	- Si los punteros son null debería de fallar.

</details>

<details>
<summary><strong>ft_strlcat</strong> — Concatena cadenas con límite de tamaño</summary>

**Archivo:** `ft_strlcat.c`

**Función original:** `strlcat`

**Descripción:**

Añade la cadena de origen al final de la cadena de destino, respetando el tamaño total indicado y terminando en nulo cuando corresponde.

**Prototipo:**

```c
size_t ft_strlcat(char *dst, const char *src, size_t size);
```

**Parámetros:**

| Parámetro | Descripción |
|---|---|
| `dst` | Cadena de destino a la que se añadirá el contenido. |
| `src` | Cadena que se desea concatenar. |
| `size` | Tamaño total disponible en el destino, incluido el terminador nulo. |

**Valor de retorno:**

Devuelve la longitud que habría tenido la cadena concatenada si se hubiera podido completar. Si el parámetro `size` es menor o igual que el tamaño del `dst` no concatena y devuelve el tamaño de `src` más el valor `size`, por lo tanto el destino debe ser más grande que el size pasado por parámetro. 

En el caso de ser iguales no concatena debido a que no hay espacio para el carácter de terminación nulo (`'\0'`). Si el parámetro `size` es mayor que el tamaño de `dst` pero más pequeño que el tamaño de `dst` +`src`, añadirá la parte de la cadena de `src` en `dst` hasta completar el `size`- 1 sin llegar a añadirla de manera completa ya que su tamaño excede el tamaño del size. 


**Casos Límite:**

	- Se comprueba si el size es igual a cero antes de mirar el tamaño de `dst` debido a que si se le pasa un `dest = NULL` provocaría Segmentation Fault. Si `src` es `NULL`su comportamiento normal es fallar. 
	- Si `size` es menor o igual que el tamaño de `dst` debe devolver el tamaño de `src + size`
	- Toma como límite `size` si `dst` no tiene carácter de terminación '\0'.
	- Si `src` está vacía no añade nada a `dst` y devuelve el tamaño de `dst`.

</details>

<details>
<summary><strong>ft_toupper</strong> — Convierte una letra a mayúscula</summary>

**Archivo:** `ft_toupper.c`

**Función original:** `toupper`

**Descripción:**

Convierte una letra minúscula del alfabeto a su correspondiente mayúscula. Los demás valores permanecen sin cambios.

**Prototipo:**

```c
int ft_toupper(int c);
```

**Parámetros:**

| Parámetro | Descripción |
|---|---|
| `c` | Valor entero que representa el carácter que se desea convertir. |

**Valor de retorno:**

Devuelve el valor correspondiente a la mayúscula si `c` es una letra minúscula; en caso contrario, devuelve el valor original.

**Comentarios:**

Aunque el valor que recibe sea un `int` si lo que se envía es un carácter alfabético coincide con el código ASCII correspondiente. Se aplica la resta de -32 al carácter.

</details>

<details>
<summary><strong>ft_tolower</strong> — Convierte una letra a minúscula</summary>

**Archivo:** `ft_tolower.c`

**Función original:** `tolower`

**Descripción:**

Convierte una letra mayúscula del alfabeto a su correspondiente minúscula. Los demás valores permanecen sin cambios.

**Prototipo:**

```c
int ft_tolower(int c);
```

**Parámetros:**

| Parámetro | Descripción |
|---|---|
| `c` | Valor entero que representa el carácter que se desea convertir. |

**Valor de retorno:**

Devuelve el valor correspondiente a la minúscula si `c` es una letra mayúscula; en caso contrario, devuelve el valor original.

**Comentarios:**

Aunque el valor que recibe sea un `int` si lo que se envía es un carácter alfabético coincide con el código ASCII correspondiente. Se aplica la suma de +32 al carácter.

</details>

<details>
<summary><strong>ft_strchr</strong> — Busca la primera aparición de un carácter en orden ascendente</summary>

**Archivo:** `ft_strchr.c`

**Función original:** `strchr`

**Descripción:**

Busca la primera aparición del carácter indicado en una cadena. También considera el terminador de carácter nulo (`'\0'`) como parte de la cadena.

**Prototipo:**

```c
char *ft_strchr(const char *s, int c);
```

**Parámetros:**

| Parámetro | Descripción |
|---|---|
| `s` | Cadena en la que se realizará la búsqueda. |
| `c` | Carácter que se desea encontrar. |

**Valor de retorno:**

- Un puntero a la primera aparición del carácter en la cadena.
- `NULL` si no se encuentra.

**Comentarios:**

Se realiza el cast del parámetro recibido para evitar desbordamientos ya que si por ejemplo se envía el carácter 't' que equivale a 116 + 256, si no se hiciese el cast provocaría desbordamiento al tratarse de un char que solo almacena un byte. Sin embargo al hacer el cast tratando el mismo caso de 116 + 256, esté valor daría la vuelta y se convertiría en 116 que sería el carácter 't' como teníamos previsto. Es parte de la función original.

**Casos límite:**

- Debe hacerse el cast tanto del int que recibe como del puntero que devuelve debido a que el tipo de dato que trabaja es `const char *` y para poder devolver un puntero `char` se debe hacer ese cast a (char *) para acceder al valor de `&s[lenght_s]`.
- Si `c_casted` está vacío devuelve la posición al puntero casteado `(char *) &s[i]`.
- Si llega al final de la función sin encontrar nada debe devolver `NULL`. 

</details>

<details>
<summary><strong>ft_strrchr</strong> — Busca la última aparición de un carácter en orden descendente</summary>

**Archivo:** `ft_strrchr.c`

**Función original:** `strrchr`

**Descripción:**

Busca la última aparición del carácter indicado en una cadena. También considera el terminador nulo como parte de la cadena.

**Prototipo:**

```c
char *ft_strrchr(const char *s, int c);
```

**Parámetros:**

| Parámetro | Descripción |
|---|---|
| `s` | Cadena en la que se realizará la búsqueda. |
| `c` | Carácter que se desea encontrar. |

**Valor de retorno:**

- Un puntero a la última aparición del carácter en la cadena.
- `NULL` si no se encuentra.

**Comentarios:**

Se realiza el cast del parámetro recibido para evitar desbordamientos ya que si por ejemplo se envía el carácter 't' que equivale a 116 + 256, si no se hiciese el cast provocaría desbordamiento al tratarse de un char que solo almacena un byte. Sin embargo al hacer el cast tratando el mismo caso de 116 + 256, esté valor daría la vuelta y se convertiría en 116 que sería el carácter 't' como teníamos previsto.

**Casos límite:**

- Debe hacerse el cast tanto del int que recibe como del puntero que devuelve debido que el tipo de dato que trabaja es `const char *`y para poder devolver char se debe hacer ese cast (char *).
- Si `c_casted` está vacío devuelve la posición al puntero casteado `(char *) &s[i]`.
- Si llega al final de la función sin encontrar nada debe devolver `NULL`.
- En este caso se debe medir el tamaño del string para saber el comienzo del bucle y se cumpla siempre que sea mayor o igual a 0.

</details>

<details>
<summary><strong>ft_strncmp</strong> — Compara dos cadenas hasta un límite</summary>

**Archivo:** `ft_strncmp.c`

**Función original:** `strncmp`

**Descripción:**

Compara como máximo los primeros `n` caracteres de dos cadenas, tratando los caracteres como valores de tipo `unsigned char`.

**Prototipo:**

```c
int ft_strncmp(const char *s1, const char *s2, size_t n);
```

**Parámetros:**

| Parámetro | Descripción |
|---|---|
| `s1` | Primera cadena que se comparará. |
| `s2` | Segunda cadena que se comparará. |
| `n` | Número máximo de caracteres que se compararán. |

**Valor de retorno:**

- `0` si los caracteres comparados son iguales.
- Un valor negativo si el primer carácter diferente de `s1` es menor que el de `s2`.
- Un valor positivo si el primer carácter diferente de `s1` es mayor que el de `s2`.

Si `n` es `0`, devuelve `0`.

**Comentarios:**

A diferencia de `ft_strncmp`, solo compara strings, `ft_memcmp` compara bloques de memoria sin importar el contenido.

**Casos límite**

- Se tiene en cuenta la comparación hasta `n` mientras que `s1` o `s2` tengan posiciones para comparar.
- La resta a devolver debe producirse con `unsigned char` en ambos caracteres.
- Si `n` igual a 0, debe devolver 0;
- El bucle debe contrastar que ambos strings sea distinto de '\0' debido a que si se ha terminado de comparar pero el size pasado es muy grande provocaría un Buffer Over Read.


</details>

<details>
<summary><strong>ft_strnstr</strong> — Busca una subcadena dentro de un límite</summary>

**Archivo:** `ft_strnstr.c`

**Función original:** `strnstr`

**Descripción:**

Busca la primera aparición de una subcadena dentro de otra cadena, examinando como máximo `len` caracteres de la cadena principal.

**Prototipo:**

```c
char *ft_strnstr(const char *big, const char *little, size_t len);
```

**Parámetros:**

| Parámetro | Descripción |
|---|---|
| `big` | Cadena principal en la que se buscará. |
| `little` | Subcadena que se desea encontrar. |
| `len` | Número máximo de caracteres de la cadena principal que se examinarán. |

**Valor de retorno:**

- Un puntero al inicio de la primera aparición de `little` dentro del límite indicado.
- `NULL` si no se encuentra dentro de ese límite.
- Si `big` está vacía o el primer carácter (`little[0]`) es igual a `'\0'`, devuelve `big`.

**Comentarios**

Se debe hacer el cast de (char *) `big` y (char *) `&big[i]` ya que la función requiere devolver un puntero modificable, al ser declarado en el parámetro de la función como `const char big` es considerado de solo lectura por lo tanto no cumpliría con el retorno que requiere la función. 

La línea siguiente comprueba que el usuario envie un puntero válido además que la cadena no esté vacía.

```c 
if (!little || little[0] == '\0')
	return ((char *) big);
``` 
Devuelve `big` por que `big` ya es un puntero si le pusieramos `&big` obtendríamos la variable que guarda el puntero (puntero a puntero) y daría error como resultado.
NULL no es igual a '\0', NULL es un puntero vacío mientras '\0'(es el carácter nulo). Es un solo byte con el valor numérico 0.

**Casos límite:**

- Si `big` es null la función debe dar segmentation fault por definición.
- El orden en el while importa, primero se comprueba que `i` sea menor que len y luego se comprueba si `big` es null por que si la primera condición `i < len` es falsa, devuelve `NULL` y no devuelve segmentation fault.

</details>

<details>
<summary><strong>ft_strdup</strong> — Duplica una cadena</summary>

**Archivo:** `ft_strdup.c`

**Función original:** `strdup`

**Descripción:**

Reserva memoria dinámica y copia en ella la cadena de origen, incluido su carácter de terminación nulo (`'\0'`)

**Prototipo:**

```c
char *ft_strdup(const char *s);
```

**Parámetros:**

| Parámetro | Descripción |
|---|---|
| `s` | Cadena que se desea duplicar. |

**Valor de retorno:**

- Un puntero a la nueva cadena si la reserva de memoria tiene éxito.
- `NULL` si no se puede reservar la memoria.

La memoria devuelta debe liberarse con `free()` cuando deje de utilizarse.

**Comentarios:**

En este caso se copia la cadena `s` recibida por parámetro a un puntero (`char *`) que reserva memoria con malloc.

Se debe hacer un cast en el `malloc` para que el puntero que devuelva sea de tipo `char` por lo tanto se indica especificamente la línea:
```c
dest = (char *) malloc((size_str + 1) * sizeof(char));
```
Ya que de lo contrario devuelve un puntero tipo void y en este caso estamos copiando una cadena por parámetro a un bloque de memoria reservado con `malloc`.

Se debe añadir el carácter '\0' al final cadena en la reserva creada.

</details>

<details>
<summary><strong>ft_substr</strong> — Extrae una subcadena</summary>

**Archivo:** `ft_substr.c`

**Función original:** No tiene una función equivalente.

**Descripción:**

Reserva memoria y crea una nueva cadena a partir de una parte de la cadena original, comenzando en la posición indicada y copiando como máximo el número de caracteres solicitado.

**Prototipo:**

```c
char *ft_substr(char const *s, unsigned int start, size_t len);
```

**Parámetros:**

| Parámetro | Descripción |
|---|---|
| `s` | Cadena de origen. |
| `start` | Posición desde la que comenzará la extracción. |
| `len` | Número máximo de caracteres que se copiarán. |

**Valor de retorno:**

- Un puntero a la nueva subcadena terminada en el carácter de terminación nulo (`'\0'`)
- `NULL` si falla la reserva de memoria.
- Si `start` está fuera de la cadena, normalmente devuelve una cadena vacía reservada dinámicamente

**Comentarios:**

Se realiza el cast a la variable recibida por parámetro `start` debido a que la variable recibida por parámetro `len` es de tipo size_t, por lo tanto debe ser del mismo tipo para poder compararlas posteriormente.

</details>

<details>
<summary><strong>ft_strjoin</strong> — Concatena dos cadenas en una nueva</summary>

**Archivo:** `ft_strjoin.c`

**Función original:** No tiene una función equivalente.

**Descripción:**

Reserva memoria y crea una nueva cadena que contiene primero el contenido de `s1` y después el contenido de `s2`.

**Prototipo:**

```c
char *ft_strjoin(char const *s1, char const *s2);
```

**Parámetros:**

| Parámetro | Descripción |
|---|---|
| `s1` | Primera cadena. |
| `s2` | Segunda cadena que se añadirá al final de la primera. |

**Valor de retorno:**

- Un puntero a la nueva cadena concatenada.
- `NULL` si falla la reserva de memoria.

La memoria devuelta debe liberarse con `free()`.

***Comentarios***

En la resolución que he propuesto he usado funciones ya creadas en la librería como `ft_memmove` y `ft_strlcat`. Para evitar crear leaks de memoria he añadido la siguiente línea:
```c
final_str[size_s1] = '\0';
```
Para que `ft_strlcat` sepa donde empieza la siguiente palabra, si esta línea no estuviese ahí daría error de memoria, ya que al no encontrar límite de carácter nulo `'\0'` seguiría leyendo el resto de bytes asignados por `malloc` como si fuese parte de la primera palabra,

También puede solucionarse con `ft_calloc` o `ft_bzero` ya que lo rellena con carácteres nulos `'\0'` y daría el mismo resultado que lo anterior. 
```c
final_str = ft_calloc((size_s1 + size_s2 + 1), sizeof(char));
```
En el ejercicio de `ft_strjoin` se menciona en el subject que la función autorizada es malloc y esta es la razón por la que he decidido solucionarlo con la primera opción mencionada.
</details>

<details>
<summary><strong>ft_strtrim</strong> — Elimina caracteres al principio y al final</summary>

**Archivo:** `ft_strtrim.c`

**Función original:** No tiene una función equivalente.

**Descripción:**

Crea una nueva cadena eliminando del principio y del final de la cadena original todos los caracteres que aparezcan en el conjunto indicado.

**Prototipo:**

```c
char *ft_strtrim(char const *s1, char const *set);
```

**Parámetros:**

| Parámetro | Descripción |
|---|---|
| `s1` | Cadena original que se desea recortar. |
| `set` | Cadena que contiene los caracteres que se eliminarán de los extremos. |

**Valor de retorno:**

- Un puntero a la nueva cadena recortada.
- `NULL` si falla la reserva de memoria.

Los caracteres incluidos en `set` que aparezcan en el interior de `s1` se conservan.

**Comentarios:**

Se usa `ft_strchr` en la búsqueda de coincidencias hacia atrás ya que `ft_strrchr` busca la última aparición y `ft_strchr` en el momento que no aparece el char en el set se detiene y no sigue hasta el final por lo tanto tiene mejor rendimiento.

</details>

<details>
<summary><strong>ft_split</strong> — Divide una cadena en un array de cadenas</summary>

**Archivo:** `ft_split.c`

**Función original:** No tiene una función equivalente.

**Descripción:**

Divide una cadena en varias subcadenas utilizando un carácter delimitador. Devuelve un array terminado en `NULL` que contiene las cadenas resultantes.

**Prototipo:**

```c
char **ft_split(char const *s, char c);
```

**Parámetros:**

| Parámetro | Descripción |
|---|---|
| `s` | Cadena que se desea dividir. |
| `c` | Carácter delimitador que separa las subcadenas. |

**Valor de retorno:**

- Un puntero al array de cadenas si la operación tiene éxito.
- `NULL` si falla la reserva de memoria.

Las apariciones consecutivas del delimitador no generan cadenas vacías en la implementación habitual de Libft. El array y cada una de sus cadenas deben liberarse con `free()`.

</details>

<details>
<summary><strong>ft_strmapi</strong> — Aplica una función a cada carácter en una nueva cadena.</summary>

**Archivo:** `ft_strmapi.c`

**Función original:** No tiene una función equivalente.

**Descripción:**

Crea una nueva cadena con `malloc` aplicando una función a cada carácter de la cadena original. La función recibe el índice del carácter y el carácter que debe transformar.

**Prototipo:**

```c
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
```

**Parámetros:**

| Parámetro | Descripción |
|---|---|
| `s` | Cadena original que se recorrerá. |
| `f` | Función que recibe el índice y el carácter, y devuelve el carácter transformado. |

**Valor de retorno:**

- Un puntero a la nueva cadena transformada y terminada en nulo.
- `NULL` si falla la reserva de memoria.

**Comentarios:**

La cadena original no se modifica.

</details>

<details>
<summary><strong>ft_striteri</strong> — Aplica una función modificadora a cada carácter</summary>

**Archivo:** `ft_striteri.c`

**Función original:** No tiene una función equivalente.

**Descripción:**

Recorre una cadena y aplica una función a cada carácter, proporcionando su índice y un puntero al carácter para permitir su modificación directa.

**Prototipo:**

```c
void ft_striteri(char *s, void (*f)(unsigned int, char *));
```

**Parámetros:**

| Parámetro | Descripción |
|---|---|
| `s` | Cadena cuyos caracteres se recorrerán y podrán modificarse. |
| `f` | Función que recibe el índice y un puntero al carácter actual. |

**Valor de retorno:**

No devuelve ningún valor (`void`).

**Comentarios:**

La función modifica la cadena original si la función `f` cambia los caracteres recibidos.

</details>

### 4.-Funciones de conversión de datos

<details>
<summary><strong>ft_atoi</strong> — Convierte una cadena en un entero</summary>

**Archivo:** `ft_atoi.c`

**Función original:** `atoi`

**Descripción:**

Convierte el comienzo de una cadena en un número entero de tipo `int`. Ignora los espacios iniciales reconocidos por la implementación, admite un signo opcional y procesa los dígitos decimales consecutivos.

**Prototipo:**

```c
int ft_atoi(const char *nptr);
```

**Parámetros:**

| Parámetro | Descripción |
|---|---|
| `nptr` | Cadena que contiene el número que se desea convertir. |

**Valor de retorno:**

Devuelve el número entero obtenido. Si no encuentra ningún dígito válido después de los espacios y el signo opcional, devuelve `0`.

El comportamiento de `atoi` no permite gestionar de forma fiable los desbordamientos de `int`.

</details>

<details>
<summary><strong>ft_itoa</strong> — Convierte un entero en una cadena</summary>

**Archivo:** `ft_itoa.c`

**Función original:** No tiene una función equivalente.

**Descripción:**

Convierte un número entero en una representación decimal textual y reserva memoria para almacenar la cadena resultante.

**Prototipo:**

```c
char *ft_itoa(int n);
```

**Parámetros:**

| Parámetro | Descripción |
|---|---|
| `n` | Número entero que se desea convertir. |

**Valor de retorno:**

- Un puntero a la cadena que representa el número, incluido su signo si es negativo.
- `NULL` si falla la reserva de memoria.

La cadena devuelta debe liberarse con `free()`.

</details>

### 5.-Funciones de asignación de memoria

<details>
<summary><strong>ft_calloc</strong> — Reserva memoria inicializada a cero</summary>

**Archivo:** `ft_calloc.c`

**Función original:** `calloc`

**Descripción:**

Reserva memoria para un número determinado de elementos y establece todos los bytes del bloque reservado a cero.

**Prototipo:**

```c
void *ft_calloc(size_t nmemb, size_t size);
```

**Parámetros:**

| Parámetro | Descripción |
|---|---|
| `nmemb` | Número de elementos que se desean reservar. |
| `size` | Tamaño en bytes de cada elemento. |

**Valor de retorno:**

- Un puntero al bloque de memoria reservado si la operación tiene éxito.
- `NULL` si falla la reserva.

**Comentarios**

En este ejercicio se asigna una reserva de memoria con malloc y todos los bloques que se reservan se les asigna el valor '\0'.

La función de ejemplo `ft_calloc` contempla que el número de elementos sean distintos que 0 y que no haya una asignación al malloc mayor al tipo de datos que recibe en este caso (t_size). Por lo tanto, debe tenerse en cuenta la condición de que si size > max_size / nmemb devolvería `NULL`.
El mismo caso sería con nmemb > max_size / size, debería de devolver `NULL`. Sea cual fuese el condicionante que se utilice para controlar ese caso, debe tenerse en cuenta que la variable divisora debe ser distinta de 0, de lo contrario el programa fallaría. 

La memoria devuelta debe liberarse con `free()`. La implementación debe tener en cuenta el posible desbordamiento al calcular `nmemb * size`.

</details>

### 6.-Funciones de salida

<details>
<summary><strong>ft_putchar_fd</strong> — Escribe un carácter en un descriptor de archivo</summary>

**Archivo:** `ft_putchar_fd.c`

**Función original:** No tiene una función equivalente.

**Descripción:**

Escribe un carácter en el descriptor de archivo indicado.

**Prototipo:**

```c
void ft_putchar_fd(char c, int fd);
```

**Parámetros:**

| Parámetro | Descripción |
|---|---|
| `c` | Carácter que se desea escribir. |
| `fd` | Descriptor de archivo en el que se escribirá, por ejemplo `1` para la salida estándar. |

**Valor de retorno:**

No devuelve ningún valor (`void`).

</details>

<details>
<summary><strong>ft_putstr_fd</strong> — Escribe una cadena en un descriptor de archivo</summary>

**Archivo:** `ft_putstr_fd.c`

**Función original:** No tiene una función equivalente.

**Descripción:**

Escribe una cadena en el descriptor de archivo indicado, sin añadir un salto de línea.

**Prototipo:**

```c
void ft_putstr_fd(char *s, int fd);
```

**Parámetros:**

| Parámetro | Descripción |
|---|---|
| `s` | Cadena que se desea escribir. |
| `fd` | Descriptor de archivo de destino. |

**Valor de retorno:**

No devuelve ningún valor (`void`).

</details>

<details>
<summary><strong>ft_putendl_fd</strong> — Escribe una cadena seguida de un salto de línea</summary>

**Archivo:** `ft_putendl_fd.c`

**Función original:** No tiene una función equivalente directa.

**Descripción:**

Escribe una cadena en el descriptor de archivo indicado y añade un salto de línea al final.

**Prototipo:**

```c
void ft_putendl_fd(char *s, int fd);
```

**Parámetros:**

| Parámetro | Descripción |
|---|---|
| `s` | Cadena que se desea escribir. |
| `fd` | Descriptor de archivo de destino. |

**Valor de retorno:**

No devuelve ningún valor (`void`).

</details>

<details>
<summary><strong>ft_putnbr_fd</strong> — Escribe un número entero en un descriptor de archivo</summary>

**Archivo:** `ft_putnbr_fd.c`

**Función original:** No tiene una función equivalente directa.

**Descripción:**

Convierte un número entero a cadena y la escribe en el descriptor de archivo indicado.

**Prototipo:**

```c
void ft_putnbr_fd(int n, int fd);
```

**Parámetros:**

| Parámetro | Descripción |
|---|---|
| `n` | Número entero que se desea escribir. |
| `fd` | Descriptor de archivo de destino. |

**Valor de retorno:**

No devuelve ningún valor (`void`).

</details>

### 7.-Funciones de listas enlazadas

Estas funciones utilizan la estructura t_list desarrollada en el siguiente apartado.

<details>
<summary><strong>ft_lstnew</strong> — Crea un nuevo nodo</summary>

**Archivo:** `ft_lstnew.c`

**Función original:** No tiene una función equivalente.

**Descripción:**

Reserva memoria para crear un nodo de lista enlazada, inicializa su contenido con el valor recibido y establece su puntero `next` a `NULL`.

**Prototipo:**

```c
t_list *ft_lstnew(void *content);
```

**Parámetros:**

| Parámetro | Descripción |
|---|---|
| `content` | Puntero al contenido que se almacenará en el nodo. |

**Valor de retorno:**

- Un puntero al nuevo nodo si la reserva de memoria tiene éxito.
- `NULL` si falla la reserva.

</details>

<details>
<summary><strong>ft_lstadd_front</strong> — Añade un nodo al principio de la lista</summary>

**Archivo:** `ft_lstadd_front.c`

**Función original:** No tiene una función equivalente.

**Descripción:**

Inserta un nodo al principio de la lista enlazada y actualiza el puntero al primer nodo para que apunte al nuevo elemento.

**Prototipo:**

```c
void ft_lstadd_front(t_list **lst, t_list *new);
```

**Parámetros:**

| Parámetro | Descripción |
|---|---|
| `lst` | Dirección del puntero al primer nodo de la lista. |
| `new` | Nodo que se desea insertar al principio. |

**Valor de retorno:**

No devuelve ningún valor (`void`). Modifica la lista a través de `lst`.

***Comentarios***

```text
**Estructura de la lista
 |
 * primer nodo(*lst, apuntado por **lst)				
+---------+      +---------+   
| content |      | content |    
| next    | ---> | next    | --> NULL
+---------+      +---------+    
		segundo nodo
```                  
```text                           
 *nuevo nodo  **lst apunta aquí   *antiguo_segundo nodo
+---------+      +---------+      +---------+
| content |      | content |      | content |
| next    | ---> | next    | ---> | next    |
+---------+      +---------+      +---------+
		*antiguo_primer_nodo
                                      |
                                      v
                                     NULL
```
```text
 *lst 			*antiguo_segundo nodo
+---------+      +---------+      +---------+
| content |      | content |      | content |
| next    | ---> | next    | ---> | next    |
+---------+      +---------+      +---------+
		*antiguo_primer_nodo
(**lst apunta aquí)				
*nuevo_nodo                           |
                                      v
                                     NULL
```                  
                            

</details>

<details>
<summary><strong>ft_lstsize</strong> — Cuenta los nodos de una lista</summary>

**Archivo:** `ft_lstsize.c`

**Función original:** No tiene una función equivalente.

**Descripción:**

Recorre la lista enlazada y cuenta cuántos nodos contiene.

**Prototipo:**

```c
unsigned int ft_lstsize(t_list *lst);
```

**Parámetros:**

| Parámetro | Descripción |
|---|---|
| `lst` | Puntero al primer nodo de la lista. |

**Valor de retorno:**

Devuelve el número total de nodos. Si `lst` es `NULL`, devuelve `0`.

</details>

<details>
<summary><strong>ft_lstlast</strong> — Obtiene el último nodo de la lista</summary>

**Archivo:** `ft_lstlast.c`

**Función original:** No tiene una función equivalente.

**Descripción:**

Recorre la lista enlazada hasta encontrar el último nodo, cuyo campo `next` es `NULL`.

**Prototipo:**

```c
t_list *ft_lstlast(t_list *lst);
```

**Parámetros:**

| Parámetro | Descripción |
|---|---|
| `lst` | Puntero al primer nodo de la lista. |

**Valor de retorno:**

- Un puntero al último nodo si la lista no está vacía.
- `NULL` si la lista está vacía.

</details>

<details>
<summary><strong>ft_lstadd_back</strong> — Añade un nodo al final de la lista</summary>

**Archivo:** `ft_lstadd_back.c`

**Función original:** No tiene una función equivalente.

**Descripción:**

Inserta un nodo al final de la lista enlazada. Si la lista está vacía, el nuevo nodo pasa a ser el primero.

**Prototipo:**

```c
void ft_lstadd_back(t_list **lst, t_list *new);
```

**Parámetros:**

| Parámetro | Descripción |
|---|---|
| `lst` | Dirección del puntero al primer nodo de la lista. |
| `new` | Nodo que se desea añadir al final. |

**Valor de retorno:**

No devuelve ningún valor (`void`). Modifica la lista a través de `lst`.

**Comentarios:**

Para acceder al primer valor de la lista cuando se recibe por parámetro si se quiere mostrar por pantalla el puntero entre paréntesis en este caso `(*lst)`.

</details>

<details>
<summary><strong>ft_lstdelone</strong> — Elimina un nodo de la lista</summary>

**Archivo:** `ft_lstdelone.c`

**Función original:** No tiene una función equivalente.

**Descripción:**

Aplica una función de eliminación al contenido del nodo indicado y libera la memoria ocupada por ese nodo. No modifica automáticamente los enlaces de los demás nodos de la lista.

**Prototipo:**

```c
void ft_lstdelone(t_list *lst, void (*del)(void *));
```

**Parámetros:**

| Parámetro | Descripción |
|---|---|
| `lst` | Nodo que se desea eliminar. |
| `del` | Función encargada de liberar o gestionar el contenido del nodo. |

**Valor de retorno:**

No devuelve ningún valor (`void`).

</details>

<details>
<summary><strong>ft_lstclear</strong> — Elimina una lista enlazada completa</summary>

**Archivo:** `ft_lstclear.c`

**Función original:** No tiene una función equivalente.

**Descripción:**

Recorre la lista, aplica la función de eliminación a cada contenido, libera todos los nodos y establece el puntero inicial a `NULL`.

**Prototipo:**

```c
void ft_lstclear(t_list **lst, void (*del)(void *));
```

**Parámetros:**

| Parámetro | Descripción |
|---|---|
| `lst` | Dirección del puntero al primer nodo de la lista. |
| `del` | Función encargada de liberar o gestionar el contenido de cada nodo. |

**Valor de retorno:**

No devuelve ningún valor (`void`). Al terminar, `*lst` queda establecido a `NULL`.

</details>

<details>
<summary><strong>ft_lstiter</strong> — Aplica una función a cada nodo</summary>

**Archivo:** `ft_lstiter.c`

**Función original:** No tiene una función equivalente directa.

**Descripción:**

Recorre todos los nodos de la lista enlazada y aplica una función al contenido de cada uno, sin crear una nueva lista.

**Prototipo:**

```c
void ft_lstiter(t_list *lst, void (*f)(void *));
```

**Parámetros:**

| Parámetro | Descripción |
|---|---|
| `lst` | Puntero al primer nodo de la lista. |
| `f` | Función que se aplicará al contenido de cada nodo. |

**Valor de retorno:**

No devuelve ningún valor (`void`).

</details>

<details>
<summary><strong>ft_lstmap</strong> — Crea una nueva lista transformando sus contenidos</summary>

**Archivo:** `ft_lstmap.c`

**Función original:** No tiene una función equivalente directa.

**Descripción:**

Crea una nueva lista enlazada aplicando una función al contenido de cada nodo de la lista original. La nueva lista conserva el orden de los elementos.

**Prototipo:**

```c
t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
```

**Parámetros:**

| Parámetro | Descripción |
|---|---|
| `lst` | Puntero al primer nodo de la lista original. |
| `f` | Función que transforma el contenido de cada nodo y devuelve el nuevo contenido. |
| `del` | Función utilizada para liberar el contenido cuando sea necesario eliminarlo, por ejemplo, si falla la creación de la nueva lista. |

**Valor de retorno:**

- Un puntero al primer nodo de la nueva lista si la operación tiene éxito.
- `NULL` si falla la creación de la nueva lista.

La lista original no debe modificarse. La función de eliminación `del` permite gestionar los contenidos creados durante la transformación.

**Comentarios:**

La función `del` es una función auxiliar que solo se necesita obligatoriamente si algo falla durante el bucle de asignación de memoria (malloc crash). Si la lista está vacía o todo funciona a la perfección, del jamás llega a ejecutarse.

Si te pasan una lista vacía (lst = NULL), la función original de la librería debería ignorar el resto de parámetros y devolver NULL limpiamente. Sin embargo, al poner !del en el primer if, estaría forzando a la función a salir prematuramente por culpa de del, impidiendo que el código devuelva el comportamiento correcto para una lista vacía y sería incorrecto.

La variable `content_tmp` he tenido que crearla para poder guardar ese content por si el `ft_lstnew(content)` fallara. Si este fuera el caso se crearía un leak de memoria debido a que se perdía por que no habría manera de llegar a él solo al resto de la lista. Se quedaría ese content perdido en el vacío.

```c
content_tmp = f(lst->content);
		nu_node = ft_lstnew(content_tmp);
```

</details>

---

### Estructura de la lista enlazada

Las funciones anteriores utilizan la siguiente estructura, declarada en `libft.h`:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

| Campo     | Descripción                                              |
| --------- | -------------------------------------------------------- |
| `content` | Puntero al contenido almacenado en el nodo.              |
| `next`    | Puntero al siguiente nodo. Si es el último, vale `NULL`. |

Una lista enlazada de tres nodos puede representarse de la siguiente manera:

```text
**Estructura de la lista
 |
*primer nodo     segundo nodo     tercer nodo
+---------+      +---------+      +---------+
| content |      | content |      | content |
| next    | ---> | next    | ---> | next    |
+---------+      +---------+      +---------+
                                      |
                                      v
                                     NULL
```

La gestión de memoria es fundamental: cada nodo reservado debe liberarse cuando deje de utilizarse, y su contenido debe liberarse mediante una función apropiada para el tipo de dato almacenado.

---

### Normas de implementación

El proyecto se desarrolla en lenguaje C y debe respetar las normas de codificación y las restricciones establecidas por el currículo de 42.

Los principales aspectos que deben tenerse en cuenta son:

* **Compilación estricta:** utilizar las opciones `-Wall -Wextra -Werror` para detectar advertencias y tratarlas como errores.
* **Prototipos correctos:** declarar las funciones públicas en `libft.h` con los tipos y parámetros adecuados.
* **Gestión de memoria:** liberar las reservas dinámicas cuando dejen de utilizarse y controlar los posibles fallos de asignación.
* **Tratamiento de punteros:** comprobar las condiciones necesarias antes de acceder a la memoria.
* **Reutilización de código:** aprovechar las funciones de la biblioteca para evitar duplicaciones innecesarias.
* **Compatibilidad:** respetar las funciones permitidas y las restricciones concretas de la versión del proyecto.
* **Legibilidad:** utilizar nombres claros, mantener una estructura consistente y documentar las decisiones técnicas relevantes.
* **Pruebas:** comprobar el comportamiento de las funciones con entradas habituales, cadenas vacías, límites y casos de error.

El comportamiento esperado debe contrastarse con las especificaciones de las funciones originales y con los requisitos particulares de Libft. Algunas funciones, como `strdup` y `strnstr`, no forman parte de ISO C en todas sus versiones y proceden de otros estándares o interfaces de sistemas Unix.

---
## Recursos
---

Para desarrollar Libft he utilizado documentación técnica, recursos audiovisuales y el apoyo de otros estudiantes de 42. Estas fuentes me han permitido comprender mejor el comportamiento de las funciones de C, resolver dudas durante la implementación y mejorar la organización del proyecto.

### Documentación técnica

- **Man pages de Linux:** he utilizado el comando `man` para consultar la documentación de las funciones de la biblioteca estándar de C, conocer su comportamiento, revisar sus parámetros y comprender sus valores de retorno. Esta referencia me ha servido para orientar la implementación de funciones como `strlen`, `memcpy`, `strncmp` y `calloc`.

  - Ejecutando en la shell de linux: 
	```bash 
	man funcion_a_utilizar
	```

### Recursos audiovisuales

- **Oceano — Linked Lists (YouTube):** recurso utilizado para comprender los fundamentos de las listas enlazadas, la relación entre sus nodos y el funcionamiento de los punteros que permiten recorrerlas y modificarlas.

  - [Buscar el vídeo de Oceano sobre Linked Lists](https://www.youtube.com/results?search_query=Oceano+linked+lists)

- **Code Vault — Linked Lists for Absolute Beginners (YouTube):** vídeos utilizados para reforzar los conceptos de listas enlazadas desde una perspectiva práctica, especialmente la creación de nodos, la inserción de elementos y el recorrido de la lista.

  - [Buscar los vídeos de Code Vault sobre Linked Lists](https://www.youtube.com/results?search_query=Code+Vault+Linked+Lists+for+Absolute+Beginners)

### Aprendizaje colaborativo

- **Peer-to-peer de 42:** el intercambio de conocimientos con otros estudiantes me ha ayudado a comprender mejor algunos ejercicios, contrastar diferentes enfoques y resolver dudas durante el desarrollo. También he aprovechado estas sesiones para mejorar la documentación del proyecto en `README.md` y la organización de las reglas de compilación del `Makefile`.

### Uso de inteligencia artificial

He utilizado herramientas de inteligencia artificial como recurso complementario de aprendizaje y resolución de problemas durante el desarrollo de Libft.

Su uso se ha centrado en las siguientes tareas:

- **Consulta de información técnica:** aclarar conceptos y completar información que necesitaba para comprender el comportamiento de determinadas funciones y mejorar su documentación en el `README.md`.

- **Orientación para plantear ejercicios:** cuando encontraba dificultades para continuar, he utilizado la IA para obtener ideas, dividir un problema en pasos más manejables y explorar posibles enfoques. He priorizado el desarrollo de mi propio criterio, evitando utilizarla como sustituto de mi implementación.

- **Resolución de errores:** cuando no conseguía resolver determinados problemas junto con otros compañeros, he recurrido a la IA para analizar posibles causas y encontrar soluciones que pudiera comprender, comprobar y compartir posteriormente.

- **Mejora de la documentación:** he utilizado la IA como apoyo para estructurar el `README.md` y poder presentar la información de forma clara y accesible. He podido experimentar de nuevo el hecho de implementar etiquetado HTML y el diferente marcado para poder desarrollar el formato markdown requerido.

La inteligencia artificial se ha utilizado como herramienta de apoyo, no como sustituto del aprendizaje ni del razonamiento propio. Mi objetivo ha sido comprender los problemas, evaluar las propuestas recibidas y desarrollar mis propias implementaciones, utilizando estos recursos para reforzar mi aprendizaje y compartir los conocimientos adquiridos.