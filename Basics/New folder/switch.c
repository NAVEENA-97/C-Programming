#include<stdio.h>
int main()
{
int a,b;
scanf("%d %d",&a,&b);
switch(a,b)
{
	case 'a'<'b':
	printf("a is small");
	break;
	case 'a'>'b':
	printf("b is small");
	break;	
	default :
	printf("Error");
	break;
}
}
