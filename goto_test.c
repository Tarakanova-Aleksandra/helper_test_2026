#include <stdio.h>

int main() {
    int error = 1;
    
    printf("Начало программы\n");
    
    if (error) {
        goto cleanup;  // переход к метке cleanup
    }
    
    printf("Этот код не выполнится\n");
    
cleanup:
    printf("Очистка ресурсов\n");
    
    return 0;
}