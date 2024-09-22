#include<stdio.h>
int main(){
	int a[10] = {1,12,23,34,45,56,67,78,89,90};
	int tofind = 45;
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
