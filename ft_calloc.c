#include "libft.h"

void *ft_calloc(size_t num, size_t size) {

    size_t i = 0;
    size_t total_size = num * size;
    void *ptr = malloc(total_size);

    if (ptr == NULL) {
        return NULL;
    }

    ft_bzero(ptr, num);

    return ptr;
}

// int main() {
//     size_t num = 7;
//     size_t size = sizeof(int);
//     size_t i = 0;
    
//     int *array = (int *)ft_calloc(num, size); 

//     while (i < num) 
//     {
//         printf("array[%zu] = %d\n\n", i, array[i]);
//         i++;
//     }
//     free(array);
//     return 0;
// }