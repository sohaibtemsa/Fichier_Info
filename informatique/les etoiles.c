#include<stdio.h>
main(){
	int n,ns,nl,i,j;
	printf("donner n:");
	scanf("%d",&n);
	ns=n-1;
	nl=1;
		
		for(i=1;i<=n;i++){
			for(j=1;j<=ns;j++){
				printf(" ");
			}ns--;
			
			for(j=1;j<=nl;j++){
				if(j==1 || j==nl || i==n){
					printf("*");
				}
				else {
					printf("o");
				}
			}nl+=2;
			printf("\n");
		}
}
