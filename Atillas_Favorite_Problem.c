#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>
char sort(char *str)
{
   char temp;
 
   int i, j;
   int n = strlen(str);
   for (i = 0; i < n-1; i++) {
      for (j = i+1; j < n; j++) {
         if (str[i] > str[j]){
            temp = str[i];
            str[i] = str[j];
            str[j] = temp;
         }
      }
   }
   return str[n - 1];
}
int main () {
   char str[100];
   int a;
   int x;
   int j;
  scanf("%d", &x);
  char *ptr = "abcdefghijklmnopqrstuvwxyz";
  while(x >= 1)
  {
    scanf("%d", &a);
    scanf("%s", str);
    char c = sort(str);
    j = 0;
    while(ptr[j])
    {
        if(ptr[j] == c)
            printf("%d\n", j+1);
        j++;
    }
    x--;
  }
}
