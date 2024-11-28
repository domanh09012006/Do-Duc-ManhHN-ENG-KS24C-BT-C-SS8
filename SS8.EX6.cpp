#include<stdio.h>
int main(){
	int a, sum=0;
	printf("Nhap gia tri rows va cols cho mang: ");
	scanf("%d", &a);
	int array[a][a];
	for(int i=0; i<a; i++){
		for(int j=0; j<a; j++){
			printf("array[%d][%d]", i, j);
			scanf("%d", &array[i][j]);
		}
	}
	for(int i=0; i<a; i++){
		for(int j=0; j<a; j++){
			if(i == j){
				sum+=array[i][j];
			}
		}
	}
	printf("Tong phan tu duong cheo chinh: %d", sum);
}
