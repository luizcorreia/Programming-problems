#include<stdio.h>
#include<stdlib.h>


int main(){
	long long int  n = 0, k = 0, i = 1, r = 1, a = 1;
	long long int *f = malloc(1000010 * sizeof(long long int));

	for(i = 1; i < 1000001; i++){
		a = i;
		
		while(a % 10 == 0)
			a /= 10;
		
		r *= a;
		
		while(r %10 == 0)
			r /= 10;
		
		f[i] = r % 10000000;
	}


	while(scanf("%lld",&n)!=EOF)
		printf("Instancia %lld\n%lld\n\n", ++k, f[n] % 10);
		
	return 0;
}
