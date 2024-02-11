#include <stdio.h>
void rev(char str[])
{
    int len, temp;
    len = strlen(str);
    for (int i = 0; i < len / 2; i++)
    {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
    printf(" After reversing the string: %s", str);
}
int main(){
  char s[100];
    gets(s);
    rev(s);
  return 0;
}
