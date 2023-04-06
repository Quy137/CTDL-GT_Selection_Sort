// nguon https://viblo.asia/p/sap-xep-chen-sap-xep-chon-va-sap-xep-tron-Do754zX4ZM6
// cai dat
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
