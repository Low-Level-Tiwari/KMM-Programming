#include<stdio.h>
#include<stdlib.h>

typedef struct try{
	unsigned long (*squ)();
}try;

typedef struct num{
	try* Try;
	unsigned long n;
}num;

unsigned long squ(){
	unsigned long output;
	output = n*n;
	return output;
}

num* makeNum(unsigned long k){
	num* nk = malloc(sizeof(num));
	nk->Try.squ = squ;
	nk->n = k;
	return nk;	
}

void main(){
	/*try n1;
	n1 = makeNum(4);
	output = @n1.squ();
	return output;*/
	num* n1;
	n1=makeNum(4);
	n1->Try.squ;
}
