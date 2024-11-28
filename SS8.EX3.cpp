#include<stdio.h>
int main(){
	int array[3][3];
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			printf("Nhap phan tu cho mang: ");
			scanf("%d", &array[i][j]);
		}
	}
	printf("Cac phan tu trong mang vua nhap la:\n");
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			printf("%2d", array[i][j]);
		}
			printf("\n");
	}
	return 0;
}
