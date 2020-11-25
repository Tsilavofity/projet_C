/*tri tableau*/
#include <stdio.h>
    
main() 
{
  int n,i,j,temp;
  int tab[50];
printf("entrez n=\n");
  scanf("%d",&n);
for(i=0;i<n;i++)
  {
printf("entrez T[%d]=\n",i);
  scanf("%d",&tab[i]);
}
for(i=0;i<n;i++)
{
printf("T[%d]=%d\n",i,tab[i]);
}
printf("apres tri par ordre croissant :\n");
for(i=0;i<n;i++)
  {
    for (j=i+1;j<n;j++)
    if(tab[i]>tab[j])
    {
    temp=tab[i];
    tab[i]=tab[j];
    tab[j]=temp;
     }
  }
for(i=0;i<n;i++)
{
printf(" T[%d]=%d\n",i,tab[i]);
}
 }