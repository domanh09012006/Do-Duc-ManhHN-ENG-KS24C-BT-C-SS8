#include<stdio.h>
int main(){
	int a, b, max=0;
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

	
	for(int i=0; i<3;i++){
		for(int j=0; j<3;j++){
			if(max=array[i][j]){
				array[i][j] = max;
				
				
			}
		}
	}
	printf("Gia tri lon nhat trong mang la: %d", max);
}
