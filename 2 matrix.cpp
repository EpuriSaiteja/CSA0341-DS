#include<stdio.h>
int main(){
	int a,s;
	printf("n=");
	scanf("%d",&n)
}#include<stdio.h>
int main(){	
	int size,i,j,rotate;
	printf("Size of matrix: ");
	scanf("%d",&size);
	int l[size*size];
	int m[size][size];
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			scanf("%d",&m[i][j]);
		}
	}
		
	printf("Times of Rotation: ");
	scanf("%d",&rotate);
	rotate=rotate % 4;
	while(rotate!=0){
		int end=size,start=0,train=0;
		for(j=start;j<end;j++){
			for(i=end-1;i>=start;i--){
				l[train]=m[i][j];
				train++;
			}
		}
		train=0;
		for(i=0;i<size;i++){
			for(j=0;j<size;j++){
				m[i][j]=l[train];
				train++;
			}
		}
		rotate--;
	}
	printf("\n");
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			printf("%d ",m[i][j]);
		}
		printf("\n");
	}
}
