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
	int s=0,max_s=0;
	for(int i=0;i<n;i++){
	if(a[i]>0){
	s=s+a[i];
	if(s>max_s){ 
		max_s=s;}
	}else{s=0; 
	} 
}printf("max: %d\n",max_s);
return 0;
}
