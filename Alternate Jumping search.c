//Alternate searching
#include<stdio.h>
int main(){
	int a[10] = {1,12,23,34,45,56,67,78,89,90};
	int tofind = 45;
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
