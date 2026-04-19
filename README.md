_Este proyecto ha sido creado como parte del currículo de 42 por gorkgall._

# Libft - Tu primera librería

## Descripción
Este proyecto consiste en la creación de una librería en C que contiene funciones de propósito general. El objetivo es comprender el funcionamiento de las funciones estándar de la `libc` mediante su implementación manual, permitiendo así aprender a utilizarlas de forma eficaz y construir una herramienta útil para los futuros proyectos del cursus.

## Instrucciones

### Compilación
El proyecto incluye un `Makefile` que compila los archivos fuente con los flags `-Wall`, `-Werror` y `-Wextra`. Se utiliza el comando `ar` para generar la librería `libft.a` en la raíz del repositorio.

Las reglas principales son:
* `make`: Compila la librería completa (Partes 1, 2 y 3).
* `make clean`: Elimina los archivos objeto.
* `make fclean`: Elimina los archivos objeto y la librería `libft.a`.
* `make re`: Recompila el proyecto desde cero.

### Requisitos Técnicos
* El código respeta íntegramente la **Norma** de 42.
* No se han utilizado **variables globales**.
* Las funciones auxiliares están definidas como `static` para restringir su alcance al archivo correspondiente.
* Se garantiza la correcta liberación de memoria en el heap para evitar leaks.

## Recursos
* **Documentación:** Se han utilizado las páginas del manual del sistema (`man`) para replicar el comportamiento y los prototipos de las funciones de la `libc`.
* **Uso de IA:** Se ha utilizado IA únicamente para estructurar el formato de este README según los requisitos del subject y para aprender el uso de funciones como `malloc` y `free` mediante la proposición de retos técnicos. En todo momento la IA ha actuado bajo un prompt personalizado donde tiene prohibido ofrecer soluciones directas o mostrar código, garantizando así mi aprendizaje y la autoría de este proyecto.

## Detalle de la librería

La librería implementa todas las funciones requeridas en el manual divididas en tres secciones:

1. **Parte 1 - Funciones de libc:** Rediseño de funciones estándar como `ft_strlen`, `ft_memset`, `ft_strchr`, `ft_atoi`, `ft_calloc` y `ft_strdup`, entre otras.
2. **Parte 2 - Funciones adicionales:** Funciones que no pertenecen a la libc o están implementadas de forma distinta, incluyendo manipulación de cadenas (`ft_substr`, `ft_strjoin`, `ft_split`, `ft_itoa`) y escritura en descriptores de archivo (`ft_putchar_fd`, `ft_putstr_fd`, etc.).
3. **Part 3 - Listas enlazadas:** Implementación de funciones para gestionar una estructura de lista enlazada `t_list`, permitiendo la creación, eliminación, recuento y aplicación de funciones sobre nodos (`ft_lstnew`, `ft_lstadd_back`, `ft_lstclear`, etc.).