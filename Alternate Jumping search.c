//Alternate Jumping search
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
	int first = 0, next = 1;
	while(1){
		if(a[first]==tofind){
			printf("%d found at %d index",tofind,first);
			break;
		}
		if(a[next]==tofind){
			printf("%d found at %d index",tofind,next);
			break;
		}
		else{
			first+=2;
			next+=2;
		}
	}
}
