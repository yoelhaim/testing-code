#include <string.h>
#include <stdio.h>
int lengthOfLastWord(char *s)
{
    int len = strlen(s) - 1;
    int i = len;
    while (s[len] == ' ')
        len--;
    // if (s[0] == ' ')
    //     return (0);
    if (len == 0)
        return (1);

    while (s[len] >= 0)
    {
        if (s[len] == ' ')
        {
            i++;
            int j = 0;
            if (s[i + 1] == ' ')
                return 0;
            while (s[i++])
            {
                j++;
            }

            return (j);
        }

        len--;
        i--;
    }
    if (s[strlen(s) - 1] == ' ')
        return 0;
    return 0;
}
int main()
{
    printf("%d", lengthOfLastWord("a "));
}