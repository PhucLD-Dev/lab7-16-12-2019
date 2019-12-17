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
   }int max=arr[0];
   for(i=0;i<n;i++){
   	if(arr[i]%2 !=0 &&arr[i]>max)
max=arr[i]; }

   printf("so le cuoi cung trong mang %d",max);
}
return 0;
}

