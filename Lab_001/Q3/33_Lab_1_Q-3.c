// Write a C program to display the operator name of a given input.
#include<stdio.h>
#include<string.h>

void main()
{
int i,flag=0,j=0;

char s[100][10]={"+","-","*","/","++","--","=","==","!=","<","<=",">",">=","!","&&","||","%","^"};
char t[100][20]={"addition","subtraction","multiplication","division","increment","decrement","assign",
"equalto","! equal to","lessthan","lessthan equalto","greater than","greaterthan equalto","not","AND","OR",
"module","power"};

char w[10];
printf("Enter a operator:");
gets(w);

	for(i=0;i<100;i++)
    {
          if(strcmp(w,s[i])==0)
          {
          		flag=1;
          		j=i;
          }
	}	
	if(flag==1)
	{
		printf("%s is a %s operator",w,t[j]);
	}
	else
	{
	 	printf("Choosen operator is not an Operator");
	}
}


