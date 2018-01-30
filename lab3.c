#include <stdio.h>
#include <stdlib.h>
int n=0;
int * myalloc(int y){
	n+=y*sizeof(int);
	return (int *)malloc(sizeof(int)*y);
}
void myfree(int *x){
	n-=sizeof(int);
	free(x);
}

// void p(int n){
// 	printf("%u\n", &n);
// 	p(n+1);
// }

// void g(){
// 	int qv=1;
// 	printf("%u\n", &qv);
// }
int main(){
	// p(1);
	// g();
	// printf("%d\n",n );
	// int * x = myalloc();
	// *x=1;
	// printf("%u\n%d\n",x,n);
	// printf("x=%d\n", *x);
	// myfree(x);
	// printf("%ld\n%d\n",sizeof(*x),n);
	// printf("x=%d\n", *x);

	time_t t;
   
   	srand((unsigned) time(&t));
   	int r = (rand()%15000)+10000;
   	int *A = myalloc(r);
   	printf("%d\n", r);
   	printf("1st = %u\n2nd = %u",A, &A[r-1]);
	return 0;
}

