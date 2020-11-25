/*Rationnels*/
#include <stdio.h>

/*Declaration rationnel*/
typedef struct
{
int a;
int b;
}ratio;

/*Fonction saisie rationnel*/
void saisie (ratio *r)
{
  printf ("entrez le numerateur  :\n");
  scanf ("%d",&(*r).a);
  printf ("entrez son denominateur :\n");
  scanf ("%d",&(*r).b);
  } 

/*Affiche rationnel*/
 float affiche (ratio r)
{
 return ((float)r.a)/((float)r.b) ;
}
/*Compare rationnel*/
void compare_ratio (ratio r,ratio q)
{float i,j;
 i=affiche(r);
 j=affiche(q);
if (i>j)
printf ("%f>%f",i,j);
else
{
  if (i<j)
  printf ("%f<%f",i,j);
  else
   printf("%f=%f",i,j);
}
}

/*Main()*/
main ()
{
  ratio r,q;
  saisie(&r);
   saisie(&q);
printf (" le premier est %f et le second est %f\n",affiche (r),affiche (q));
compare_ratio (r,q);
}
  