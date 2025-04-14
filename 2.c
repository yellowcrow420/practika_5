#include <stdio.h>
#include <string.h>

int main()
{
  char word[] = "yellow";
  char result[4];
  int start = 3;
  int end = 6;

  int count = 0;
  for (int i = start; i <= end; i++)
{
  result[count] = word[i];
  count++;
}

result[count] = '\0';

printf("Результат: %s", result);

return 0;
}
