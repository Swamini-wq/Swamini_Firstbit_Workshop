#include <stdio.h>
#include<string.h>
int main()
{
	char str[100],ch,replace;
	printf("enter a string:");
	scanf("%s",str);
	
    printf("enter a  character to replace:");
	scanf("%c",&ch);
	
	printf("enter  special symbol:");
	scanf("%c",&replace);
	
	for (int i =0;str[i] !='\0';i+=)
	{
		if (str[i]==ch){
			str[i]=replace;
		}
	}
	printf("updated string:%s",str);
	return 0;
}