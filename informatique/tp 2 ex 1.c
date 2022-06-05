#include<stdio.h>
main()
{
	int A[50][50], B[50][50] ,P[50][50];
	int L, M1, M2, N, i, j, k;
	refaire :
	printf("donnez les dimension de A :");
	scanf("%d %d",&L ,&M1); 
	printf("donnez les dimension de B :");
	scanf("%d %d",&M2 ,&N);
	if(M1!=M2)
	{
		printf("\nErreur des dimensions !!!!\n");
	    goto refaire;
	}
	printf("\n--) saisie de la matrice A:\n");
	for(j=0;j<L;j++)
	   for(i=0;i<M1;i++)
	   {
	   	printf("A[%d][%d] :",j,i);
	   	scanf("%d",&A[j][i]);
	   }
	   
	   printf("\n--) affichage de la matrice A:\n");
	for(j=0;j<L;j++){
	   for(i=0;i<M1;i++)
	   {
	   	printf("%d\t\t",A[i][j]);
	   	
	   }
	   printf("\n");
	}
	
	
	printf("\n--) saisie de la matrice B:\n");
	for(j=0;j<L;j++)
	   for(i=0;i<M1;i++)
	   {
	   	printf("B[%d][%d] :",j,i);
	   	scanf("%d",&B[j][i]);
	   }
	   
	   printf("\n--) affichage de la matrice B:\n");
	for(j=0;j<L;j++){
	   for(i=0;i<M1;i++)
	   {
	   	printf("%d\t\t",B[i][j]);
	   	
	   }
	   printf("\n");
	}
	    
}

