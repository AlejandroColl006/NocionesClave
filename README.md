# === NocionesClave
## Puntos 1 al 5: Resultado consola
```
------------- Punto 1 -------------
Hola Mundo
Valor de la g antes de la funcion sumaSimple: 20
La suma es: Valor de la g dentro de la funcion sumaSimple: 20
25
Valor de la g despues de la funcion sumaSimple: 20
------------- Punto 2 -------------
Nombre: Vicente
Edad: 23
Genero: Hombre
Grado: Informatica
------------- Punto 3 -------------
Hola, CLion!
------------- Punto 4 -------------
Hola Mundo!
El resultado de restar 25-2=23
------------- Punto 5 -------------
El area del circulo de radio es 2 y el area es 12.5664
```
## Punto 1: Principales características del lenguaje C++
- La función de main.cpp: muestraHolaMundoYSuma(), muestra "hola mundo"
- Se crea la función de main.cpp: sumaSimple(a,b) que suma dos datos y los devuelve 
- Defino la variable de main.cpp: "g" global y la uso en varias funciones, dentro y fuera sumaSimple

## Punto 2: Programación orientada a objetos
- Se crean las clases Estudiante y Persona en la carpeta src/classes
- Estudiante hereda de Persona y sus propiedades
- Estudiante tiene una función llamada "mostrarDetalles" que muestra sus datos

## Punto 3: Entorno de desarrollo y archivo CMakeLists.txt
- Se modifica el fichero CMakeLists.txt para descargar y usar la librería "fmt"
- Se crea el método de main.cpp: muestraHolaClionUsandoFmt() que utiliza la librería fmt para mostrar "Hola Clion!"

