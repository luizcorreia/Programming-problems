#include <stdio.h>
#define MAX 1001

int main(){
	int n = 0, m = 0, i = 0, j = 0, T[MAX][MAX], r1 = 0, r2 = 0, x = 0, y = 0, k = 1;
	
	while(1){
		scanf("%d %d", &m ,&n);
		getchar();
		
		if(!n && !m)
			break;
		
		for(i = 0; i < m; i++){
			for(j = 0; j < n; j++){
				scanf("%d", &T[i][j]);
				getchar();
			}
		}	
			
		x = 0;
		y = 0;
		
		do{
			scanf("%d %d", &r1, &r2);
			getchar();
			x += r1;
			y += r2;
		}while(r1 || r2);
		
		x %= n;
		y %= m;
		
		if(x <= 0)
			x *= -1;
		else
			x = n - x;
		
		if(y < 0)
			y = m + y;
		
		printf("Teste %d\n", k++);
		
		i = y;
		
		do{
			j = x;
			
			do{
				printf("%d ", T[i][j]);
				j = (j + 1) % n;
			}while(j != x);
			
			i = (i + 1) % m;
			printf("\n");
		}while(i != y);
		
		printf("\n");
	};

	return 0;
}
