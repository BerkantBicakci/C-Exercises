#include <stdio.h>
#include <ctype.h>
int main()
{
    char c, result;

    c= getchar();
    result = tolower(c);
    printf("tolower(%c) = %c\n", c, result);

 

    return 0;
}
