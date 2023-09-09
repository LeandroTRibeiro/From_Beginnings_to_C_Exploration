#include <stdio.h>

int main() {
    int arr[4] = {4, 3, 2, 1};

    printf("O tamanho do array é %zu\n", (sizeof(arr)/sizeof(arr[3])));
    for (size_t i = 0; i < (sizeof(arr)/sizeof(arr[3])); i++)
    {
        printf("%zu = %d\n", i, arr[i]);
    }
    
    printf("%zu - 2 = %f", (sizeof(arr)/sizeof(arr[3])), (sizeof(arr)/sizeof(arr[3])) - 2);

    return 0;
};