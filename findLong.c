#include <stdio.h>
#include <string.h>

void LongestWord(char *sen)
{

  int i = 0, sp = 0, res[] = {0}, m = 0;
  while (sen[i])
  {
    res[m] = sp;
    if (sen[i] >= 'a' && sen[i] <= 'z')
    {
      res[m++] =  ;
    i++;
  }
  int f = sizeof(res) / sizeof(int);
  printf("%d", f);
  // while (f > 0)
  // {
  //   printf("%d", r[f]);
  //   f--;
  // }
}

int main(void)
{
  LongestWord("I love dogs");
  return 0;
}