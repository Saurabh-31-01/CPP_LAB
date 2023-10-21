#include<stdio.h>
#include<string.h>
int main()
{
	char str1[10], str2[20];
	int result;
	printf("Enter first string=");
	scanf("%s",str1);
	printf("ENter second string=");
	scanf("%s",str2);
	result= strncmp(str1,str2,3);
	printf("%d\n",result);
	if(result==0)
		printf("Equal");
	else if(result==1)
		printf("First string is greater");
	else
		printf("First string is smaller");
	return 0;
	
}
