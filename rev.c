#include <stdio.h>
#include <string.h>

void FirstReverse(char *str)
{
    int len = strlen(str) - 1;
    int i = 0;
    char *rev;
    while (len >= 0)
    {
        printf("%c", str[len--]);
    }
}

int main(void)
{

    // keep this function call here
    FirstReverse("hello");
    return 0;
}