#include<stdio.h>
//Write a program to print prime numbers in a range.

int isPrime(int n);

void main() {
	int n1, n2;
	printf("enter n1 &n2\t");
	scanf("%d %d", &n1, &n2);
	printf("prime range between n1 & n2 :\n");
	for(int i=n1; i<=n2; i++){
		if(isPrime(i)){
			printf("%d\t", i);
		}
	}
}

int isPrime(int n){
	for(int i=2; i<=n/2; i++){
		if(n%i==0){
			return 0;
		}if(n%i!=0){
			return 1;
		}
	}
}
