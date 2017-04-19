#include <stdio.h>
#include <stdlib.h>

unsigned long long DuploFatorial(unsigned long long n){
	return (n<=1) ? 1 : n*DuploFatorial(n-2);
}

int main(){
	unsigned long long duplo = DuploFatorial(10);
	printf("%d\n", duplo);
}
