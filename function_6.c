#include <stdio.h>

void function(int n);

int main(){
	int n;
	printf("Enter number to - !: ");
	scanf("%d", &n);
	function(n);
}

void function(int n){
	long long result = 1;
	for(int i = 1; i <= n; ++i){
		result *= i;
	}
	printf("!%d = %lld\n", n, result);
}
