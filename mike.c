#include <stdio.h>

int main(void) {
	long long a;
	long long b;
	long long c;
	
        printf("Hey! I'm Mike! Enter a number: ");
        scanf("%lli",&a);
        printf("Enter another number: ");
        scanf("%lli",&b);
        printf("Enter another number: ");
        scanf("%lli",&c);
        
	float sum = a + b + c;
	float average = sum / 3;
	printf("The average is %f  ", average);
	return 0;
}
