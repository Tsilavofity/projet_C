/*remplace majuscule*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void remplace_maj(char *c)
{
  int i,n;

  for(i=0;i<=strlen(c);i++)
{
  n=(int)c[i];
  if (n>=65 && n<=90)
  c[i]=tolower(c[i]);
}
 for(i=0;i<=strlen(c);i++)
   printf("%c",c[i]);
}
main()
{
int i;
  char c[256]="Fy";
  printf("Entrez le mot:\n");
  fgets(c,256,stdin);
  remplace_maj(c);
}
  
  