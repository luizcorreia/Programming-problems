#include <stdio.h>

int main(){
	int R[31], L[31], n = 0, i = 0, tam = 0, TOT = 0;
	char l;
	
	while(scanf("%d", &n) != EOF){
		TOT = 0;
	
		for(i = 0; i < 31; i++){
			R[i] = 0;
			L[i] = 0;
		}
	
		for(i = 0; i < n; i++){
			scanf("%d %c", &tam, &l);

			tam -= 30;
			
			if(l == 'D'){
				if(L[tam]){
					L[tam]--;
					TOT++;
				}else
					R[tam]++;
			}else{
				if(R[tam]){
					R[tam]--;
					TOT++;
				}else
					L[tam]++;
			}
		}
		
		printf("%d\n", TOT);
	}	

	return 0;
}
