//Front to End searching
#include<stdio.h>
int main(){
	int size;
	printf("Enter how many elements you want to enter?\n");
	scanf("%d",&size);
	int a[size];
	int i=0;
	printf("Enter elements:\n");
	for(i=0;i<size;i++){
		scanf("%d",&a[i]);
	}
	int tofind;
	printf("Enter which number you want to choose?\n");
	scanf("%d",&tofind);
	
	int start = 0, end = sizeof(a);
	while(1){
		if(a[start]==tofind){
			printf("%d found at %d index",tofind,start);
			break;
		}
		if(a[end]==tofind){
			printf("%d found at %d index",tofind,end);
			break;
		}
		else{
			start+=1;
			end-=1;
		}
	}
}
