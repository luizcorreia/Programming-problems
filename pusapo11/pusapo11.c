#include <stdio.h>
#include <stdlib.h>

int V[100], M = 0;

inline int pula(int from, int size){
	int i = from;
	
	for(; i < M; i += size)
		V[i] = 1;
		
	for(i = from; i >= 0; i -= size)
		V[i] = 1;
}

int main(){
	
	int n = 0, i = 0, s = 0, p = 0;
	
	scanf("%d %d", &M, &n);

	for(i = 0; i < M; i++)
		V[i] = 0;

	for(i = 0; i < n; i++){
		scanf("%d %d", &s, &p);
		pula(s - 1, p);		
	}
	
	for(i = 0; i < M; i++)
		printf("%d\n", V[i]);
	

	return 0;
}
