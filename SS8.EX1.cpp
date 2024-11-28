#include<stdio.h>
int main(){
	// Khai bao va nhap cac phan tu cho mang so nguyen
	// B1: Khai bao va nhap gia tri cho rows va cols
	int a, b;
	printf("Nhap gia tri rows cho mang: ");
	scanf("%d", &a);
	printf("Nhap gia tri cols cho mang: ");
	scanf("%d", &b);
	// B2: Khai bao array[rows][cols]
	int array[a][b];
	// B3: Nhap cac phan tu cho mang hai chieu
	for(int i=0; i<a; i++){
		for(int j=0; j<b; j++){
			printf("array[%d][%d]", i, j);
			scanf("%d", &array[i][j]);
		}
	}
	// B4: dung vong lap in cac phan tu cua mang hai chieu
	printf("Phan tu trong mang la:\n");
	for(int i=a-1; i>=0; i--){
		for(int j=b-1; j>=0; j--){
			printf("%2d", array[i][j]);
		}
		printf("\n");
	}
	return 0;
}
