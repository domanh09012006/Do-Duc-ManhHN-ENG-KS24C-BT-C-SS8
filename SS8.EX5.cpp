#include<stdio.h>
int main(){
	int a, b, sum=0;
	printf("Nhap gia tri rows cho mang: ");
	scanf("%d", &a);
	printf("Nhap gia tri cols cho mang: ");
	scanf("%d", &b);
	
	int array[a][b];
	
	for(int i=0; i<a; i++){
		for(int j=0; j<b; j++){
			printf("array[%d][%d]", i, j);
			scanf("%d", &array[i][j]);
		}
	}
	for(int i=0; i<a; i++){
		for(int j=0; j<b; j++){
			if(i==0 || i == a-1 || j==0 || j ==b-1){
			
			sum+=array[i][j];
			}
		}
	}
	printf("Tong cua cac phan tu duong bien la: %d", sum);
}
