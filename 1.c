#include <stdio.h>
#include <string.h>

int main() 
{
  char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
  char letter = "r";
  int index = -1;

  for (int i = 0; i < strlen(alphabet); i++)
    {
      if (alphabet[i] == letter)
      {
        index = i + 1;
        break;
      }
    }

if (index != -1) 
  printf("Буква %c стоит на %d позиции", letter, index);
else
  printf("Буквы %c нет в алфавите", letter);


return 0;
}
    
