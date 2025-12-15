#include <stdio.h>
int main(void) {
	int score;
	
	scanf("%d",&score);
	//A 85 B 75 C > 55
	if (score >= 68) {
		if(score >= 85){
			printf("%d(A)",score);
		}
		else if(score >= 75){
			printf("%d(B)",score);
		}
		else{
			printf("%d(C)",score);
		}
	} else {
		// D 55 F
		if(score >= 55){
			printf("%d(D)",score);
		}
		else{
			printf("%d(F)",score);
		}
	}
	
}

