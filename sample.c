#include <stdio.h>
#define N 3

double A[N*N],x[N];

int main(void)
{
	static long int i,n=N,inc =1,info,piv[N];
	A[0]=1.;
	A[1]=3.;
	A[2]=1.;
	A[3]=1.;
	A[4]=1.;
	A[5]=-2.;
	A[6]=1.;
	A[7]=-3.;
	A[8]=-5.;
	x[0]=1.;
	x[1]=5.;
	x[2]=10.;
	fprintf(stdout,"N= %d\n",N);
	dgesv_(&n,&inc,A,&n,piv,x,&n,&info);
	for(i=0; i<N;i++) fprintf(stdout,"%lf\n",x[i]);
	return 0;
}
