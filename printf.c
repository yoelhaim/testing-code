#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
void pr(char f, void *val, int *len)
{
    if (f == 's')
    {
        printf("%s", "nice");
    }
}
int ft_print(char *fr, ...)
{
    va_list lst;
    int len = 0;
    void *nxt;
    va_start(lst, fr);
    while (*fr)
    {
        if (*fr == '%')
        {
            fr++;
            if (*fr != '%')
                nxt = va_arg(lst, void *);
            pr(*fr, nxt, &len);
        }
        else
            write(1, &*fr, 1);
        fr++;
    }

    va_end(lst);
    return (len);
}
int main()
{
    ft_print("%s", "hello");
}