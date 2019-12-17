#include<stdio.h>
int main(){
	int n;
	printf("nhap so luong: \n");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
	printf("nhap so trong day %d=\n", i+1);
	scanf("%d",&arr[i]);
}
	for (int i=0; i<n-1; i++)	
{
   for (int j=0; j<n-i-1; j++)
   {
        if (arr[j] > arr[j+1])
        {
           int temp = arr[j];
           arr[j] = arr[j+1];
           arr[j+1] = temp;
        }
   }int min;
   for(i=0;i<n;i++){
   	if(arr[i]>0)
   	min = arr[i];
   	break;
   }
   for(i=0;i<n;i++){
   	if(arr[i]>0 && arr[i]<min)
min=arr[i]; }

   printf("so duong nho nhat trong mang la: %d",min);
}
return 0;
}

