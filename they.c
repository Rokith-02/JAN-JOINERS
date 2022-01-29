#include<stdio.h>
void fun(char*a)
{
  if(*a)
  {
    fun(a+1);
    printf("%c",*a);
  }
}
int main()
{
  char s[20];
  printf("enter the string\n");
  scanf("%s",s);
  fun(s);
}
