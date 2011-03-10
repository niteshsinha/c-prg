#include<stdio.h>
main(){

	int l,u,s;
	float f,c;
	l=0;
	u=300;
	s=20;
	f=l;
	while(f<u){
		printf("%3.0f \t %6.1f \n",f,(5.0/9.0)*(f-32));
		f=f+s;		
		}
	}
