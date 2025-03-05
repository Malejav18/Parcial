import time

# Función factorial iterativo
def factorial_iterativo(x):
    n = 1
    for i in range(1, x + 1):
        n *= i
    return n

# Función para medir el tiempo promedio con mayor precisión
def medir_tiempo(func, n, repeticiones=10):
    tiempos = []
    for _ in range(repeticiones):
        t0 = time.perf_counter()  # Usar perf_counter para mayor precisión
        func(n)
        t1 = time.perf_counter()
        tiempos.append(t1 - t0)
    return sum(tiempos) / len(tiempos)

# Valores para realizar las pruebas
valores_n = [5, 50, 500]

# Realizar las pruebas para cada valor de n
for n in valores_n:
    # Tiempo promedio iterativo
    tiempo_iterativo = medir_tiempo(factorial_iterativo, n)
    print(f"Tiempo promedio iterativo para n = {n}: {tiempo_iterativo:.10f} segundos")
