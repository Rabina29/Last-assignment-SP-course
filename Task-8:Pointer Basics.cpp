#include <stdio.h>
int main()

{
     int num = 25;
    int *ptr = &num;
    printf("Value of num: %d\n", num);
    printf("Value of num using pointer: %d\n", *ptr);
    printf("Address of num: %d\n",&num);
    printf("Address of num using pointer: %d\n",ptr);

    return 0;
}
