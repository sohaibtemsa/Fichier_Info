#include <stdio.h>
void main()
{
 int N,NOMB,I;       /* nombre de données */
 long SOM;    /* la somme   des nombres entrés */
 SOM=0;
 I=1;
 do
    {
     	printf("Nombre de données : ");
 		scanf("%d", &N);
 		if(N>=0){
 			SOM+=N;
		 }
     	
    } while(N>=0);
 printf("La somme   des nombres est %ld \n", SOM);
}
