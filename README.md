# Libft

## Descripción

Este proyecto consiste en la implementación de mi propia librería con funciones básicas en C, todas implementadas por mi. También se incluye la función `ft_printf`, implementada en este repositorio "https://github.com/ezy0/ft_printf". El propósito de este proyecto es comprender cómo funcionan algunas funciones básicas y desarrollar nuevas funciones para manipular cadenas, memoria y listas enlazadas

## Contenido

Las siguientes funciones replican la funcionalidad de sus contrapartes en la biblioteca estándar de C.

#### Funciones de comprobación de caracteres
- **`ft_isalpha(int c)`**  
  Comprueba si el carácter es una letra alfabética.
  
- **`ft_isdigit(int c)`**  
  Comprueba si el carácter es un dígito decimal (0-9).
  
- **`ft_isalnum(int c)`**  
  Comprueba si el carácter es alfanumérico.
  
- **`ft_isascii(int c)`**  
  Comprueba si el carácter pertenece al conjunto ASCII (0-127).
  
- **`ft_isprint(int c)`**  
  Comprueba si el carácter es imprimible.

#### Funciones de manipulación de cadenas y memoria
- **`ft_strlen(const char *s)`**  
  Calcula la longitud de una cadena.
  
- **`ft_memset(void *b, int c, size_t len)`**  
  Llena un bloque de memoria con un valor específico.
  
- **`ft_bzero(void *s, size_t n)`**  
  Llena un bloque de memoria con ceros.
  
- **`ft_memcpy(void *dst, const void *src, size_t n)`**  
  Copia `n` bytes de `src` a `dst`.
  
- **`ft_memmove(void *dst, const void *src, size_t len)`**  
  Copia `len` bytes de `src` a `dst`, gestionando solapamientos.
  
- **`ft_strlcpy(char *dst, const char *src, size_t dstsize)`**  
  Copia de forma segura una cadena de `src` a `dst`.
  
- **`ft_strlcat(char *dst, const char *src, size_t dstsize)`**  
  Concatena de forma segura `src` a `dst`.

#### Funciones de conversión de caracteres
- **`ft_toupper(int c)`**  
  Convierte un carácter en minúscula a mayúscula.
  
- **`ft_tolower(int c)`**  
  Convierte un carácter en mayúscula a minúscula.

#### Funciones de búsqueda y comparación
- **`ft_strchr(const char *s, int c)`**  
  Busca la primera aparición de un carácter en una cadena.
  
- **`ft_strrchr(const char *s, int c)`**  
  Busca la última aparición de un carácter en una cadena.
  
- **`ft_strncmp(const char *s1, const char *s2, size_t n)`**  
  Compara hasta `n` caracteres de dos cadenas.
  
- **`ft_memchr(const void *s, int c, size_t n)`**  
  Busca un byte en los primeros `n` bytes de un bloque de memoria.
  
- **`ft_memcmp(const void *s1, const void *s2, size_t n)`**  
  Compara los primeros `n` bytes de dos bloques de memoria.
  
- **`ft_strnstr(const char *haystack, const char *needle, size_t len)`**  
  Busca una subcadena dentro de otra con un límite de caracteres.
  
- **`ft_atoi(const char *str)`**  
  Convierte una cadena en un entero.

#### Funciones de memoria dinámica
- **`ft_calloc(size_t count, size_t size)`**  
  Asigna memoria para un array inicializado a cero.
  
- **`ft_strdup(const char *s1)`**  
  Duplica una cadena en memoria dinámica.

---

### Funciones adicionales

Estas funciones amplían las capacidades para manipular cadenas de texto:

- **`ft_substr`**  
  Extrae una subcadena de una cadena principal.
  
- **`ft_strjoin`**  
  Concatena dos cadenas en una nueva.
  
- **`ft_strtrim`**  
  Recorta caracteres no deseados de los extremos de una cadena.
  
- **`ft_split`**  
  Divide una cadena en un array de cadenas utilizando un delimitador.
  
- **`ft_itoa`**  
  Convierte un número entero en una cadena.
  
- **`ft_strmapi`**  
  Aplica una función a cada carácter de una cadena, generando una nueva cadena.
  
- **`ft_striteri`**  
  Aplica una función a cada carácter de una cadena en su lugar.
  
- **`ft_putchar_fd`**  
  Escribe un carácter en un descriptor de archivo.
  
- **`ft_putstr_fd`**  
  Escribe una cadena en un descriptor de archivo.
  
- **`ft_putendl_fd`**  
  Escribe una cadena seguida de un salto de línea en un descriptor de archivo.
  
- **`ft_putnbr_fd`**  
  Escribe un número entero en un descriptor de archivo.

---

### Manipulación de listas enlazadas

Las siguientes funciones permiten trabajar con listas enlazadas usando la estructura `t_list`:

```
typedef struct s_list {
    void *content;
    struct s_list *next;
} t_list;

```
- **`ft_lstnew`**  
  Crea un nuevo nodo.
  
- **`ft_lstadd_front`**  
  Añade un nodo al inicio de la lista.
  
- **`ft_lstsize`**  
  Cuenta el número de nodos de una lista.
  
- **`ft_lstlast`**  
  Devuelve el último nodo de la lista.
  
- **`ft_lstadd_back`**  
  Convierte un número entero en una cadena.
  
- **`ft_lstdelone`**  
  Libera un nodo utilizando una función para su contenido.
  
- **`ft_lstclear`**  
  Elimina y libera todos los nodos de una lista.
  
- **`ft_lstiter`**  
  Itera sobre cada nodo aplicando una función.
  
- **`ft_lstmap`**  
  Crea una nueva lista transformando cada nodo con una función.



