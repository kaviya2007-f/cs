#include<stdio.h>
#include<string.h>
int main()
{
  char name[18];
  printf("enter the name:");
  gets(name);
  int length=strlen(name);
  printf("length of the name is:%d\n",length);
  return 0;
}
