#include<stdio.h>
int main()
{
	char arr[100];
	

	int n,m;
	printf("enter the starting index of your string to print");
	scanf("%d",&n);
	printf("enter the ending index of your string to print");
	scanf("%d",&m);
	
	
	printf("enter the string");
	scanf("%s",arr);
	
	for(int i=n;i<=m;i++)
	{
		printf("%c",arr[i]);
	}
}
