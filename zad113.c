//Program treba naci i ispisat brojeve djeljive s 3 i s 5 u matrici velicine koju korisnik zada. 

#include<stdio.h>
int main()

{
	int i,j;
	int m,n;
	int M[50][50];
	printf("Unesi broj redaka i stupaca:");
	scanf("%d %d",&m,&n);
	printf("Unesi elemente matrice:\n");
for(i=0;i<m;i++){    
for(j=0;j<n;j++)    
{    
	scanf("%d",&M[i][j]);    
}    
}   

for(i=0;i<m;i++){

for(j=0;j<n;j++){

	if(M[i][j]%5 == 0 && M[i][j]%3==0){

		printf("%d ",M[i][j]);
}

}
	printf("\n");
}

return 0;
}
