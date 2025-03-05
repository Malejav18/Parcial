# Comparativa

En este repositorio se puede encontrar la función de factorial, implementada de manera iterativa y recursiva en el lenguaje C y Python. El propósito de esta actividad es realizar una comparación entre un lenguaje interpretado y uno compilado en una misma máquina.

## Proceso

Se realizaron dos códigos de la función factorial, de manera iterativa y recursiva en los lenguajes python y c, ambos adjuntos en los archivos de este repositorio. Estos códigos proporcionan el tiempo que demora realizar esta función al cálcular el factorial de 5, 50 u 500. Además para realizar una comparación más precisa las pruebas se realizaron en una misma maquina; las características de la misma son las siguientes:

- **Sistema Operativo:** Microsoft Windows 11
- **Procesador:** Intel(R) Core(TM) i7-9750H CPU @ 2.60GHz
- **RAM:** 8 GB

Para la ejecución de los programas en Python, se utilizó la extensión de Python, última versión 3.13.2, en Visual Studio Code, mientras que para los programas en C se utilizó el programa Dev - C++. Si se presentan dificultades en la compilación y ejecución del programa, revisar la documentación y el paso a paso de la instalación y ejecución del respectivo programa. En el caso de Dev - C++, la solución puede estar [aquí](https://stackoverflow.com/questions/14514682/source-file-not-compiled-dev-c). 

## Resultados
Los resultados obtenidos son los siguientes:

## Python

### Iterativo
- Tiempo de ejecucion (5): 0.0000028100 segundos
- Tiempo de ejecucion (50): 0.0000078600 segundos
- Tiempo de ejecucion (500): 0.0001024900 segundos

![iterativoPy](https://github.com/user-attachments/assets/b686c3c2-c498-482a-8975-b927ea014add)

### Recursivo
- Tiempo de ejecucion (5): 0.0000042200 segundos
- Tiempo de ejecucion (50): 0.0000353800 segundos
- Tiempo de ejecucion (500): 0.0003813200 segundos

![recursivoPy](https://github.com/user-attachments/assets/260f6b01-4340-45ab-bf4e-d5666a7084a2)

### Comparación iterativo y recursivo
![compPy](https://github.com/user-attachments/assets/cdf65217-bc01-4ac3-8384-d029db18f8a3)

## C

### Iterativo
- Tiempo de ejecucion (5): 0.00000003 segundos
- Tiempo de ejecucion (50): 0.00000013 segundos
- Tiempo de ejecucion (500): 0.00000108 segundos

![iterativoC](https://github.com/user-attachments/assets/bb055290-c1a1-40d7-979c-e253c4c1b000)

### Recursivo
- Tiempo de ejecucion (5): 0.00000004 segundos
- Tiempo de ejecucion (50): 0.00000046 segundos
- Tiempo de ejecucion (500): 0.00000517 segundos

![recursivoC](https://github.com/user-attachments/assets/9686afa9-fa37-4dea-a2b2-3bfd3acc3b7f)

### Comparación iterativo y recursivo
![compC](https://github.com/user-attachments/assets/8ceb2c79-856c-452f-9be8-a047eae9815a)

### Comparación entre lenguajes

![comp](https://github.com/user-attachments/assets/7aa89c2d-b11a-4881-b28c-8dec10ccdcfa)
![compLog](https://github.com/user-attachments/assets/2437d307-d81c-485a-82d7-e4ecd4a76ac9)


## Análisis de resultados
Al realizar la comparación directa entre los tiempos de ejecución, se evidencia que la ejecución del programa es más rápida en el lenguaje compilado (C) que en el lenguaje interpretado (Python). Esto se asocia con la diferencia fundamental en la forma en que ambos lenguajes ejecutan el código: mientras que C es un lenguaje compilado que se traduce a código de máquina optimizado antes de ejecutarse, Python es un lenguaje interpretado, lo que significa que cada instrucción se evalúa en tiempo de ejecución, añadiendo sobrecarga y reduciendo la velocidad de ejecución. 

En el caso de C, los tiempos de ejecución de los cálculos de factorial son de magnitudes órdenes de magnitud menores que en Python. Por ejemplo, al calcular el factorial de 500, el tiempo de ejecución en C es del orden de nanosegundos, mientras que en Python se mide en microsegundos. Al usar una escala logarítmica, se observa que los tiempos de ejecución de Python se acumulan más rápidamente conforme aumentan los valores de n, mientras que en C la diferencia entre los valores más pequeños y más grandes es mucho menos pronunciada. Este comportamiento es típico en lenguajes compilados debido a su mayor optimización en la ejecución.

Además, la comparación directa entre el proceso iterativo y el recursivo nos permite obtener que el proceso recursivo es más lento que el iterativo cuando el valor de número factorial va aumentando. Esto se debe a que la recursión implica llamadas a funciones adicionales, lo que genera una sobrecarga por cada llamada, además de que los valores intermedios deben almacenarse en la pila, lo que aumenta el tiempo de ejecución y el uso de memoria a medida que el número factorial crece. 

Esto es especialmente notorio cuando se calculan factoriales de números grandes, como 500. En el caso de C, la diferencia entre los tiempos iterativo y recursivo es menor, lo que indica que el compilador realiza una optimización efectiva incluso para la recursión. Sin embargo, en Python, la diferencia es más notoria, lo que resalta aún más la ineficiencia relativa de las funciones recursivas en lenguajes interpretados.

No obstante, cabe agregar que el resultado de la operación involucra obtener un valor demasiado grande, tanto que no se puede guardar en las variables convencionales de dichos lenguajes, pues el tipo unsigned long long int permite un tamaño máximo de 18,446,744,073,709,551,615, lo cual no es suficiente para guardar siquiera el valor de 50!. Por lo tanto, si se quiere tanto calcular como imprimir el valor del factorial, es necesario almacenar los dígitos en un arreglo e imprimirlos posteriormente. Este proceso requiere a su vez un tiempo de ejecución propio y cada vez mayor, lo cual influye en los tiempos resultantes obtenidos y entorpece el análisis. Los códigos se encuentran adjuntos en la carpeta calculo&tiempo. Estos resultados se muestran a continuación.
