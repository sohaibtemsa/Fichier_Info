#include <stdio.h>
void main()
{
  int fn=1,n,i;
  printf("Entrez l'entier naturel X : ");
  scanf("%d", &n);
	  for(i=1;i<=n;i++){
	  	fn=fn*i;
	  }
	  printf(" %d : ",fn);
}
