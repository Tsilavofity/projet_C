
/*affiche forme geometrique*/
#include<stdio.h>

void affiche_ligne(int n,char C)
{
  int i;
  for(i=1;i<=n;i++)
  printf ("%c",C);
}

void affiche_carre(int n,char C)
{
 int i,j;
 affiche_ligne (n,C);
 printf("\n");
for(i=2;i<n;i++)
{ 
   printf ("%c",C); 
    for(j=2;j<n;j++)
     {
    printf(" "); 
      }
     printf ("%c",C);
     printf("\n");
}
affiche_ligne (n,C);
  } 
void affiche_triangle(int n,char C)
{ int i,j;
  printf("%c",C);
  printf("\n");
  printf("%c%c",C,C);
  printf("\n");
  for(i=3;i<n;i++)
  { printf("%c",C);
     for(j=2;j<i;j++)
     printf(" ");
     printf("%c",C);
     printf("\n");
  }
  affiche_ligne(n,C);
}
  
main()
{
  char c='@'; 
 int a;
printf("entrez un caractere:\n");
scanf("%c",&c);
printf("entrez un nombre:\n");
scanf("%d",&a);
printf("une ligne:\n");
affiche_ligne(a,c);
printf("\n un carre:\n");
affiche_carre(a,c);
printf ("\n Et voici le triangle \n");
affiche_triangle(a,c);
}