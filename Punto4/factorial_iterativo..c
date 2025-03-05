#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

unsigned long long int factorial_iterativo(int n) {
    unsigned long long int count = 1;
    for (int i = 1; i <= n; i++) {
        count *= i;
    }
    return count;
}

double get_time_in_seconds() {
    LARGE_INTEGER frequency, start, end;
    QueryPerformanceFrequency(&frequency);  // Get the frequency
    QueryPerformanceCounter(&start);  // Get start time
    return (double)start.QuadPart / frequency.QuadPart;  // Convert to seconds
}

int main() {
    int valores_n[] = {5, 50, 500};
    int repeticiones = 10;

    for (int j = 0; j < 3; j++) {
        int n = valores_n[j];
        double total_iterativo = 0.0;
        unsigned long long int valor_i;
        
        for (int i = 0; i < repeticiones; i++) {
            // Factorial iterativo
            double start_iterativo = get_time_in_seconds();
            valor_i = factorial_iterativo(n);
            double end_iterativo = get_time_in_seconds();
            total_iterativo += (end_iterativo - start_iterativo);
        }
        
        printf("\nFactorial de %d (Iterativo):\n", n);
        printf("Iterativo promedio: %.8f segundos\n", total_iterativo / repeticiones);
    }
    getchar();
    return 0;
}
