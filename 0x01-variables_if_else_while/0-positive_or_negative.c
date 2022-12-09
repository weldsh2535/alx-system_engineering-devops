#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if(n < 0){
		printf("%d is %s\n", n, "negative");
	}
	else if(n > 0){
		printf("%d is %s\n", n, "positive");
	}
	else{
		printf("%d is %s\n", n, "zero");
	}
	return (0);
}
