#include <stdio.h>

void function(int n);

int main(){
	int n;
	function(n);
}

void function(int n){
	printf("Enter number: ");
	scanf("%d", &n);
	for(int i = 1; i <= n; ++i){
		for(int j = 1; j <= n; ++j){
			if(i == 1 || i == n || j == 1 || j == n){
               			printf("* ");
			}else{
                	 	printf("  ");
			}
		}
		printf("\n");
	}
}
