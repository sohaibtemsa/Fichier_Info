#include <stdio.h>
void main()
{
 int N,NOMB,I;       /* nombre de donn�es */
 long SOM;    /* la somme   des nombres entr�s */
 SOM=0;
 I=1;
 do
    {
     	printf("Nombre de donn�es : ");
 		scanf("%d", &N);
 		if(N>=0){
 			SOM+=N;
		 }
     	
    } while(N>=0);
 printf("La somme   des nombres est %ld \n", SOM);
}
