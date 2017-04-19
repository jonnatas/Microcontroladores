#include <stdio.h>
#include <stdlib.h>

int divisao(int A, int B, int& resto){
	int res=B;
	int cont= 0;
	int sinalA=0;
	int sinalB=0;

	if(A<0){
		A=-A;
		sinalA = 1;
	}
	if(B<0){
		B=-B;
		sinalB=1;
	}
	while(res<A){
		res+=B;
		cont++;
	}	
	if(res>A)
		res-=B;

	resto=A-res;
	if(sinalA==1 && sinalB==1){}
	else if(sinalA==1)
		cont=-cont;
	else if(sinalB==1)
		cont=-cont;

	return cont;
}

int main(){
	int div;
	int A=29;
	int B=7;
	int resto=0;

	div = divisao(A,B,resto);

	printf("%d\n%d", div, resto);
}
