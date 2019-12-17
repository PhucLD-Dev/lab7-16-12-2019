#include<stdio.h> 
int main(){
	int n;
	printf("nhap so phan tu n=");
	scanf("%d",&n);
	int a[n];
	for (int i=0;i<n;i++){
		printf("nhap mang arr[%d]:",i);
		scanf("%d",&a[i]);
	} 
	int count=0,max_count=0;
	for(int i=0;i<n;i++){
	if(a[i]>0){
	count++;
	if(count>max_count){ 
		max_count=count;}
	}else{count=0; 
	} 
}printf("max: %d\n",max_count);
return 0;
}
