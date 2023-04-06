// nguon
// vi du 
#include <stdio.h>
void nhapMang(int a[], int &n) {
	n = 0;
	int x;
	do {
		printf("Nhap 1 so nguyen cua mang . Nhap so 0 de ket thuc : ");
		scanf("%d", &x);
		if (x != 0)
			a[n++] = x;
	} while(x != 0);
}
void xuatMang(int a[], int n) {
	for(int i = 0; i<n;i++)
		printf("%4d", a[i]);
} 
void Selection_sort(int a[], int n){
	int min;
	for (int i = 0; i < n - 1; i++){
		min = i;
		for (int j = i + 1; j < n; j++){
			if (a[min] > a[j]){
				min = j;
			}
		}
		if (i != min){
			int temp = a[i];
			a[i] = a[min];
			a[min] = temp;
		}
	}
}
int main(){
	int n,a[100];
	nhapMang(a,n);
	printf("Mang vua nhap :");
	xuatMang(a,n);
	Selection_sort(a,n);
	printf("\nMang tang dan : ");
	xuatMang(a,n);
}
