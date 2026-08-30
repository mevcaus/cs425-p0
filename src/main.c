#include "lab.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifdef TEST
#define main main_exclude
#endif



int main(void)
{

    char *greeting = get_greeting("World");
    if (greeting) {
        printf("%s\n", greeting);
        free(greeting);
    } else {
        printf("Failed to create greeting.\n");
    
    }

    char *leak = (char *)malloc(10 * sizeof(char));
    strcpy(leak, "Hello");
    
    volatile int *ptr = NULL;
    int value = *ptr;
    printf("%d\n", value);
    return 0;
}