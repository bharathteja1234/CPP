#include<stdio.h> 
int main() 
{
	char s[100],r[100];
	int i,end,count=0;
	printf("enter the string:\n"); 
	gets(s); 
	while(s[count]!='\0')
	{
		count++;
	}
	end=count-1; 
	for(i=0;i<count;i++) 
	{
		r[i]=s[end];
		end--;
    }
	printf("reverse of given string is:%s" ,r); 
}