## Punto 4: Organización de un programa C++
- Se crean dos proyectos de librerías:
  - [Librería estática](https://github.com/AlejandroColl006/NocionesClaveLibEstatica)
    - Tiene un fichero matematicas.cpp/h con las funciones suma y resta
  - [Librería dinámica](https://github.com/AlejandroColl006/NocionesClaveLibDinamica)
    - Tiene un fichero funciones.cpp/h con la función muestraHolaMundo
- Se compilan las librerías y se generan los ".dll",".dll.a" y ".a", que guardo en la directorio "lib"
- Se crea un directorio "includes" con los ficheros .h de las funciones que necesito importar
- Se incluyen en el CMakeLists.txt las librerías, los .h y se copian los dll al directorio "target"
- Se utilizan en main.cpp las funciones de "matematicas.h" y "funciones.h"

## Punto 5: Preprocesador 
- Se crea la constante PI y la macro AREA_CIRCULO en el fichero main.cpp
- Ya se estaban usando directivas #include en el programa (por ejemplo para "fmt", o para "Personas.h")

## Punto 6: Elección de un compilador
### Capturas de configuración
- Se configura en el Clion las toolchain para usar MinGw (gcc) y VisualStudio (MSVC)
![compiladorGcc.png](capturas%2FcompiladorGcc.png)
![compiladorMsvc.png](capturas%2FcompiladorMsvc.png)
- Se usa Gcc y Msvc en cmake, se muestra msvc (gcc es igual):
![usoMsvcEnCmake.png](capturas%2FusoMsvcEnCmake.png)
### Ejecución de build
- **GCC**
   - Se observan menos pasos, y tarda menos en ejecutar
```
====================[ Build | nocionesClaves | Debug-MinGW ]====================
C:\Users\Alex\AppData\Local\Programs\CLion\bin\cmake\win\x64\bin\cmake.exe --build D:\Alex\Escritorio\Universidad\Primero\Programacion\Practicas\Practica3\NocionesClave\cmake-build-debug-mingw --target nocionesClaves -j 6
[1/7] Building CXX object CMakeFiles/nocionesClaves.dir/src/classes/Persona.cpp.obj
[2/7] Building CXX object CMakeFiles/nocionesClaves.dir/src/classes/Estudiante.cpp.obj
[3/7] Building CXX object CMakeFiles/nocionesClaves.dir/src/main.cpp.obj
[4/7] Building CXX object _deps/fmt-build/CMakeFiles/fmt.dir/src/os.cc.obj
[5/7] Building CXX object _deps/fmt-build/CMakeFiles/fmt.dir/src/format.cc.obj
[6/7] Linking CXX static library _deps\fmt-build\libfmtd.a
[7/7] Linking CXX executable nocionesClaves.exe

Build finished
```
- **MSVC**
  - Se observan más pasos, tarda más, pero también parece que muestra más información
```
====================[ Build | nocionesClaves | Debug-Visual Studio ]============
C:\Users\Alex\AppData\Local\Programs\CLion\bin\cmake\win\x64\bin\cmake.exe --build D:\Alex\Escritorio\Universidad\Primero\Programacion\Practicas\Practica3\NocionesClave\cmake-build-debug-visual-studio --target nocionesClaves -j 6
[1/11] Scanning D:\Alex\Escritorio\Universidad\Primero\Programacion\Practicas\Practica3\NocionesClave\src\classes\Persona.cpp for CXX dependencies
Nota: inclusi¾n del archivo: D:\Alex\Escritorio\Universidad\Primero\Programacion\Practicas\Practica3\NocionesClave\src\classes\Persona.h
Nota: inclusi¾n del archivo:  C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\string
Nota: inclusi¾n del archivo:   C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\yvals_core.h
Nota: inclusi¾n del archivo:    C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\vcruntime.h
Nota: inclusi¾n del archivo:     C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\sal.h
Nota: inclusi¾n del archivo:      C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\concurrencysal.h
Nota: inclusi¾n del archivo:     C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\vadefs.h
Nota: inclusi¾n del archivo:    C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\xkeycheck.h
Nota: inclusi¾n del archivo:   C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\xstring
Nota: inclusi¾n del archivo:    C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_sanitizer_annotate_container.hpp
Nota: inclusi¾n del archivo:    C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_string_view.hpp
Nota: inclusi¾n del archivo:     C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\iosfwd
Nota: inclusi¾n del archivo:      C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\yvals.h
Nota: inclusi¾n del archivo:       C:\Program Files (x86)\Windows Kits\10\include\10.0.22621.0\ucrt\crtdbg.h
Nota: inclusi¾n del archivo:        C:\Program Files (x86)\Windows Kits\10\include\10.0.22621.0\ucrt\corecrt.h
Nota: inclusi¾n del archivo:        C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\vcruntime_new_debug.h
Nota: inclusi¾n del archivo:         C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\vcruntime_new.h
Nota: inclusi¾n del archivo:       C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\crtdefs.h
Nota: inclusi¾n del archivo:       C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\use_ansi.h
Nota: inclusi¾n del archivo:      C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\cstdio
Nota: inclusi¾n del archivo:       C:\Program Files (x86)\Windows Kits\10\include\10.0.22621.0\ucrt\stdio.h
Nota: inclusi¾n del archivo:        C:\Program Files (x86)\Windows Kits\10\include\10.0.22621.0\ucrt\corecrt_wstdio.h
Nota: inclusi¾n del archivo:         C:\Program Files (x86)\Windows Kits\10\include\10.0.22621.0\ucrt\corecrt_stdio_config.h
Nota: inclusi¾n del archivo:      C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\cstring
Nota: inclusi¾n del archivo:       C:\Program Files (x86)\Windows Kits\10\include\10.0.22621.0\ucrt\string.h
Nota: inclusi¾n del archivo:        C:\Program Files (x86)\Windows Kits\10\include\10.0.22621.0\ucrt\corecrt_memory.h
Nota: inclusi¾n del archivo:         C:\Program Files (x86)\Windows Kits\10\include\10.0.22621.0\ucrt\corecrt_memcpy_s.h
Nota: inclusi¾n del archivo:          C:\Program Files (x86)\Windows Kits\10\include\10.0.22621.0\ucrt\errno.h
Nota: inclusi¾n del archivo:          C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\vcruntime_string.h
Nota: inclusi¾n del archivo:        C:\Program Files (x86)\Windows Kits\10\include\10.0.22621.0\ucrt\corecrt_wstring.h
Nota: inclusi¾n del archivo:      C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\cwchar
Nota: inclusi¾n del archivo:       C:\Program Files (x86)\Windows Kits\10\include\10.0.22621.0\ucrt\wchar.h
Nota: inclusi¾n del archivo:        C:\Program Files (x86)\Windows Kits\10\include\10.0.22621.0\ucrt\corecrt_wconio.h
Nota: inclusi¾n del archivo:        C:\Program Files (x86)\Windows Kits\10\include\10.0.22621.0\ucrt\corecrt_wctype.h
Nota: inclusi¾n del archivo:        C:\Program Files (x86)\Windows Kits\10\include\10.0.22621.0\ucrt\corecrt_wdirect.h
Nota: inclusi¾n del archivo:        C:\Program Files (x86)\Windows Kits\10\include\10.0.22621.0\ucrt\corecrt_wio.h
Nota: inclusi¾n del archivo:         C:\Program Files (x86)\Windows Kits\10\include\10.0.22621.0\ucrt\corecrt_share.h
Nota: inclusi¾n del archivo:        C:\Program Files (x86)\Windows Kits\10\include\10.0.22621.0\ucrt\corecrt_wprocess.h
Nota: inclusi¾n del archivo:        C:\Program Files (x86)\Windows Kits\10\include\10.0.22621.0\ucrt\corecrt_wstdlib.h
Nota: inclusi¾n del archivo:        C:\Program Files (x86)\Windows Kits\10\include\10.0.22621.0\ucrt\corecrt_wtime.h
Nota: inclusi¾n del archivo:        C:\Program Files (x86)\Windows Kits\10\include\10.0.22621.0\ucrt\sys/stat.h
Nota: inclusi¾n del archivo:         C:\Program Files (x86)\Windows Kits\10\include\10.0.22621.0\ucrt\sys/types.h
Nota: inclusi¾n del archivo:      C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\xtr1common
Nota: inclusi¾n del archivo:     C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\xutility
Nota: inclusi¾n del archivo:      C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_iter_core.hpp
Nota: inclusi¾n del archivo:       C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\utility
Nota: inclusi¾n del archivo:        C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\initializer_list
Nota: inclusi¾n del archivo:         C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\cstddef
Nota: inclusi¾n del archivo:          C:\Program Files (x86)\Windows Kits\10\include\10.0.22621.0\ucrt\stddef.h
Nota: inclusi¾n del archivo:        C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\type_traits
Nota: inclusi¾n del archivo:         C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\cstdint
Nota: inclusi¾n del archivo:          C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\stdint.h
Nota: inclusi¾n del archivo:        C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\compare
Nota: inclusi¾n del archivo:         C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\concepts
Nota: inclusi¾n del archivo:      C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\climits
Nota: inclusi¾n del archivo:       C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\limits.h
Nota: inclusi¾n del archivo:      C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\cstdlib
Nota: inclusi¾n del archivo:       C:\Program Files (x86)\Windows Kits\10\include\10.0.22621.0\ucrt\math.h
Nota: inclusi¾n del archivo:        C:\Program Files (x86)\Windows Kits\10\include\10.0.22621.0\ucrt\corecrt_math.h
Nota: inclusi¾n del archivo:       C:\Program Files (x86)\Windows Kits\10\include\10.0.22621.0\ucrt\stdlib.h
Nota: inclusi¾n del archivo:        C:\Program Files (x86)\Windows Kits\10\include\10.0.22621.0\ucrt\corecrt_malloc.h
Nota: inclusi¾n del archivo:        C:\Program Files (x86)\Windows Kits\10\include\10.0.22621.0\ucrt\corecrt_search.h
Nota: inclusi¾n del archivo:    C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\xmemory
Nota: inclusi¾n del archivo:     C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\limits
Nota: inclusi¾n del archivo:      C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\cfloat
Nota: inclusi¾n del archivo:       C:\Program Files (x86)\Windows Kits\10\include\10.0.22621.0\ucrt\float.h
Nota: inclusi¾n del archivo:      C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\intrin0.h
Nota: inclusi¾n del archivo:       C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\intrin0.inl.h
Nota: inclusi¾n del archivo:     C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\new
Nota: inclusi¾n del archivo:      C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\exception
Nota: inclusi¾n del archivo:       C:\Program Files (x86)\Windows Kits\10\include\10.0.22621.0\ucrt\malloc.h
Nota: inclusi¾n del archivo:       C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\vcruntime_exception.h
Nota: inclusi¾n del archivo:        C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\eh.h
Nota: inclusi¾n del archivo:         C:\Program Files (x86)\Windows Kits\10\include\10.0.22621.0\ucrt\corecrt_terminate.h
Nota: inclusi¾n del archivo:     C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\xatomic.h
Nota: inclusi¾n del archivo:     C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\tuple
Nota: inclusi¾n del archivo:    C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\xpolymorphic_allocator.h
Nota: inclusi¾n del archivo:   C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\cctype
Nota: inclusi¾n del archivo:    C:\Program Files (x86)\Windows Kits\10\include\10.0.22621.0\ucrt\ctype.h
[2/11] Scanning D:\Alex\Escritorio\Universidad\Primero\Programacion\Practicas\Practica3\NocionesClave\src\classes\Estudiante.cpp for CXX dependencies
Nota: inclusi¾n del archivo: D:\Alex\Escritorio\Universidad\Primero\Programacion\Practicas\Practica3\NocionesClave\src\classes\Estudiante.h
Nota: inclusi¾n del archivo:  C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\string
Nota: inclusi¾n del archivo:   C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\yvals_core.h
Nota: inclusi¾n del archivo:    C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\vcruntime.h
Nota: inclusi¾n del archivo:     C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\sal.h
Nota: inclusi¾n del archivo:      C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\concurrencysal.h
Nota: inclusi¾n del archivo:     C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\vadefs.h
Nota: inclusi¾n del archivo:    C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\xkeycheck.h
Nota: inclusi¾n del archivo:   C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\xstring
Nota: inclusi¾n del archivo:    C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_sanitizer_annotate_container.hpp
Nota: inclusi¾n del archivo:    C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_string_view.hpp
Nota: inclusi¾n del archivo:     C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\iosfwd
Nota: inclusi¾n del archivo:      C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\yvals.h
Nota: inclusi¾n del archivo:       C:\Program Files (x86)\Windows Kits\10\include\10.0.22621.0\ucrt\crtdbg.h
Nota: inclusi¾n del archivo:        C:\Program Files (x86)\Windows Kits\10\include\10.0.22621.0\ucrt\corecrt.h
Nota: inclusi¾n del archivo:        C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\vcruntime_new_debug.h
Nota: inclusi¾n del archivo:         C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\vcruntime_new.h
Nota: inclusi¾n del archivo:       C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\crtdefs.h
Nota: inclusi¾n del archivo:       C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\use_ansi.h
Nota: inclusi¾n del archivo:      C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\cstdio
Nota: inclusi¾n del archivo:       C:\Program Files (x86)\Windows Kits\10\include\10.0.22621.0\ucrt\stdio.h
Nota: inclusi¾n del archivo:        C:\Program Files (x86)\Windows Kits\10\include\10.0.22621.0\ucrt\corecrt_wstdio.h
Nota: inclusi¾n del archivo:         C:\Program Files (x86)\Windows Kits\10\include\10.0.22621.0\ucrt\corecrt_stdio_config.h
Nota: inclusi¾n del archivo:      C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\cstring
Nota: inclusi¾n del archivo:       C:\Program Files (x86)\Windows Kits\10\include\10.0.22621.0\ucrt\string.h
Nota: inclusi¾n del archivo:        C:\Program Files (x86)\Windows Kits\10\include\10.0.22621.0\ucrt\corecrt_memory.h
Nota: inclusi¾n del archivo:         C:\Program Files (x86)\Windows Kits\10\include\10.0.22621.0\ucrt\corecrt_memcpy_s.h
Nota: inclusi¾n del archivo:          C:\Program Files (x86)\Windows Kits\10\include\10.0.22621.0\ucrt\errno.h
Nota: inclusi¾n del archivo:          C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\vcruntime_string.h
Nota: inclusi¾n del archivo:        C:\Program Files (x86)\Windows Kits\10\include\10.0.22621.0\ucrt\corecrt_wstring.h
Nota: inclusi¾n del archivo:      C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\cwchar
Nota: inclusi¾n del archivo:       C:\Program Files (x86)\Windows Kits\10\include\10.0.22621.0\ucrt\wchar.h
Nota: inclusi¾n del archivo:        C:\Program Files (x86)\Windows Kits\10\include\10.0.22621.0\ucrt\corecrt_wconio.h
Nota: inclusi¾n del archivo:        C:\Program Files (x86)\Windows Kits\10\include\10.0.22621.0\ucrt\corecrt_wctype.h
Nota: inclusi¾n del archivo:        C:\Program Files (x86)\Windows Kits\10\include\10.0.22621.0\ucrt\corecrt_wdirect.h
Nota: inclusi¾n del archivo:        C:\Program Files (x86)\Windows Kits\10\include\10.0.22621.0\ucrt\corecrt_wio.h
Nota: inclusi¾n del archivo:         C:\Program Files (x86)\Windows Kits\10\include\10.0.22621.0\ucrt\corecrt_share.h
Nota: inclusi¾n del archivo:        C:\Program Files (x86)\Windows Kits\10\include\10.0.22621.0\ucrt\corecrt_wprocess.h
Nota: inclusi¾n del archivo:        C:\Program Files (x86)\Windows Kits\10\include\10.0.22621.0\ucrt\corecrt_wstdlib.h
Nota: inclusi¾n del archivo:        C:\Program Files (x86)\Windows Kits\10\include\10.0.22621.0\ucrt\corecrt_wtime.h
Nota: inclusi¾n del archivo:        C:\Program Files (x86)\Windows Kits\10\include\10.0.22621.0\ucrt\sys/stat.h
Nota: inclusi¾n del archivo:         C:\Program Files (x86)\Windows Kits\10\include\10.0.22621.0\ucrt\sys/types.h
Nota: inclusi¾n del archivo:      C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\xtr1common
Nota: inclusi¾n del archivo:     C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\xutility
Nota: inclusi¾n del archivo:      C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_iter_core.hpp
Nota: inclusi¾n del archivo:       C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\utility
Nota: inclusi¾n del archivo:        C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\initializer_list
Nota: inclusi¾n del archivo:         C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\cstddef
Nota: inclusi¾n del archivo:          C:\Program Files (x86)\Windows Kits\10\include\10.0.22621.0\ucrt\stddef.h
Nota: inclusi¾n del archivo:        C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\type_traits
Nota: inclusi¾n del archivo:         C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\cstdint
Nota: inclusi¾n del archivo:          C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\stdint.h
Nota: inclusi¾n del archivo:        C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\compare
Nota: inclusi¾n del archivo:         C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\concepts
Nota: inclusi¾n del archivo:      C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\climits
Nota: inclusi¾n del archivo:       C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\limits.h
Nota: inclusi¾n del archivo:      C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\cstdlib
Nota: inclusi¾n del archivo:       C:\Program Files (x86)\Windows Kits\10\include\10.0.22621.0\ucrt\math.h
Nota: inclusi¾n del archivo:        C:\Program Files (x86)\Windows Kits\10\include\10.0.22621.0\ucrt\corecrt_math.h
Nota: inclusi¾n del archivo:       C:\Program Files (x86)\Windows Kits\10\include\10.0.22621.0\ucrt\stdlib.h
Nota: inclusi¾n del archivo:        C:\Program Files (x86)\Windows Kits\10\include\10.0.22621.0\ucrt\corecrt_malloc.h
Nota: inclusi¾n del archivo:        C:\Program Files (x86)\Windows Kits\10\include\10.0.22621.0\ucrt\corecrt_search.h
Nota: inclusi¾n del archivo:    C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\xmemory
Nota: inclusi¾n del archivo:     C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\limits
Nota: inclusi¾n del archivo:      C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\cfloat
Nota: inclusi¾n del archivo:       C:\Program Files (x86)\Windows Kits\10\include\10.0.22621.0\ucrt\float.h
Nota: inclusi¾n del archivo:      C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\intrin0.h
Nota: inclusi¾n del archivo:       C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\intrin0.inl.h
Nota: inclusi¾n del archivo:     C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\new
Nota: inclusi¾n del archivo:      C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\exception
Nota: inclusi¾n del archivo:       C:\Program Files (x86)\Windows Kits\10\include\10.0.22621.0\ucrt\malloc.h
Nota: inclusi¾n del archivo:       C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\vcruntime_exception.h
Nota: inclusi¾n del archivo:        C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\eh.h
Nota: inclusi¾n del archivo:         C:\Program Files (x86)\Windows Kits\10\include\10.0.22621.0\ucrt\corecrt_terminate.h
Nota: inclusi¾n del archivo:     C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\xatomic.h
Nota: inclusi¾n del archivo:     C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\tuple
Nota: inclusi¾n del archivo:    C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\xpolymorphic_allocator.h
Nota: inclusi¾n del archivo:   C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\cctype
Nota: inclusi¾n del archivo:    C:\Program Files (x86)\Windows Kits\10\include\10.0.22621.0\ucrt\ctype.h
Nota: inclusi¾n del archivo:  D:\Alex\Escritorio\Universidad\Primero\Programacion\Practicas\Practica3\NocionesClave\src\classes\Persona.h
Nota: inclusi¾n del archivo: C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\iostream
Nota: inclusi¾n del archivo:  C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\istream
Nota: inclusi¾n del archivo:   C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\ostream
Nota: inclusi¾n del archivo:    C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\ios
Nota: inclusi¾n del archivo:     C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\xlocnum
Nota: inclusi¾n del archivo:      C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\cmath
Nota: inclusi¾n del archivo:      C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\iterator
Nota: inclusi¾n del archivo:      C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\streambuf
Nota: inclusi¾n del archivo:       C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\xiosbase
Nota: inclusi¾n del archivo:        C:\Program Files (x86)\Windows Kits\10\include\10.0.22621.0\ucrt\share.h
Nota: inclusi¾n del archivo:        C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\system_error
Nota: inclusi¾n del archivo:         C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_system_error_abi.hpp
Nota: inclusi¾n del archivo:         C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\cerrno
Nota: inclusi¾n del archivo:         C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\stdexcept
Nota: inclusi¾n del archivo:         C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\xcall_once.h
Nota: inclusi¾n del archivo:         C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\xerrc.h
Nota: inclusi¾n del archivo:         C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\atomic
Nota: inclusi¾n del archivo:          C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\xatomic_wait.h
Nota: inclusi¾n del archivo:          C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\xthreads.h
Nota: inclusi¾n del archivo:           C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_threads_core.hpp
Nota: inclusi¾n del archivo:           C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\xtimec.h
Nota: inclusi¾n del archivo:            C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\ctime
Nota: inclusi¾n del archivo:             C:\Program Files (x86)\Windows Kits\10\include\10.0.22621.0\ucrt\time.h
Nota: inclusi¾n del archivo:        C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\xlocale
Nota: inclusi¾n del archivo:         C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\memory
Nota: inclusi¾n del archivo:          C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\typeinfo
Nota: inclusi¾n del archivo:           C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\vcruntime_typeinfo.h
Nota: inclusi¾n del archivo:         C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\xfacet
Nota: inclusi¾n del archivo:         C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\xlocinfo
Nota: inclusi¾n del archivo:          C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_xlocinfo_types.hpp
Nota: inclusi¾n del archivo:          C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\clocale
Nota: inclusi¾n del archivo:           C:\Program Files (x86)\Windows Kits\10\include\10.0.22621.0\ucrt\locale.h
[3/11] Scanning D:\Alex\Escritorio\Universidad\Primero\Programacion\Practicas\Practica3\NocionesClave\src\main.cpp for CXX dependencies
Nota: inclusi¾n del archivo: C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\iostream
Nota: inclusi¾n del archivo:  C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\yvals_core.h
Nota: inclusi¾n del archivo:   C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\vcruntime.h
Nota: inclusi¾n del archivo:    C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\sal.h
Nota: inclusi¾n del archivo:     C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\concurrencysal.h
Nota: inclusi¾n del archivo:    C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\vadefs.h
Nota: inclusi¾n del archivo:   C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\xkeycheck.h
Nota: inclusi¾n del archivo:  C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\istream
Nota: inclusi¾n del archivo:   C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\ostream
Nota: inclusi¾n del archivo:    C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\ios
Nota: inclusi¾n del archivo:     C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\xlocnum
Nota: inclusi¾n del archivo:      C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\cfloat
Nota: inclusi¾n del archivo:       C:\Program Files (x86)\Windows Kits\10\include\10.0.22621.0\ucrt\float.h
Nota: inclusi¾n del archivo:        C:\Program Files (x86)\Windows Kits\10\include\10.0.22621.0\ucrt\corecrt.h
Nota: inclusi¾n del archivo:      C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\climits
Nota: inclusi¾n del archivo:       C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\limits.h
Nota: inclusi¾n del archivo:      C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\cmath
Nota: inclusi¾n del archivo:       C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\yvals.h
Nota: inclusi¾n del archivo:        C:\Program Files (x86)\Windows Kits\10\include\10.0.22621.0\ucrt\crtdbg.h
Nota: inclusi¾n del archivo:         C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\vcruntime_new_debug.h
Nota: inclusi¾n del archivo:          C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\vcruntime_new.h
Nota: inclusi¾n del archivo:        C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\crtdefs.h
Nota: inclusi¾n del archivo:        C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\use_ansi.h
Nota: inclusi¾n del archivo:       C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\cstdlib
Nota: inclusi¾n del archivo:        C:\Program Files (x86)\Windows Kits\10\include\10.0.22621.0\ucrt\math.h
Nota: inclusi¾n del archivo:         C:\Program Files (x86)\Windows Kits\10\include\10.0.22621.0\ucrt\corecrt_math.h
Nota: inclusi¾n del archivo:        C:\Program Files (x86)\Windows Kits\10\include\10.0.22621.0\ucrt\stdlib.h
Nota: inclusi¾n del archivo:         C:\Program Files (x86)\Windows Kits\10\include\10.0.22621.0\ucrt\corecrt_malloc.h
Nota: inclusi¾n del archivo:         C:\Program Files (x86)\Windows Kits\10\include\10.0.22621.0\ucrt\corecrt_search.h
Nota: inclusi¾n del archivo:          C:\Program Files (x86)\Windows Kits\10\include\10.0.22621.0\ucrt\stddef.h
Nota: inclusi¾n del archivo:         C:\Program Files (x86)\Windows Kits\10\include\10.0.22621.0\ucrt\corecrt_wstdlib.h
Nota: inclusi¾n del archivo:       C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\xtr1common
Nota: inclusi¾n del archivo:       C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\intrin0.h
Nota: inclusi¾n del archivo:        C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\intrin0.inl.h
Nota: inclusi¾n del archivo:       C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\type_traits
Nota: inclusi¾n del archivo:        C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\cstddef
Nota: inclusi¾n del archivo:        C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\cstdint
Nota: inclusi¾n del archivo:         C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\stdint.h
Nota: inclusi¾n del archivo:      C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\cstdio
Nota: inclusi¾n del archivo:       C:\Program Files (x86)\Windows Kits\10\include\10.0.22621.0\ucrt\stdio.h
Nota: inclusi¾n del archivo:        C:\Program Files (x86)\Windows Kits\10\include\10.0.22621.0\ucrt\corecrt_wstdio.h
Nota: inclusi¾n del archivo:         C:\Program Files (x86)\Windows Kits\10\include\10.0.22621.0\ucrt\corecrt_stdio_config.h
Nota: inclusi¾n del archivo:      C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\iterator
Nota: inclusi¾n del archivo:       C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\iosfwd
Nota: inclusi¾n del archivo:        C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\cstring
Nota: inclusi¾n del archivo:         C:\Program Files (x86)\Windows Kits\10\include\10.0.22621.0\ucrt\string.h
Nota: inclusi¾n del archivo:          C:\Program Files (x86)\Windows Kits\10\include\10.0.22621.0\ucrt\corecrt_memory.h
Nota: inclusi¾n del archivo:           C:\Program Files (x86)\Windows Kits\10\include\10.0.22621.0\ucrt\corecrt_memcpy_s.h
Nota: inclusi¾n del archivo:            C:\Program Files (x86)\Windows Kits\10\include\10.0.22621.0\ucrt\errno.h
Nota: inclusi¾n del archivo:            C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\vcruntime_string.h
Nota: inclusi¾n del archivo:          C:\Program Files (x86)\Windows Kits\10\include\10.0.22621.0\ucrt\corecrt_wstring.h
Nota: inclusi¾n del archivo:        C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\cwchar
Nota: inclusi¾n del archivo:         C:\Program Files (x86)\Windows Kits\10\include\10.0.22621.0\ucrt\wchar.h
Nota: inclusi¾n del archivo:          C:\Program Files (x86)\Windows Kits\10\include\10.0.22621.0\ucrt\corecrt_wconio.h
Nota: inclusi¾n del archivo:          C:\Program Files (x86)\Windows Kits\10\include\10.0.22621.0\ucrt\corecrt_wctype.h
Nota: inclusi¾n del archivo:          C:\Program Files (x86)\Windows Kits\10\include\10.0.22621.0\ucrt\corecrt_wdirect.h
Nota: inclusi¾n del archivo:          C:\Program Files (x86)\Windows Kits\10\include\10.0.22621.0\ucrt\corecrt_wio.h
Nota: inclusi¾n del archivo:           C:\Program Files (x86)\Windows Kits\10\include\10.0.22621.0\ucrt\corecrt_share.h
Nota: inclusi¾n del archivo:          C:\Program Files (x86)\Windows Kits\10\include\10.0.22621.0\ucrt\corecrt_wprocess.h
Nota: inclusi¾n del archivo:          C:\Program Files (x86)\Windows Kits\10\include\10.0.22621.0\ucrt\corecrt_wtime.h
Nota: inclusi¾n del archivo:          C:\Program Files (x86)\Windows Kits\10\include\10.0.22621.0\ucrt\sys/stat.h
Nota: inclusi¾n del archivo:           C:\Program Files (x86)\Windows Kits\10\include\10.0.22621.0\ucrt\sys/types.h
Nota: inclusi¾n del archivo:       C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\xutility
Nota: inclusi¾n del archivo:        C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_iter_core.hpp
Nota: inclusi¾n del archivo:         C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\utility
Nota: inclusi¾n del archivo:          C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\initializer_list
Nota: inclusi¾n del archivo:          C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\compare
Nota: inclusi¾n del archivo:           C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\concepts
Nota: inclusi¾n del archivo:      C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\streambuf
Nota: inclusi¾n del archivo:       C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\xiosbase
Nota: inclusi¾n del archivo:        C:\Program Files (x86)\Windows Kits\10\include\10.0.22621.0\ucrt\share.h
Nota: inclusi¾n del archivo:        C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\system_error
Nota: inclusi¾n del archivo:         C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_system_error_abi.hpp
Nota: inclusi¾n del archivo:         C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\cerrno
Nota: inclusi¾n del archivo:         C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\stdexcept
Nota: inclusi¾n del archivo:          C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\exception
Nota: inclusi¾n del archivo:           C:\Program Files (x86)\Windows Kits\10\include\10.0.22621.0\ucrt\malloc.h
Nota: inclusi¾n del archivo:           C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\vcruntime_exception.h
Nota: inclusi¾n del archivo:            C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\eh.h
Nota: inclusi¾n del archivo:             C:\Program Files (x86)\Windows Kits\10\include\10.0.22621.0\ucrt\corecrt_terminate.h
Nota: inclusi¾n del archivo:          C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\xstring
Nota: inclusi¾n del archivo:           C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_sanitizer_annotate_container.hpp
Nota: inclusi¾n del archivo:           C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_string_view.hpp
Nota: inclusi¾n del archivo:           C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\xmemory
Nota: inclusi¾n del archivo:            C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\limits
Nota: inclusi¾n del archivo:            C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\new
Nota: inclusi¾n del archivo:            C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\xatomic.h
Nota: inclusi¾n del archivo:            C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\tuple
Nota: inclusi¾n del archivo:           C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\xpolymorphic_allocator.h
Nota: inclusi¾n del archivo:         C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\xcall_once.h
Nota: inclusi¾n del archivo:         C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\xerrc.h
Nota: inclusi¾n del archivo:         C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\atomic
Nota: inclusi¾n del archivo:          C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\xatomic_wait.h
Nota: inclusi¾n del archivo:          C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\xthreads.h
Nota: inclusi¾n del archivo:           C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_threads_core.hpp
Nota: inclusi¾n del archivo:           C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\xtimec.h
Nota: inclusi¾n del archivo:            C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\ctime
Nota: inclusi¾n del archivo:             C:\Program Files (x86)\Windows Kits\10\include\10.0.22621.0\ucrt\time.h
Nota: inclusi¾n del archivo:        C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\xlocale
Nota: inclusi¾n del archivo:         C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\memory
Nota: inclusi¾n del archivo:          C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\typeinfo
Nota: inclusi¾n del archivo:           C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\vcruntime_typeinfo.h
Nota: inclusi¾n del archivo:         C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\xfacet
Nota: inclusi¾n del archivo:         C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\xlocinfo
Nota: inclusi¾n del archivo:          C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_xlocinfo_types.hpp
Nota: inclusi¾n del archivo:          C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\cctype
Nota: inclusi¾n del archivo:           C:\Program Files (x86)\Windows Kits\10\include\10.0.22621.0\ucrt\ctype.h
Nota: inclusi¾n del archivo:          C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\clocale
Nota: inclusi¾n del archivo:           C:\Program Files (x86)\Windows Kits\10\include\10.0.22621.0\ucrt\locale.h
Nota: inclusi¾n del archivo: D:\Alex\Escritorio\Universidad\Primero\Programacion\Practicas\Practica3\NocionesClave\cmake-build-debug-visual-studio\_deps\fmt-src\include\fmt/core.h
Nota: inclusi¾n del archivo:  C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\functional
Nota: inclusi¾n del archivo:   C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\unordered_map
Nota: inclusi¾n del archivo:    C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\xhash
Nota: inclusi¾n del archivo:     C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\list
Nota: inclusi¾n del archivo:     C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\vector
Nota: inclusi¾n del archivo:      C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_bit_utils.hpp
Nota: inclusi¾n del archivo:     C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\xbit_ops.h
Nota: inclusi¾n del archivo:     C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\xnode_handle.h
Nota: inclusi¾n del archivo:  C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\string
Nota: inclusi¾n del archivo:  C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\string_view
Nota: inclusi¾n del archivo: D:\Alex\Escritorio\Universidad\Primero\Programacion\Practicas\Practica3\NocionesClave\include\funciones.h
Nota: inclusi¾n del archivo: D:\Alex\Escritorio\Universidad\Primero\Programacion\Practicas\Practica3\NocionesClave\include\matematicas.h
Nota: inclusi¾n del archivo: D:\Alex\Escritorio\Universidad\Primero\Programacion\Practicas\Practica3\NocionesClave\src\classes/Estudiante.h
Nota: inclusi¾n del archivo:  D:\Alex\Escritorio\Universidad\Primero\Programacion\Practicas\Practica3\NocionesClave\src\classes\Persona.h
[4/11] Generating CXX dyndep file CMakeFiles\nocionesClaves.dir\CXX.dd
[5/11] Building CXX object _deps\fmt-build\CMakeFiles\fmt.dir\src\os.cc.obj
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\xutility(1281): warning C4996: 'stdext::checked_array_iterator<T *>': warning STL4043: stdext::checked_array_iterator, stdext::unchecked_array_iterator, and related factory functions are non-Standard extensions and will be removed in the future. std::span (since C++20) and gsl::span can be used instead. You can define _SILENCE_STDEXT_ARR_ITERS_DEPRECATION_WARNING or _SILENCE_ALL_MS_EXT_DEPRECATION_WARNINGS to suppress this warning.
        with
        [
            T=char
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\iterator(1493): note: vea la declaración de 'stdext::checked_array_iterator'
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\xutility(1281): note: el contexto de creación de instancias de la plantilla (el más antiguo primero) es
D:\Alex\Escritorio\Universidad\Primero\Programacion\Practicas\Practica3\NocionesClave\cmake-build-debug-visual-studio\_deps\fmt-src\include\fmt\format.h(1921): note: Vea la referencia a la creación de una instancia de clase plantilla "fmt::v7::basic_memory_buffer<char,500,std::allocator<char>>" que se está compilando
D:\Alex\Escritorio\Universidad\Primero\Programacion\Practicas\Practica3\NocionesClave\cmake-build-debug-visual-studio\_deps\fmt-src\include\fmt\format.h(741): note: al compilar la función del miembro clase plantilla "void fmt::v7::basic_memory_buffer<char,500,std::allocator<char>>::grow(size_t)"
D:\Alex\Escritorio\Universidad\Primero\Programacion\Practicas\Practica3\NocionesClave\cmake-build-debug-visual-studio\_deps\fmt-src\include\fmt\format.h(752): note: Vea la referencia a la creación de una instancia de la función plantilla "_NoThrowFwdIt std::uninitialized_copy<T*,stdext::checked_array_iterator<T *>>(const _InIt,const _InIt,_NoThrowFwdIt)" que se está compilando
        with
        [
            _NoThrowFwdIt=stdext::checked_array_iterator<char *>,
            T=char,
            _InIt=char *
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\xmemory(1897): note: Vea la referencia a la creación de una instancia de la función plantilla "decltype(auto) std::_Get_unwrapped_n<_NoThrowFwdIt&,__int64>(_Iter,const _Diff)" que se está compilando
        with
        [
            _NoThrowFwdIt=stdext::checked_array_iterator<char *>,
            _Iter=stdext::checked_array_iterator<char *> &,
            _Diff=__int64
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\xutility(1386): note: vea la referencia a la plantilla de variables 'const bool _Unwrappable_for_offset_v<stdext::checked_array_iterator<char *> &>' que se está compilando
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\xutility(1380): note: vea la referencia a la plantilla de variables 'const bool _Unwrappable_v<stdext::checked_array_iterator<char *> &,void>' que se está compilando
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\xutility(1309): note: vea la referencia a la plantilla de variables 'const bool _Allow_inheriting_unwrap_v<stdext::checked_array_iterator<char *>,void>' que se está compilando
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_iter_core.hpp(190): warning C4996: 'stdext::checked_array_iterator<T *>': warning STL4043: stdext::checked_array_iterator, stdext::unchecked_array_iterator, and related factory functions are non-Standard extensions and will be removed in the future. std::span (since C++20) and gsl::span can be used instead. You can define _SILENCE_STDEXT_ARR_ITERS_DEPRECATION_WARNING or _SILENCE_ALL_MS_EXT_DEPRECATION_WARNINGS to suppress this warning.
        with
        [
            T=char
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\iterator(1493): note: vea la declaración de 'stdext::checked_array_iterator'
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_iter_core.hpp(190): note: el contexto de creación de instancias de la plantilla (el más antiguo primero) es
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\xutility(1376): note: Vea la referencia a la creación de una instancia de alias plantilla "std::_Iter_diff_t<stdext::checked_array_iterator<T *>>" que se está compilando
        with
        [
            T=char
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\xutility(1186): note: Vea la referencia a la creación de una instancia de alias plantilla "std::iter_difference_t<stdext::checked_array_iterator<T *>>" que se está compilando
        with
        [
            T=char
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_iter_core.hpp(120): note: al evaluar el concepto "_Is_from_primary<std::iterator_traits<stdext::checked_array_iterator<char *> > >"
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_iter_core.hpp(114): note: Vea la referencia a la creación de una instancia de clase plantilla "std::iterator_traits<stdext::checked_array_iterator<T *>>" que se está compilando
        with
        [
            T=char
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_iter_core.hpp(373): note: Vea la referencia a la creación de una instancia de clase plantilla "std::_Iterator_traits_base<_Ty>" que se está compilando
        with
        [
            _Ty=stdext::checked_array_iterator<char *>
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_iter_core.hpp(190): warning C4996: 'stdext::checked_array_iterator<T *>::iterator_category': warning STL4043: stdext::checked_array_iterator, stdext::unchecked_array_iterator, and related factory functions are non-Standard extensions and will be removed in the future. std::span (since C++20) and gsl::span can be used instead. You can define _SILENCE_STDEXT_ARR_ITERS_DEPRECATION_WARNING or _SILENCE_ALL_MS_EXT_DEPRECATION_WARNINGS to suppress this warning.
        with
        [
            T=char
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_iter_core.hpp(191): warning C4996: 'stdext::checked_array_iterator<T *>': warning STL4043: stdext::checked_array_iterator, stdext::unchecked_array_iterator, and related factory functions are non-Standard extensions and will be removed in the future. std::span (since C++20) and gsl::span can be used instead. You can define _SILENCE_STDEXT_ARR_ITERS_DEPRECATION_WARNING or _SILENCE_ALL_MS_EXT_DEPRECATION_WARNINGS to suppress this warning.
        with
        [
            T=char
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\iterator(1493): note: vea la declaración de 'stdext::checked_array_iterator'
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_iter_core.hpp(191): warning C4996: 'stdext::checked_array_iterator<T *>::value_type': warning STL4043: stdext::checked_array_iterator, stdext::unchecked_array_iterator, and related factory functions are non-Standard extensions and will be removed in the future. std::span (since C++20) and gsl::span can be used instead. You can define _SILENCE_STDEXT_ARR_ITERS_DEPRECATION_WARNING or _SILENCE_ALL_MS_EXT_DEPRECATION_WARNINGS to suppress this warning.
        with
        [
            T=char
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_iter_core.hpp(192): warning C4996: 'stdext::checked_array_iterator<T *>': warning STL4043: stdext::checked_array_iterator, stdext::unchecked_array_iterator, and related factory functions are non-Standard extensions and will be removed in the future. std::span (since C++20) and gsl::span can be used instead. You can define _SILENCE_STDEXT_ARR_ITERS_DEPRECATION_WARNING or _SILENCE_ALL_MS_EXT_DEPRECATION_WARNINGS to suppress this warning.
        with
        [
            T=char
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\iterator(1493): note: vea la declaración de 'stdext::checked_array_iterator'
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_iter_core.hpp(192): warning C4996: 'stdext::checked_array_iterator<T *>::difference_type': warning STL4043: stdext::checked_array_iterator, stdext::unchecked_array_iterator, and related factory functions are non-Standard extensions and will be removed in the future. std::span (since C++20) and gsl::span can be used instead. You can define _SILENCE_STDEXT_ARR_ITERS_DEPRECATION_WARNING or _SILENCE_ALL_MS_EXT_DEPRECATION_WARNINGS to suppress this warning.
        with
        [
            T=char
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_iter_core.hpp(179): warning C4996: 'stdext::checked_array_iterator<T *>': warning STL4043: stdext::checked_array_iterator, stdext::unchecked_array_iterator, and related factory functions are non-Standard extensions and will be removed in the future. std::span (since C++20) and gsl::span can be used instead. You can define _SILENCE_STDEXT_ARR_ITERS_DEPRECATION_WARNING or _SILENCE_ALL_MS_EXT_DEPRECATION_WARNINGS to suppress this warning.
        with
        [
            T=char
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\iterator(1493): note: vea la declaración de 'stdext::checked_array_iterator'
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_iter_core.hpp(179): note: el contexto de creación de instancias de la plantilla (el más antiguo primero) es
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_iter_core.hpp(193): note: Vea la referencia a la creación de una instancia de alias plantilla "std::_Old_iter_traits_pointer<true>::_Apply<_It>" que se está compilando
        with
        [
            _It=stdext::checked_array_iterator<char *>
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_iter_core.hpp(194): warning C4996: 'stdext::checked_array_iterator<T *>': warning STL4043: stdext::checked_array_iterator, stdext::unchecked_array_iterator, and related factory functions are non-Standard extensions and will be removed in the future. std::span (since C++20) and gsl::span can be used instead. You can define _SILENCE_STDEXT_ARR_ITERS_DEPRECATION_WARNING or _SILENCE_ALL_MS_EXT_DEPRECATION_WARNINGS to suppress this warning.
        with
        [
            T=char
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\iterator(1493): note: vea la declaración de 'stdext::checked_array_iterator'
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_iter_core.hpp(194): warning C4996: 'stdext::checked_array_iterator<T *>::reference': warning STL4043: stdext::checked_array_iterator, stdext::unchecked_array_iterator, and related factory functions are non-Standard extensions and will be removed in the future. std::span (since C++20) and gsl::span can be used instead. You can define _SILENCE_STDEXT_ARR_ITERS_DEPRECATION_WARNING or _SILENCE_ALL_MS_EXT_DEPRECATION_WARNINGS to suppress this warning.
        with
        [
            T=char
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_iter_core.hpp(99): warning C4996: 'stdext::checked_array_iterator<T *>': warning STL4043: stdext::checked_array_iterator, stdext::unchecked_array_iterator, and related factory functions are non-Standard extensions and will be removed in the future. std::span (since C++20) and gsl::span can be used instead. You can define _SILENCE_STDEXT_ARR_ITERS_DEPRECATION_WARNING or _SILENCE_ALL_MS_EXT_DEPRECATION_WARNINGS to suppress this warning.
        with
        [
            T=char
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\iterator(1493): note: vea la declaración de 'stdext::checked_array_iterator'
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_iter_core.hpp(99): note: el contexto de creación de instancias de la plantilla (el más antiguo primero) es
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_iter_core.hpp(121): note: Vea la referencia a la creación de una instancia de clase plantilla "std::incrementable_traits<stdext::checked_array_iterator<T *>>" que se está compilando
        with
        [
            T=char
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_iter_core.hpp(99): warning C4996: 'stdext::checked_array_iterator<T *>::difference_type': warning STL4043: stdext::checked_array_iterator, stdext::unchecked_array_iterator, and related factory functions are non-Standard extensions and will be removed in the future. std::span (since C++20) and gsl::span can be used instead. You can define _SILENCE_STDEXT_ARR_ITERS_DEPRECATION_WARNING or _SILENCE_ALL_MS_EXT_DEPRECATION_WARNINGS to suppress this warning.
        with
        [
            T=char
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\xutility(1397): warning C4996: 'stdext::checked_array_iterator<T *>::_Verify_offset': warning STL4043: stdext::checked_array_iterator, stdext::unchecked_array_iterator, and related factory functions are non-Standard extensions and will be removed in the future. std::span (since C++20) and gsl::span can be used instead. You can define _SILENCE_STDEXT_ARR_ITERS_DEPRECATION_WARNING or _SILENCE_ALL_MS_EXT_DEPRECATION_WARNINGS to suppress this warning.
        with
        [
            T=char
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\xutility(1398): warning C4996: 'stdext::checked_array_iterator<T *>::_Unwrapped': warning STL4043: stdext::checked_array_iterator, stdext::unchecked_array_iterator, and related factory functions are non-Standard extensions and will be removed in the future. std::span (since C++20) and gsl::span can be used instead. You can define _SILENCE_STDEXT_ARR_ITERS_DEPRECATION_WARNING or _SILENCE_ALL_MS_EXT_DEPRECATION_WARNINGS to suppress this warning.
        with
        [
            T=char
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\xutility(1281): warning C4996: 'stdext::checked_array_iterator<T *>': warning STL4043: stdext::checked_array_iterator, stdext::unchecked_array_iterator, and related factory functions are non-Standard extensions and will be removed in the future. std::span (since C++20) and gsl::span can be used instead. You can define _SILENCE_STDEXT_ARR_ITERS_DEPRECATION_WARNING or _SILENCE_ALL_MS_EXT_DEPRECATION_WARNINGS to suppress this warning.
        with
        [
            T=wchar_t
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\iterator(1493): note: vea la declaración de 'stdext::checked_array_iterator'
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\xutility(1281): note: el contexto de creación de instancias de la plantilla (el más antiguo primero) es
D:\Alex\Escritorio\Universidad\Primero\Programacion\Practicas\Practica3\NocionesClave\cmake-build-debug-visual-studio\_deps\fmt-src\include\fmt\format.h(1132): note: Vea la referencia a la creación de una instancia de clase plantilla "fmt::v7::basic_memory_buffer<wchar_t,500,std::allocator<wchar_t>>" que se está compilando
D:\Alex\Escritorio\Universidad\Primero\Programacion\Practicas\Practica3\NocionesClave\cmake-build-debug-visual-studio\_deps\fmt-src\include\fmt\format.h(741): note: al compilar la función del miembro clase plantilla "void fmt::v7::basic_memory_buffer<wchar_t,500,std::allocator<wchar_t>>::grow(size_t)"
D:\Alex\Escritorio\Universidad\Primero\Programacion\Practicas\Practica3\NocionesClave\cmake-build-debug-visual-studio\_deps\fmt-src\include\fmt\format.h(752): note: Vea la referencia a la creación de una instancia de la función plantilla "_NoThrowFwdIt std::uninitialized_copy<T*,stdext::checked_array_iterator<T *>>(const _InIt,const _InIt,_NoThrowFwdIt)" que se está compilando
        with
        [
            _NoThrowFwdIt=stdext::checked_array_iterator<wchar_t *>,
            T=wchar_t,
            _InIt=wchar_t *
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\xmemory(1897): note: Vea la referencia a la creación de una instancia de la función plantilla "decltype(auto) std::_Get_unwrapped_n<_NoThrowFwdIt&,__int64>(_Iter,const _Diff)" que se está compilando
        with
        [
            _NoThrowFwdIt=stdext::checked_array_iterator<wchar_t *>,
            _Iter=stdext::checked_array_iterator<wchar_t *> &,
            _Diff=__int64
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\xutility(1386): note: vea la referencia a la plantilla de variables 'const bool _Unwrappable_for_offset_v<stdext::checked_array_iterator<wchar_t *> &>' que se está compilando
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\xutility(1380): note: vea la referencia a la plantilla de variables 'const bool _Unwrappable_v<stdext::checked_array_iterator<wchar_t *> &,void>' que se está compilando
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\xutility(1309): note: vea la referencia a la plantilla de variables 'const bool _Allow_inheriting_unwrap_v<stdext::checked_array_iterator<wchar_t *>,void>' que se está compilando
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_iter_core.hpp(190): warning C4996: 'stdext::checked_array_iterator<T *>': warning STL4043: stdext::checked_array_iterator, stdext::unchecked_array_iterator, and related factory functions are non-Standard extensions and will be removed in the future. std::span (since C++20) and gsl::span can be used instead. You can define _SILENCE_STDEXT_ARR_ITERS_DEPRECATION_WARNING or _SILENCE_ALL_MS_EXT_DEPRECATION_WARNINGS to suppress this warning.
        with
        [
            T=wchar_t
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\iterator(1493): note: vea la declaración de 'stdext::checked_array_iterator'
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_iter_core.hpp(190): note: el contexto de creación de instancias de la plantilla (el más antiguo primero) es
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\xutility(1376): note: Vea la referencia a la creación de una instancia de alias plantilla "std::_Iter_diff_t<stdext::checked_array_iterator<T *>>" que se está compilando
        with
        [
            T=wchar_t
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\xutility(1186): note: Vea la referencia a la creación de una instancia de alias plantilla "std::iter_difference_t<stdext::checked_array_iterator<T *>>" que se está compilando
        with
        [
            T=wchar_t
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_iter_core.hpp(120): note: al evaluar el concepto "_Is_from_primary<std::iterator_traits<stdext::checked_array_iterator<wchar_t *> > >"
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_iter_core.hpp(114): note: Vea la referencia a la creación de una instancia de clase plantilla "std::iterator_traits<stdext::checked_array_iterator<T *>>" que se está compilando
        with
        [
            T=wchar_t
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_iter_core.hpp(373): note: Vea la referencia a la creación de una instancia de clase plantilla "std::_Iterator_traits_base<_Ty>" que se está compilando
        with
        [
            _Ty=stdext::checked_array_iterator<wchar_t *>
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_iter_core.hpp(190): warning C4996: 'stdext::checked_array_iterator<T *>::iterator_category': warning STL4043: stdext::checked_array_iterator, stdext::unchecked_array_iterator, and related factory functions are non-Standard extensions and will be removed in the future. std::span (since C++20) and gsl::span can be used instead. You can define _SILENCE_STDEXT_ARR_ITERS_DEPRECATION_WARNING or _SILENCE_ALL_MS_EXT_DEPRECATION_WARNINGS to suppress this warning.
        with
        [
            T=wchar_t
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_iter_core.hpp(191): warning C4996: 'stdext::checked_array_iterator<T *>': warning STL4043: stdext::checked_array_iterator, stdext::unchecked_array_iterator, and related factory functions are non-Standard extensions and will be removed in the future. std::span (since C++20) and gsl::span can be used instead. You can define _SILENCE_STDEXT_ARR_ITERS_DEPRECATION_WARNING or _SILENCE_ALL_MS_EXT_DEPRECATION_WARNINGS to suppress this warning.
        with
        [
            T=wchar_t
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\iterator(1493): note: vea la declaración de 'stdext::checked_array_iterator'
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_iter_core.hpp(191): warning C4996: 'stdext::checked_array_iterator<T *>::value_type': warning STL4043: stdext::checked_array_iterator, stdext::unchecked_array_iterator, and related factory functions are non-Standard extensions and will be removed in the future. std::span (since C++20) and gsl::span can be used instead. You can define _SILENCE_STDEXT_ARR_ITERS_DEPRECATION_WARNING or _SILENCE_ALL_MS_EXT_DEPRECATION_WARNINGS to suppress this warning.
        with
        [
            T=wchar_t
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_iter_core.hpp(192): warning C4996: 'stdext::checked_array_iterator<T *>': warning STL4043: stdext::checked_array_iterator, stdext::unchecked_array_iterator, and related factory functions are non-Standard extensions and will be removed in the future. std::span (since C++20) and gsl::span can be used instead. You can define _SILENCE_STDEXT_ARR_ITERS_DEPRECATION_WARNING or _SILENCE_ALL_MS_EXT_DEPRECATION_WARNINGS to suppress this warning.
        with
        [
            T=wchar_t
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\iterator(1493): note: vea la declaración de 'stdext::checked_array_iterator'
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_iter_core.hpp(192): warning C4996: 'stdext::checked_array_iterator<T *>::difference_type': warning STL4043: stdext::checked_array_iterator, stdext::unchecked_array_iterator, and related factory functions are non-Standard extensions and will be removed in the future. std::span (since C++20) and gsl::span can be used instead. You can define _SILENCE_STDEXT_ARR_ITERS_DEPRECATION_WARNING or _SILENCE_ALL_MS_EXT_DEPRECATION_WARNINGS to suppress this warning.
        with
        [
            T=wchar_t
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_iter_core.hpp(179): warning C4996: 'stdext::checked_array_iterator<T *>': warning STL4043: stdext::checked_array_iterator, stdext::unchecked_array_iterator, and related factory functions are non-Standard extensions and will be removed in the future. std::span (since C++20) and gsl::span can be used instead. You can define _SILENCE_STDEXT_ARR_ITERS_DEPRECATION_WARNING or _SILENCE_ALL_MS_EXT_DEPRECATION_WARNINGS to suppress this warning.
        with
        [
            T=wchar_t
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\iterator(1493): note: vea la declaración de 'stdext::checked_array_iterator'
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_iter_core.hpp(179): note: el contexto de creación de instancias de la plantilla (el más antiguo primero) es
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_iter_core.hpp(193): note: Vea la referencia a la creación de una instancia de alias plantilla "std::_Old_iter_traits_pointer<true>::_Apply<_It>" que se está compilando
        with
        [
            _It=stdext::checked_array_iterator<wchar_t *>
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_iter_core.hpp(194): warning C4996: 'stdext::checked_array_iterator<T *>': warning STL4043: stdext::checked_array_iterator, stdext::unchecked_array_iterator, and related factory functions are non-Standard extensions and will be removed in the future. std::span (since C++20) and gsl::span can be used instead. You can define _SILENCE_STDEXT_ARR_ITERS_DEPRECATION_WARNING or _SILENCE_ALL_MS_EXT_DEPRECATION_WARNINGS to suppress this warning.
        with
        [
            T=wchar_t
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\iterator(1493): note: vea la declaración de 'stdext::checked_array_iterator'
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_iter_core.hpp(194): warning C4996: 'stdext::checked_array_iterator<T *>::reference': warning STL4043: stdext::checked_array_iterator, stdext::unchecked_array_iterator, and related factory functions are non-Standard extensions and will be removed in the future. std::span (since C++20) and gsl::span can be used instead. You can define _SILENCE_STDEXT_ARR_ITERS_DEPRECATION_WARNING or _SILENCE_ALL_MS_EXT_DEPRECATION_WARNINGS to suppress this warning.
        with
        [
            T=wchar_t
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_iter_core.hpp(99): warning C4996: 'stdext::checked_array_iterator<T *>': warning STL4043: stdext::checked_array_iterator, stdext::unchecked_array_iterator, and related factory functions are non-Standard extensions and will be removed in the future. std::span (since C++20) and gsl::span can be used instead. You can define _SILENCE_STDEXT_ARR_ITERS_DEPRECATION_WARNING or _SILENCE_ALL_MS_EXT_DEPRECATION_WARNINGS to suppress this warning.
        with
        [
            T=wchar_t
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\iterator(1493): note: vea la declaración de 'stdext::checked_array_iterator'
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_iter_core.hpp(99): note: el contexto de creación de instancias de la plantilla (el más antiguo primero) es
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_iter_core.hpp(121): note: Vea la referencia a la creación de una instancia de clase plantilla "std::incrementable_traits<stdext::checked_array_iterator<T *>>" que se está compilando
        with
        [
            T=wchar_t
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_iter_core.hpp(99): warning C4996: 'stdext::checked_array_iterator<T *>::difference_type': warning STL4043: stdext::checked_array_iterator, stdext::unchecked_array_iterator, and related factory functions are non-Standard extensions and will be removed in the future. std::span (since C++20) and gsl::span can be used instead. You can define _SILENCE_STDEXT_ARR_ITERS_DEPRECATION_WARNING or _SILENCE_ALL_MS_EXT_DEPRECATION_WARNINGS to suppress this warning.
        with
        [
            T=wchar_t
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\xutility(1397): warning C4996: 'stdext::checked_array_iterator<T *>::_Verify_offset': warning STL4043: stdext::checked_array_iterator, stdext::unchecked_array_iterator, and related factory functions are non-Standard extensions and will be removed in the future. std::span (since C++20) and gsl::span can be used instead. You can define _SILENCE_STDEXT_ARR_ITERS_DEPRECATION_WARNING or _SILENCE_ALL_MS_EXT_DEPRECATION_WARNINGS to suppress this warning.
        with
        [
            T=wchar_t
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\xutility(1398): warning C4996: 'stdext::checked_array_iterator<T *>::_Unwrapped': warning STL4043: stdext::checked_array_iterator, stdext::unchecked_array_iterator, and related factory functions are non-Standard extensions and will be removed in the future. std::span (since C++20) and gsl::span can be used instead. You can define _SILENCE_STDEXT_ARR_ITERS_DEPRECATION_WARNING or _SILENCE_ALL_MS_EXT_DEPRECATION_WARNINGS to suppress this warning.
        with
        [
            T=wchar_t
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\xutility(1419): warning C4996: 'stdext::checked_array_iterator<T *>::_Seek_to': warning STL4043: stdext::checked_array_iterator, stdext::unchecked_array_iterator, and related factory functions are non-Standard extensions and will be removed in the future. std::span (since C++20) and gsl::span can be used instead. You can define _SILENCE_STDEXT_ARR_ITERS_DEPRECATION_WARNING or _SILENCE_ALL_MS_EXT_DEPRECATION_WARNINGS to suppress this warning.
        with
        [
            T=char
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\xutility(1419): note: el contexto de creación de instancias de la plantilla (el más antiguo primero) es
D:\Alex\Escritorio\Universidad\Primero\Programacion\Practicas\Practica3\NocionesClave\cmake-build-debug-visual-studio\_deps\fmt-src\include\fmt\format.h(752): note: Vea la referencia a la creación de una instancia de la función plantilla "_NoThrowFwdIt std::uninitialized_copy<T*,stdext::checked_array_iterator<T *>>(const _InIt,const _InIt,_NoThrowFwdIt)" que se está compilando
        with
        [
            _NoThrowFwdIt=stdext::checked_array_iterator<char *>,
            T=char,
            _InIt=char *
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\xmemory(1898): note: Vea la referencia a la creación de una instancia de la función plantilla "void std::_Seek_wrapped<_NoThrowFwdIt,char*>(_Iter &,_UIter &&)" que se está compilando
        with
        [
            _NoThrowFwdIt=stdext::checked_array_iterator<char *>,
            _Iter=stdext::checked_array_iterator<char *>,
            _UIter=char *
        ]
[6/11] Building CXX object CMakeFiles\nocionesClaves.dir\src\classes\Persona.cpp.obj
[7/11] Building CXX object CMakeFiles\nocionesClaves.dir\src\main.cpp.obj
[8/11] Building CXX object CMakeFiles\nocionesClaves.dir\src\classes\Estudiante.cpp.obj
[9/11] Building CXX object _deps\fmt-build\CMakeFiles\fmt.dir\src\format.cc.obj
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\xutility(1281): warning C4996: 'stdext::checked_array_iterator<T *>': warning STL4043: stdext::checked_array_iterator, stdext::unchecked_array_iterator, and related factory functions are non-Standard extensions and will be removed in the future. std::span (since C++20) and gsl::span can be used instead. You can define _SILENCE_STDEXT_ARR_ITERS_DEPRECATION_WARNING or _SILENCE_ALL_MS_EXT_DEPRECATION_WARNINGS to suppress this warning.
        with
        [
            T=fmt::v7::detail::bigint::bigit
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\iterator(1493): note: vea la declaración de 'stdext::checked_array_iterator'
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\xutility(1281): note: el contexto de creación de instancias de la plantilla (el más antiguo primero) es
D:\Alex\Escritorio\Universidad\Primero\Programacion\Practicas\Practica3\NocionesClave\cmake-build-debug-visual-studio\_deps\fmt-src\include\fmt/format-inl.h(1319): note: Vea la referencia a la creación de una instancia de la función plantilla "_OutIt std::copy<const T*,stdext::checked_array_iterator<T *>>(_InIt,_InIt,_OutIt)" que se está compilando
        with
        [
            _OutIt=stdext::checked_array_iterator<fmt::v7::detail::bigint::bigit *>,
            T=fmt::v7::detail::bigint::bigit,
            _InIt=const fmt::v7::detail::bigint::bigit *
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\xutility(4740): note: Vea la referencia a la creación de una instancia de la función plantilla "decltype(auto) std::_Get_unwrapped_n<_OutIt&,__int64>(_Iter,const _Diff)" que se está compilando
        with
        [
            _OutIt=stdext::checked_array_iterator<fmt::v7::detail::bigint::bigit *>,
            _Iter=stdext::checked_array_iterator<fmt::v7::detail::bigint::bigit *> &,
            _Diff=__int64
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\xutility(1386): note: vea la referencia a la plantilla de variables 'const bool _Unwrappable_for_offset_v<stdext::checked_array_iterator<unsigned int *> &>' que se está compilando
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\xutility(1380): note: vea la referencia a la plantilla de variables 'const bool _Unwrappable_v<stdext::checked_array_iterator<unsigned int *> &,void>' que se está compilando
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\xutility(1309): note: vea la referencia a la plantilla de variables 'const bool _Allow_inheriting_unwrap_v<stdext::checked_array_iterator<unsigned int *>,void>' que se está compilando
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_iter_core.hpp(190): warning C4996: 'stdext::checked_array_iterator<T *>': warning STL4043: stdext::checked_array_iterator, stdext::unchecked_array_iterator, and related factory functions are non-Standard extensions and will be removed in the future. std::span (since C++20) and gsl::span can be used instead. You can define _SILENCE_STDEXT_ARR_ITERS_DEPRECATION_WARNING or _SILENCE_ALL_MS_EXT_DEPRECATION_WARNINGS to suppress this warning.
        with
        [
            T=fmt::v7::detail::bigint::bigit
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\iterator(1493): note: vea la declaración de 'stdext::checked_array_iterator'
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_iter_core.hpp(190): note: el contexto de creación de instancias de la plantilla (el más antiguo primero) es
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\xutility(1376): note: Vea la referencia a la creación de una instancia de alias plantilla "std::_Iter_diff_t<stdext::checked_array_iterator<T *>>" que se está compilando
        with
        [
            T=fmt::v7::detail::bigint::bigit
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\xutility(1186): note: Vea la referencia a la creación de una instancia de alias plantilla "std::iter_difference_t<stdext::checked_array_iterator<T *>>" que se está compilando
        with
        [
            T=fmt::v7::detail::bigint::bigit
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_iter_core.hpp(120): note: al evaluar el concepto "_Is_from_primary<std::iterator_traits<stdext::checked_array_iterator<unsigned int *> > >"
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_iter_core.hpp(114): note: Vea la referencia a la creación de una instancia de clase plantilla "std::iterator_traits<stdext::checked_array_iterator<T *>>" que se está compilando
        with
        [
            T=fmt::v7::detail::bigint::bigit
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_iter_core.hpp(373): note: Vea la referencia a la creación de una instancia de clase plantilla "std::_Iterator_traits_base<_Ty>" que se está compilando
        with
        [
            _Ty=stdext::checked_array_iterator<fmt::v7::detail::bigint::bigit *>
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_iter_core.hpp(190): warning C4996: 'stdext::checked_array_iterator<T *>::iterator_category': warning STL4043: stdext::checked_array_iterator, stdext::unchecked_array_iterator, and related factory functions are non-Standard extensions and will be removed in the future. std::span (since C++20) and gsl::span can be used instead. You can define _SILENCE_STDEXT_ARR_ITERS_DEPRECATION_WARNING or _SILENCE_ALL_MS_EXT_DEPRECATION_WARNINGS to suppress this warning.
        with
        [
            T=fmt::v7::detail::bigint::bigit
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_iter_core.hpp(191): warning C4996: 'stdext::checked_array_iterator<T *>': warning STL4043: stdext::checked_array_iterator, stdext::unchecked_array_iterator, and related factory functions are non-Standard extensions and will be removed in the future. std::span (since C++20) and gsl::span can be used instead. You can define _SILENCE_STDEXT_ARR_ITERS_DEPRECATION_WARNING or _SILENCE_ALL_MS_EXT_DEPRECATION_WARNINGS to suppress this warning.
        with
        [
            T=fmt::v7::detail::bigint::bigit
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\iterator(1493): note: vea la declaración de 'stdext::checked_array_iterator'
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_iter_core.hpp(191): warning C4996: 'stdext::checked_array_iterator<T *>::value_type': warning STL4043: stdext::checked_array_iterator, stdext::unchecked_array_iterator, and related factory functions are non-Standard extensions and will be removed in the future. std::span (since C++20) and gsl::span can be used instead. You can define _SILENCE_STDEXT_ARR_ITERS_DEPRECATION_WARNING or _SILENCE_ALL_MS_EXT_DEPRECATION_WARNINGS to suppress this warning.
        with
        [
            T=fmt::v7::detail::bigint::bigit
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_iter_core.hpp(192): warning C4996: 'stdext::checked_array_iterator<T *>': warning STL4043: stdext::checked_array_iterator, stdext::unchecked_array_iterator, and related factory functions are non-Standard extensions and will be removed in the future. std::span (since C++20) and gsl::span can be used instead. You can define _SILENCE_STDEXT_ARR_ITERS_DEPRECATION_WARNING or _SILENCE_ALL_MS_EXT_DEPRECATION_WARNINGS to suppress this warning.
        with
        [
            T=fmt::v7::detail::bigint::bigit
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\iterator(1493): note: vea la declaración de 'stdext::checked_array_iterator'
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_iter_core.hpp(192): warning C4996: 'stdext::checked_array_iterator<T *>::difference_type': warning STL4043: stdext::checked_array_iterator, stdext::unchecked_array_iterator, and related factory functions are non-Standard extensions and will be removed in the future. std::span (since C++20) and gsl::span can be used instead. You can define _SILENCE_STDEXT_ARR_ITERS_DEPRECATION_WARNING or _SILENCE_ALL_MS_EXT_DEPRECATION_WARNINGS to suppress this warning.
        with
        [
            T=fmt::v7::detail::bigint::bigit
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_iter_core.hpp(179): warning C4996: 'stdext::checked_array_iterator<T *>': warning STL4043: stdext::checked_array_iterator, stdext::unchecked_array_iterator, and related factory functions are non-Standard extensions and will be removed in the future. std::span (since C++20) and gsl::span can be used instead. You can define _SILENCE_STDEXT_ARR_ITERS_DEPRECATION_WARNING or _SILENCE_ALL_MS_EXT_DEPRECATION_WARNINGS to suppress this warning.
        with
        [
            T=fmt::v7::detail::bigint::bigit
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\iterator(1493): note: vea la declaración de 'stdext::checked_array_iterator'
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_iter_core.hpp(179): note: el contexto de creación de instancias de la plantilla (el más antiguo primero) es
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_iter_core.hpp(193): note: Vea la referencia a la creación de una instancia de alias plantilla "std::_Old_iter_traits_pointer<true>::_Apply<_It>" que se está compilando
        with
        [
            _It=stdext::checked_array_iterator<fmt::v7::detail::bigint::bigit *>
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_iter_core.hpp(194): warning C4996: 'stdext::checked_array_iterator<T *>': warning STL4043: stdext::checked_array_iterator, stdext::unchecked_array_iterator, and related factory functions are non-Standard extensions and will be removed in the future. std::span (since C++20) and gsl::span can be used instead. You can define _SILENCE_STDEXT_ARR_ITERS_DEPRECATION_WARNING or _SILENCE_ALL_MS_EXT_DEPRECATION_WARNINGS to suppress this warning.
        with
        [
            T=fmt::v7::detail::bigint::bigit
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\iterator(1493): note: vea la declaración de 'stdext::checked_array_iterator'
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_iter_core.hpp(194): warning C4996: 'stdext::checked_array_iterator<T *>::reference': warning STL4043: stdext::checked_array_iterator, stdext::unchecked_array_iterator, and related factory functions are non-Standard extensions and will be removed in the future. std::span (since C++20) and gsl::span can be used instead. You can define _SILENCE_STDEXT_ARR_ITERS_DEPRECATION_WARNING or _SILENCE_ALL_MS_EXT_DEPRECATION_WARNINGS to suppress this warning.
        with
        [
            T=fmt::v7::detail::bigint::bigit
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_iter_core.hpp(99): warning C4996: 'stdext::checked_array_iterator<T *>': warning STL4043: stdext::checked_array_iterator, stdext::unchecked_array_iterator, and related factory functions are non-Standard extensions and will be removed in the future. std::span (since C++20) and gsl::span can be used instead. You can define _SILENCE_STDEXT_ARR_ITERS_DEPRECATION_WARNING or _SILENCE_ALL_MS_EXT_DEPRECATION_WARNINGS to suppress this warning.
        with
        [
            T=fmt::v7::detail::bigint::bigit
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\iterator(1493): note: vea la declaración de 'stdext::checked_array_iterator'
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_iter_core.hpp(99): note: el contexto de creación de instancias de la plantilla (el más antiguo primero) es
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_iter_core.hpp(121): note: Vea la referencia a la creación de una instancia de clase plantilla "std::incrementable_traits<stdext::checked_array_iterator<T *>>" que se está compilando
        with
        [
            T=fmt::v7::detail::bigint::bigit
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_iter_core.hpp(99): warning C4996: 'stdext::checked_array_iterator<T *>::difference_type': warning STL4043: stdext::checked_array_iterator, stdext::unchecked_array_iterator, and related factory functions are non-Standard extensions and will be removed in the future. std::span (since C++20) and gsl::span can be used instead. You can define _SILENCE_STDEXT_ARR_ITERS_DEPRECATION_WARNING or _SILENCE_ALL_MS_EXT_DEPRECATION_WARNINGS to suppress this warning.
        with
        [
            T=fmt::v7::detail::bigint::bigit
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\xutility(1397): warning C4996: 'stdext::checked_array_iterator<T *>::_Verify_offset': warning STL4043: stdext::checked_array_iterator, stdext::unchecked_array_iterator, and related factory functions are non-Standard extensions and will be removed in the future. std::span (since C++20) and gsl::span can be used instead. You can define _SILENCE_STDEXT_ARR_ITERS_DEPRECATION_WARNING or _SILENCE_ALL_MS_EXT_DEPRECATION_WARNINGS to suppress this warning.
        with
        [
            T=fmt::v7::detail::bigint::bigit
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\xutility(1398): warning C4996: 'stdext::checked_array_iterator<T *>::_Unwrapped': warning STL4043: stdext::checked_array_iterator, stdext::unchecked_array_iterator, and related factory functions are non-Standard extensions and will be removed in the future. std::span (since C++20) and gsl::span can be used instead. You can define _SILENCE_STDEXT_ARR_ITERS_DEPRECATION_WARNING or _SILENCE_ALL_MS_EXT_DEPRECATION_WARNINGS to suppress this warning.
        with
        [
            T=fmt::v7::detail::bigint::bigit
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\xutility(1281): warning C4996: 'stdext::checked_array_iterator<T *>': warning STL4043: stdext::checked_array_iterator, stdext::unchecked_array_iterator, and related factory functions are non-Standard extensions and will be removed in the future. std::span (since C++20) and gsl::span can be used instead. You can define _SILENCE_STDEXT_ARR_ITERS_DEPRECATION_WARNING or _SILENCE_ALL_MS_EXT_DEPRECATION_WARNINGS to suppress this warning.
        with
        [
            T=char
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\iterator(1493): note: vea la declaración de 'stdext::checked_array_iterator'
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\xutility(1281): note: el contexto de creación de instancias de la plantilla (el más antiguo primero) es
D:\Alex\Escritorio\Universidad\Primero\Programacion\Practicas\Practica3\NocionesClave\cmake-build-debug-visual-studio\_deps\fmt-src\include\fmt\format.h(1921): note: Vea la referencia a la creación de una instancia de clase plantilla "fmt::v7::basic_memory_buffer<char,500,std::allocator<char>>" que se está compilando
D:\Alex\Escritorio\Universidad\Primero\Programacion\Practicas\Practica3\NocionesClave\cmake-build-debug-visual-studio\_deps\fmt-src\include\fmt\format.h(741): note: al compilar la función del miembro clase plantilla "void fmt::v7::basic_memory_buffer<char,500,std::allocator<char>>::grow(size_t)"
D:\Alex\Escritorio\Universidad\Primero\Programacion\Practicas\Practica3\NocionesClave\cmake-build-debug-visual-studio\_deps\fmt-src\include\fmt\format.h(752): note: Vea la referencia a la creación de una instancia de la función plantilla "_NoThrowFwdIt std::uninitialized_copy<T*,stdext::checked_array_iterator<T *>>(const _InIt,const _InIt,_NoThrowFwdIt)" que se está compilando
        with
        [
            _NoThrowFwdIt=stdext::checked_array_iterator<char *>,
            T=char,
            _InIt=char *
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\xmemory(1897): note: Vea la referencia a la creación de una instancia de la función plantilla "decltype(auto) std::_Get_unwrapped_n<_NoThrowFwdIt&,__int64>(_Iter,const _Diff)" que se está compilando
        with
        [
            _NoThrowFwdIt=stdext::checked_array_iterator<char *>,
            _Iter=stdext::checked_array_iterator<char *> &,
            _Diff=__int64
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\xutility(1386): note: vea la referencia a la plantilla de variables 'const bool _Unwrappable_for_offset_v<stdext::checked_array_iterator<char *> &>' que se está compilando
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\xutility(1380): note: vea la referencia a la plantilla de variables 'const bool _Unwrappable_v<stdext::checked_array_iterator<char *> &,void>' que se está compilando
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\xutility(1309): note: vea la referencia a la plantilla de variables 'const bool _Allow_inheriting_unwrap_v<stdext::checked_array_iterator<char *>,void>' que se está compilando
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_iter_core.hpp(190): warning C4996: 'stdext::checked_array_iterator<T *>': warning STL4043: stdext::checked_array_iterator, stdext::unchecked_array_iterator, and related factory functions are non-Standard extensions and will be removed in the future. std::span (since C++20) and gsl::span can be used instead. You can define _SILENCE_STDEXT_ARR_ITERS_DEPRECATION_WARNING or _SILENCE_ALL_MS_EXT_DEPRECATION_WARNINGS to suppress this warning.
        with
        [
            T=char
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\iterator(1493): note: vea la declaración de 'stdext::checked_array_iterator'
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_iter_core.hpp(190): note: el contexto de creación de instancias de la plantilla (el más antiguo primero) es
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\xutility(1376): note: Vea la referencia a la creación de una instancia de alias plantilla "std::_Iter_diff_t<stdext::checked_array_iterator<T *>>" que se está compilando
        with
        [
            T=char
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\xutility(1186): note: Vea la referencia a la creación de una instancia de alias plantilla "std::iter_difference_t<stdext::checked_array_iterator<T *>>" que se está compilando
        with
        [
            T=char
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_iter_core.hpp(120): note: al evaluar el concepto "_Is_from_primary<std::iterator_traits<stdext::checked_array_iterator<char *> > >"
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_iter_core.hpp(114): note: Vea la referencia a la creación de una instancia de clase plantilla "std::iterator_traits<stdext::checked_array_iterator<T *>>" que se está compilando
        with
        [
            T=char
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_iter_core.hpp(373): note: Vea la referencia a la creación de una instancia de clase plantilla "std::_Iterator_traits_base<_Ty>" que se está compilando
        with
        [
            _Ty=stdext::checked_array_iterator<char *>
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_iter_core.hpp(190): warning C4996: 'stdext::checked_array_iterator<T *>::iterator_category': warning STL4043: stdext::checked_array_iterator, stdext::unchecked_array_iterator, and related factory functions are non-Standard extensions and will be removed in the future. std::span (since C++20) and gsl::span can be used instead. You can define _SILENCE_STDEXT_ARR_ITERS_DEPRECATION_WARNING or _SILENCE_ALL_MS_EXT_DEPRECATION_WARNINGS to suppress this warning.
        with
        [
            T=char
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_iter_core.hpp(191): warning C4996: 'stdext::checked_array_iterator<T *>': warning STL4043: stdext::checked_array_iterator, stdext::unchecked_array_iterator, and related factory functions are non-Standard extensions and will be removed in the future. std::span (since C++20) and gsl::span can be used instead. You can define _SILENCE_STDEXT_ARR_ITERS_DEPRECATION_WARNING or _SILENCE_ALL_MS_EXT_DEPRECATION_WARNINGS to suppress this warning.
        with
        [
            T=char
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\iterator(1493): note: vea la declaración de 'stdext::checked_array_iterator'
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_iter_core.hpp(191): warning C4996: 'stdext::checked_array_iterator<T *>::value_type': warning STL4043: stdext::checked_array_iterator, stdext::unchecked_array_iterator, and related factory functions are non-Standard extensions and will be removed in the future. std::span (since C++20) and gsl::span can be used instead. You can define _SILENCE_STDEXT_ARR_ITERS_DEPRECATION_WARNING or _SILENCE_ALL_MS_EXT_DEPRECATION_WARNINGS to suppress this warning.
        with
        [
            T=char
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_iter_core.hpp(192): warning C4996: 'stdext::checked_array_iterator<T *>': warning STL4043: stdext::checked_array_iterator, stdext::unchecked_array_iterator, and related factory functions are non-Standard extensions and will be removed in the future. std::span (since C++20) and gsl::span can be used instead. You can define _SILENCE_STDEXT_ARR_ITERS_DEPRECATION_WARNING or _SILENCE_ALL_MS_EXT_DEPRECATION_WARNINGS to suppress this warning.
        with
        [
            T=char
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\iterator(1493): note: vea la declaración de 'stdext::checked_array_iterator'
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_iter_core.hpp(192): warning C4996: 'stdext::checked_array_iterator<T *>::difference_type': warning STL4043: stdext::checked_array_iterator, stdext::unchecked_array_iterator, and related factory functions are non-Standard extensions and will be removed in the future. std::span (since C++20) and gsl::span can be used instead. You can define _SILENCE_STDEXT_ARR_ITERS_DEPRECATION_WARNING or _SILENCE_ALL_MS_EXT_DEPRECATION_WARNINGS to suppress this warning.
        with
        [
            T=char
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_iter_core.hpp(179): warning C4996: 'stdext::checked_array_iterator<T *>': warning STL4043: stdext::checked_array_iterator, stdext::unchecked_array_iterator, and related factory functions are non-Standard extensions and will be removed in the future. std::span (since C++20) and gsl::span can be used instead. You can define _SILENCE_STDEXT_ARR_ITERS_DEPRECATION_WARNING or _SILENCE_ALL_MS_EXT_DEPRECATION_WARNINGS to suppress this warning.
        with
        [
            T=char
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\iterator(1493): note: vea la declaración de 'stdext::checked_array_iterator'
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_iter_core.hpp(179): note: el contexto de creación de instancias de la plantilla (el más antiguo primero) es
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_iter_core.hpp(193): note: Vea la referencia a la creación de una instancia de alias plantilla "std::_Old_iter_traits_pointer<true>::_Apply<_It>" que se está compilando
        with
        [
            _It=stdext::checked_array_iterator<char *>
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_iter_core.hpp(194): warning C4996: 'stdext::checked_array_iterator<T *>': warning STL4043: stdext::checked_array_iterator, stdext::unchecked_array_iterator, and related factory functions are non-Standard extensions and will be removed in the future. std::span (since C++20) and gsl::span can be used instead. You can define _SILENCE_STDEXT_ARR_ITERS_DEPRECATION_WARNING or _SILENCE_ALL_MS_EXT_DEPRECATION_WARNINGS to suppress this warning.
        with
        [
            T=char
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\iterator(1493): note: vea la declaración de 'stdext::checked_array_iterator'
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_iter_core.hpp(194): warning C4996: 'stdext::checked_array_iterator<T *>::reference': warning STL4043: stdext::checked_array_iterator, stdext::unchecked_array_iterator, and related factory functions are non-Standard extensions and will be removed in the future. std::span (since C++20) and gsl::span can be used instead. You can define _SILENCE_STDEXT_ARR_ITERS_DEPRECATION_WARNING or _SILENCE_ALL_MS_EXT_DEPRECATION_WARNINGS to suppress this warning.
        with
        [
            T=char
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_iter_core.hpp(99): warning C4996: 'stdext::checked_array_iterator<T *>': warning STL4043: stdext::checked_array_iterator, stdext::unchecked_array_iterator, and related factory functions are non-Standard extensions and will be removed in the future. std::span (since C++20) and gsl::span can be used instead. You can define _SILENCE_STDEXT_ARR_ITERS_DEPRECATION_WARNING or _SILENCE_ALL_MS_EXT_DEPRECATION_WARNINGS to suppress this warning.
        with
        [
            T=char
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\iterator(1493): note: vea la declaración de 'stdext::checked_array_iterator'
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_iter_core.hpp(99): note: el contexto de creación de instancias de la plantilla (el más antiguo primero) es
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_iter_core.hpp(121): note: Vea la referencia a la creación de una instancia de clase plantilla "std::incrementable_traits<stdext::checked_array_iterator<T *>>" que se está compilando
        with
        [
            T=char
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_iter_core.hpp(99): warning C4996: 'stdext::checked_array_iterator<T *>::difference_type': warning STL4043: stdext::checked_array_iterator, stdext::unchecked_array_iterator, and related factory functions are non-Standard extensions and will be removed in the future. std::span (since C++20) and gsl::span can be used instead. You can define _SILENCE_STDEXT_ARR_ITERS_DEPRECATION_WARNING or _SILENCE_ALL_MS_EXT_DEPRECATION_WARNINGS to suppress this warning.
        with
        [
            T=char
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\xutility(1397): warning C4996: 'stdext::checked_array_iterator<T *>::_Verify_offset': warning STL4043: stdext::checked_array_iterator, stdext::unchecked_array_iterator, and related factory functions are non-Standard extensions and will be removed in the future. std::span (since C++20) and gsl::span can be used instead. You can define _SILENCE_STDEXT_ARR_ITERS_DEPRECATION_WARNING or _SILENCE_ALL_MS_EXT_DEPRECATION_WARNINGS to suppress this warning.
        with
        [
            T=char
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\xutility(1398): warning C4996: 'stdext::checked_array_iterator<T *>::_Unwrapped': warning STL4043: stdext::checked_array_iterator, stdext::unchecked_array_iterator, and related factory functions are non-Standard extensions and will be removed in the future. std::span (since C++20) and gsl::span can be used instead. You can define _SILENCE_STDEXT_ARR_ITERS_DEPRECATION_WARNING or _SILENCE_ALL_MS_EXT_DEPRECATION_WARNINGS to suppress this warning.
        with
        [
            T=char
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\xutility(1281): warning C4996: 'stdext::checked_array_iterator<T *>': warning STL4043: stdext::checked_array_iterator, stdext::unchecked_array_iterator, and related factory functions are non-Standard extensions and will be removed in the future. std::span (since C++20) and gsl::span can be used instead. You can define _SILENCE_STDEXT_ARR_ITERS_DEPRECATION_WARNING or _SILENCE_ALL_MS_EXT_DEPRECATION_WARNINGS to suppress this warning.
        with
        [
            T=wchar_t
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\iterator(1493): note: vea la declaración de 'stdext::checked_array_iterator'
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\xutility(1281): note: el contexto de creación de instancias de la plantilla (el más antiguo primero) es
D:\Alex\Escritorio\Universidad\Primero\Programacion\Practicas\Practica3\NocionesClave\cmake-build-debug-visual-studio\_deps\fmt-src\include\fmt\format.h(1132): note: Vea la referencia a la creación de una instancia de clase plantilla "fmt::v7::basic_memory_buffer<wchar_t,500,std::allocator<wchar_t>>" que se está compilando
D:\Alex\Escritorio\Universidad\Primero\Programacion\Practicas\Practica3\NocionesClave\cmake-build-debug-visual-studio\_deps\fmt-src\include\fmt\format.h(741): note: al compilar la función del miembro clase plantilla "void fmt::v7::basic_memory_buffer<wchar_t,500,std::allocator<wchar_t>>::grow(size_t)"
D:\Alex\Escritorio\Universidad\Primero\Programacion\Practicas\Practica3\NocionesClave\cmake-build-debug-visual-studio\_deps\fmt-src\include\fmt\format.h(752): note: Vea la referencia a la creación de una instancia de la función plantilla "_NoThrowFwdIt std::uninitialized_copy<T*,stdext::checked_array_iterator<T *>>(const _InIt,const _InIt,_NoThrowFwdIt)" que se está compilando
        with
        [
            _NoThrowFwdIt=stdext::checked_array_iterator<wchar_t *>,
            T=wchar_t,
            _InIt=wchar_t *
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\xmemory(1897): note: Vea la referencia a la creación de una instancia de la función plantilla "decltype(auto) std::_Get_unwrapped_n<_NoThrowFwdIt&,__int64>(_Iter,const _Diff)" que se está compilando
        with
        [
            _NoThrowFwdIt=stdext::checked_array_iterator<wchar_t *>,
            _Iter=stdext::checked_array_iterator<wchar_t *> &,
            _Diff=__int64
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\xutility(1386): note: vea la referencia a la plantilla de variables 'const bool _Unwrappable_for_offset_v<stdext::checked_array_iterator<wchar_t *> &>' que se está compilando
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\xutility(1380): note: vea la referencia a la plantilla de variables 'const bool _Unwrappable_v<stdext::checked_array_iterator<wchar_t *> &,void>' que se está compilando
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\xutility(1309): note: vea la referencia a la plantilla de variables 'const bool _Allow_inheriting_unwrap_v<stdext::checked_array_iterator<wchar_t *>,void>' que se está compilando
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_iter_core.hpp(190): warning C4996: 'stdext::checked_array_iterator<T *>': warning STL4043: stdext::checked_array_iterator, stdext::unchecked_array_iterator, and related factory functions are non-Standard extensions and will be removed in the future. std::span (since C++20) and gsl::span can be used instead. You can define _SILENCE_STDEXT_ARR_ITERS_DEPRECATION_WARNING or _SILENCE_ALL_MS_EXT_DEPRECATION_WARNINGS to suppress this warning.
        with
        [
            T=wchar_t
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\iterator(1493): note: vea la declaración de 'stdext::checked_array_iterator'
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_iter_core.hpp(190): note: el contexto de creación de instancias de la plantilla (el más antiguo primero) es
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\xutility(1376): note: Vea la referencia a la creación de una instancia de alias plantilla "std::_Iter_diff_t<stdext::checked_array_iterator<T *>>" que se está compilando
        with
        [
            T=wchar_t
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\xutility(1186): note: Vea la referencia a la creación de una instancia de alias plantilla "std::iter_difference_t<stdext::checked_array_iterator<T *>>" que se está compilando
        with
        [
            T=wchar_t
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_iter_core.hpp(120): note: al evaluar el concepto "_Is_from_primary<std::iterator_traits<stdext::checked_array_iterator<wchar_t *> > >"
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_iter_core.hpp(114): note: Vea la referencia a la creación de una instancia de clase plantilla "std::iterator_traits<stdext::checked_array_iterator<T *>>" que se está compilando
        with
        [
            T=wchar_t
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_iter_core.hpp(373): note: Vea la referencia a la creación de una instancia de clase plantilla "std::_Iterator_traits_base<_Ty>" que se está compilando
        with
        [
            _Ty=stdext::checked_array_iterator<wchar_t *>
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_iter_core.hpp(190): warning C4996: 'stdext::checked_array_iterator<T *>::iterator_category': warning STL4043: stdext::checked_array_iterator, stdext::unchecked_array_iterator, and related factory functions are non-Standard extensions and will be removed in the future. std::span (since C++20) and gsl::span can be used instead. You can define _SILENCE_STDEXT_ARR_ITERS_DEPRECATION_WARNING or _SILENCE_ALL_MS_EXT_DEPRECATION_WARNINGS to suppress this warning.
        with
        [
            T=wchar_t
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_iter_core.hpp(191): warning C4996: 'stdext::checked_array_iterator<T *>': warning STL4043: stdext::checked_array_iterator, stdext::unchecked_array_iterator, and related factory functions are non-Standard extensions and will be removed in the future. std::span (since C++20) and gsl::span can be used instead. You can define _SILENCE_STDEXT_ARR_ITERS_DEPRECATION_WARNING or _SILENCE_ALL_MS_EXT_DEPRECATION_WARNINGS to suppress this warning.
        with
        [
            T=wchar_t
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\iterator(1493): note: vea la declaración de 'stdext::checked_array_iterator'
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_iter_core.hpp(191): warning C4996: 'stdext::checked_array_iterator<T *>::value_type': warning STL4043: stdext::checked_array_iterator, stdext::unchecked_array_iterator, and related factory functions are non-Standard extensions and will be removed in the future. std::span (since C++20) and gsl::span can be used instead. You can define _SILENCE_STDEXT_ARR_ITERS_DEPRECATION_WARNING or _SILENCE_ALL_MS_EXT_DEPRECATION_WARNINGS to suppress this warning.
        with
        [
            T=wchar_t
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_iter_core.hpp(192): warning C4996: 'stdext::checked_array_iterator<T *>': warning STL4043: stdext::checked_array_iterator, stdext::unchecked_array_iterator, and related factory functions are non-Standard extensions and will be removed in the future. std::span (since C++20) and gsl::span can be used instead. You can define _SILENCE_STDEXT_ARR_ITERS_DEPRECATION_WARNING or _SILENCE_ALL_MS_EXT_DEPRECATION_WARNINGS to suppress this warning.
        with
        [
            T=wchar_t
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\iterator(1493): note: vea la declaración de 'stdext::checked_array_iterator'
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_iter_core.hpp(192): warning C4996: 'stdext::checked_array_iterator<T *>::difference_type': warning STL4043: stdext::checked_array_iterator, stdext::unchecked_array_iterator, and related factory functions are non-Standard extensions and will be removed in the future. std::span (since C++20) and gsl::span can be used instead. You can define _SILENCE_STDEXT_ARR_ITERS_DEPRECATION_WARNING or _SILENCE_ALL_MS_EXT_DEPRECATION_WARNINGS to suppress this warning.
        with
        [
            T=wchar_t
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_iter_core.hpp(179): warning C4996: 'stdext::checked_array_iterator<T *>': warning STL4043: stdext::checked_array_iterator, stdext::unchecked_array_iterator, and related factory functions are non-Standard extensions and will be removed in the future. std::span (since C++20) and gsl::span can be used instead. You can define _SILENCE_STDEXT_ARR_ITERS_DEPRECATION_WARNING or _SILENCE_ALL_MS_EXT_DEPRECATION_WARNINGS to suppress this warning.
        with
        [
            T=wchar_t
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\iterator(1493): note: vea la declaración de 'stdext::checked_array_iterator'
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_iter_core.hpp(179): note: el contexto de creación de instancias de la plantilla (el más antiguo primero) es
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_iter_core.hpp(193): note: Vea la referencia a la creación de una instancia de alias plantilla "std::_Old_iter_traits_pointer<true>::_Apply<_It>" que se está compilando
        with
        [
            _It=stdext::checked_array_iterator<wchar_t *>
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_iter_core.hpp(194): warning C4996: 'stdext::checked_array_iterator<T *>': warning STL4043: stdext::checked_array_iterator, stdext::unchecked_array_iterator, and related factory functions are non-Standard extensions and will be removed in the future. std::span (since C++20) and gsl::span can be used instead. You can define _SILENCE_STDEXT_ARR_ITERS_DEPRECATION_WARNING or _SILENCE_ALL_MS_EXT_DEPRECATION_WARNINGS to suppress this warning.
        with
        [
            T=wchar_t
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\iterator(1493): note: vea la declaración de 'stdext::checked_array_iterator'
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_iter_core.hpp(194): warning C4996: 'stdext::checked_array_iterator<T *>::reference': warning STL4043: stdext::checked_array_iterator, stdext::unchecked_array_iterator, and related factory functions are non-Standard extensions and will be removed in the future. std::span (since C++20) and gsl::span can be used instead. You can define _SILENCE_STDEXT_ARR_ITERS_DEPRECATION_WARNING or _SILENCE_ALL_MS_EXT_DEPRECATION_WARNINGS to suppress this warning.
        with
        [
            T=wchar_t
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_iter_core.hpp(99): warning C4996: 'stdext::checked_array_iterator<T *>': warning STL4043: stdext::checked_array_iterator, stdext::unchecked_array_iterator, and related factory functions are non-Standard extensions and will be removed in the future. std::span (since C++20) and gsl::span can be used instead. You can define _SILENCE_STDEXT_ARR_ITERS_DEPRECATION_WARNING or _SILENCE_ALL_MS_EXT_DEPRECATION_WARNINGS to suppress this warning.
        with
        [
            T=wchar_t
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\iterator(1493): note: vea la declaración de 'stdext::checked_array_iterator'
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_iter_core.hpp(99): note: el contexto de creación de instancias de la plantilla (el más antiguo primero) es
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_iter_core.hpp(121): note: Vea la referencia a la creación de una instancia de clase plantilla "std::incrementable_traits<stdext::checked_array_iterator<T *>>" que se está compilando
        with
        [
            T=wchar_t
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\__msvc_iter_core.hpp(99): warning C4996: 'stdext::checked_array_iterator<T *>::difference_type': warning STL4043: stdext::checked_array_iterator, stdext::unchecked_array_iterator, and related factory functions are non-Standard extensions and will be removed in the future. std::span (since C++20) and gsl::span can be used instead. You can define _SILENCE_STDEXT_ARR_ITERS_DEPRECATION_WARNING or _SILENCE_ALL_MS_EXT_DEPRECATION_WARNINGS to suppress this warning.
        with
        [
            T=wchar_t
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\xutility(1397): warning C4996: 'stdext::checked_array_iterator<T *>::_Verify_offset': warning STL4043: stdext::checked_array_iterator, stdext::unchecked_array_iterator, and related factory functions are non-Standard extensions and will be removed in the future. std::span (since C++20) and gsl::span can be used instead. You can define _SILENCE_STDEXT_ARR_ITERS_DEPRECATION_WARNING or _SILENCE_ALL_MS_EXT_DEPRECATION_WARNINGS to suppress this warning.
        with
        [
            T=wchar_t
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\xutility(1398): warning C4996: 'stdext::checked_array_iterator<T *>::_Unwrapped': warning STL4043: stdext::checked_array_iterator, stdext::unchecked_array_iterator, and related factory functions are non-Standard extensions and will be removed in the future. std::span (since C++20) and gsl::span can be used instead. You can define _SILENCE_STDEXT_ARR_ITERS_DEPRECATION_WARNING or _SILENCE_ALL_MS_EXT_DEPRECATION_WARNINGS to suppress this warning.
        with
        [
            T=wchar_t
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\xutility(1419): warning C4996: 'stdext::checked_array_iterator<T *>::_Seek_to': warning STL4043: stdext::checked_array_iterator, stdext::unchecked_array_iterator, and related factory functions are non-Standard extensions and will be removed in the future. std::span (since C++20) and gsl::span can be used instead. You can define _SILENCE_STDEXT_ARR_ITERS_DEPRECATION_WARNING or _SILENCE_ALL_MS_EXT_DEPRECATION_WARNINGS to suppress this warning.
        with
        [
            T=fmt::v7::detail::bigint::bigit
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\xutility(1419): note: el contexto de creación de instancias de la plantilla (el más antiguo primero) es
D:\Alex\Escritorio\Universidad\Primero\Programacion\Practicas\Practica3\NocionesClave\cmake-build-debug-visual-studio\_deps\fmt-src\include\fmt/format-inl.h(1319): note: Vea la referencia a la creación de una instancia de la función plantilla "_OutIt std::copy<const T*,stdext::checked_array_iterator<T *>>(_InIt,_InIt,_OutIt)" que se está compilando
        with
        [
            _OutIt=stdext::checked_array_iterator<fmt::v7::detail::bigint::bigit *>,
            T=fmt::v7::detail::bigint::bigit,
            _InIt=const fmt::v7::detail::bigint::bigit *
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\xutility(4741): note: Vea la referencia a la creación de una instancia de la función plantilla "void std::_Seek_wrapped<_OutIt,unsigned int*>(_Iter &,_UIter &&)" que se está compilando
        with
        [
            _OutIt=stdext::checked_array_iterator<fmt::v7::detail::bigint::bigit *>,
            _Iter=stdext::checked_array_iterator<fmt::v7::detail::bigint::bigit *>,
            _UIter=fmt::v7::detail::bigint::bigit *
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\xutility(1419): warning C4996: 'stdext::checked_array_iterator<T *>::_Seek_to': warning STL4043: stdext::checked_array_iterator, stdext::unchecked_array_iterator, and related factory functions are non-Standard extensions and will be removed in the future. std::span (since C++20) and gsl::span can be used instead. You can define _SILENCE_STDEXT_ARR_ITERS_DEPRECATION_WARNING or _SILENCE_ALL_MS_EXT_DEPRECATION_WARNINGS to suppress this warning.
        with
        [
            T=char
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\xutility(1419): note: el contexto de creación de instancias de la plantilla (el más antiguo primero) es
D:\Alex\Escritorio\Universidad\Primero\Programacion\Practicas\Practica3\NocionesClave\cmake-build-debug-visual-studio\_deps\fmt-src\include\fmt\format.h(752): note: Vea la referencia a la creación de una instancia de la función plantilla "_NoThrowFwdIt std::uninitialized_copy<T*,stdext::checked_array_iterator<T *>>(const _InIt,const _InIt,_NoThrowFwdIt)" que se está compilando
        with
        [
            _NoThrowFwdIt=stdext::checked_array_iterator<char *>,
            T=char,
            _InIt=char *
        ]
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.41.34120\include\xmemory(1898): note: Vea la referencia a la creación de una instancia de la función plantilla "void std::_Seek_wrapped<_NoThrowFwdIt,char*>(_Iter &,_UIter &&)" que se está compilando
        with
        [
            _NoThrowFwdIt=stdext::checked_array_iterator<char *>,
            _Iter=stdext::checked_array_iterator<char *>,
            _UIter=char *
        ]
[10/11] Linking CXX static library _deps\fmt-build\fmtd.lib
[11/11] Linking CXX executable nocionesClaves.exe

Build finished
```

## Punto 7: Enlazador
- Enlazar librería estándar de c++. En main.cpp por ejemplo se usa:
  - **#include \<iostream\>**: se usa para mostrar por consola un mensaje
- Enlazar librería externa. En main.cpp por ejemplo se usa:
    - **#include \<fmt/core.h\>**: se usa para formatear un texto y mostrarlo
    - Se descarga de internet y se incluye en el programa, lo hace el CMakeLists.txt
 