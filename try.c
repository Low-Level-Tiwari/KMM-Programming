typedef struct try{
	unsigned long (*squ)();
}try;

typedef struct num{
	unsigned long n;
}num;

void makeNum(unsigned long a){
	n = a;
}

unsigned long squ(){
	unsigned long output;
	output = n*n;
	return output;
}
unsigned long use(){
	unsigned long output;
	try n1;
	n1 = makeNum(4);
	output = @n1.squ();
	return output;
}
