#include <stdio.h>
int isprime (int num){
	if(num<=1)
	return 0;
	for (int i=2; i*i<+num;i++)
{
	if(num%i==0)
	return0;
}
return 1;
}
int main (){
	int start, end,sum=0;
	printf("enter range(start and end):");
	scanf ("%d %d",&start , &end);
	
	for (int i=start;i<=end;i++){
		if (isprime(i))	{
			sum+=i;
		}}
		printf(" sum of prime numbers=%d,sum");
		return 0;
}