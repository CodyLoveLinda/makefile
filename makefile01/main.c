#include <stdio.h>
#include "add.h"
#include "sub.h"
 
int main()
{
    int a = 10, b = 5;
    printf("a + b = %d\r\n", add(a, b));
    printf("a - b = %d\r\n", sub(a, b));
    return 0;
}
