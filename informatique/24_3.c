#include <stdio.h>
main()
{
 int N,i,tmp;      
 int SOM=0;

	do{
		printf("Donnez un Nombre: ");
 		scanf("%d", &N);
	}while(N<=0);
	
	tmp=N;
	
  	for(i=1;i<=tmp;i++){
 			SOM+=N;	
 			N--;
	}
	 printf("La somme des nombres est %d \n", SOM);
}
