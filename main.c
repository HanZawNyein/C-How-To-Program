#include <stdio.h>

int main(void)
{
    int integer1;
    int integer2;

    printf("Enter a first integrer : ");
    scanf( "%d", &integer1 );

    printf("Enter a second integrer : ");
    scanf( "%d", &integer2);
    printf("Sum = %d\n",integer1+integer2);

    return 0;
}
