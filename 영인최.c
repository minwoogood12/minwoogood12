#include <stdio.h>

int func(int x){

	return 7*x*x*x + 3*x*x+ 9*x + 179;
	
}


int main(void){

	int a,b,c,_a,_b,_c;
	float d,e,f,_d,_e,_f;
	scanf("%d %d %d", &a,&b,&c);
	scanf("%f %f %f", &d,&e,&f);
	
	_a = func(a);
	_b = func(b);
	_c = func(c);
	_d = func(d);
	_e = func(e);
	_f = func(f);
	
	printf("( %d, %d ), ( %d , %d ), ( %d , %d )\n\n",a,_a,b,_b,c,_c);
	printf("( %f, %f ), ( %f , %f ), ( %f , %f )\n\n",d,_d,e,_e,f,_f);
	printf("2023706004 최영인");
	
	
	
	return 0;
}
