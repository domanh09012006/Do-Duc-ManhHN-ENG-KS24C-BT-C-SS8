#include<stdio.h>
int main(){
	int array[3][3]={{1,2,3},{4,5,6},{7,8,9}}, n, m;
		printf("Tim phan tu co trong mang: ");
		scanf("%d", &n);
	for(int i=0; i<3;i++){
		for(int j=0; j<3;j++){
			if(n == array[i][j]){
				printf("Phan tu %d co o trong mang, o vi tri array[%d][%d]", n, i, j);
				m+=3;
			}else{
				m+=3;
			}
		}
	}
		
}

		
