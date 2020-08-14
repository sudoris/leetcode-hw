#include <stdio.h>

void solve(int ans, int n){
	if(ans > n) { return; }
	printf("%d ", ans);
	int tmp = ans%10;
	if(tmp > 0){
		solve(ans*10+tmp-1, n);		
	}
	if(tmp < 9){
		solve(ans*10+tmp+1, n);
	}
}

int main(){
	int n, i;
	printf("Enter value for N: ");
	scanf("%d", &n);
	// printf("0 ");
	for(i = 1; i < 10; i++){
		solve(i, n);
	}

	printf("\n");

	return 0;
}