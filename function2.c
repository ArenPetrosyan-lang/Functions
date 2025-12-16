#include <stdio.h>

void function(int n);

int main(){
	int n; 
	function(n);
}

void function(int n){
	printf("Enter number: ");
	scanf("%d", &n);
	int tmp = 0;
	for(int i = 1; i <= n; ++i){
		for(int j = 1; j <= i; ++j){
		       	printf("%d ", tmp++);
		}
		printf("\n");
	}
}
