/* Fibonacci */
#include <stdio.h>
int Fib (int n) 
{ int i, AvantDernier, Dernier, Nouveau; 
if (n==0 || n==1) return (1);
AvantDernier=1; Dernier =1;
for (i=2; i<=n; i++) 
{ Nouveau= Dernier+ AvantDernier; 
AvantDernier = Dernier; 
Dernier = Nouveau; 
}
printf("U%d=%d",n,Nouveau);
}
main ()
{ int n;
printf (" entrez la i-eme valeur que vous voulez savoir dans la suite de Fibonacci:\n");
scanf ("%d",&n);
Fib (n);
}