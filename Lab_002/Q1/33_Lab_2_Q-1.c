// Write a C program to check whether a given String is accepted by given DFA or not.
#include <stdio.h>
#include <string.h>
int main()
{
	int state[10],symbol[10],final_state,curr_state,n,q,i,j,transition[10][10],ch,k;
	char str[10];
	printf("Enter the total number of state: ");
	scanf("%d",&q);
	printf("Enter the total number of input symbol: ");
	scanf("%d",&n);
	printf("  ---------:Enter the State:---------\n");
	for(i=0;i<q;i++)
    {
	  scanf("%d",&state[i]);
	}
	printf("  --------:Enter the Input Symbol:---------\n");
	for(j=0;j<n;j++)
    {
	  scanf("%d",&symbol[j]);
	}
	printf("Initial State: %d",state[0]);
	printf("\nEnter the Final State: ");
	scanf("%d",&final_state);
	printf("\n  ----------:Enter the transition:------------\n\n");
	for(i=0;i<q;i++)
    {
	  for(j=0;j<n;j++)
	  {
		printf("For intput symbol %d from state %d:-  ",symbol[j],state[i]);	
		scanf("%d",&transition[i][j]);
      }
	}
	printf("\n       ------:Transition Table:-------\n\n");
	printf("    State\tInput Symbol\n\n");
	printf("              ");
	for(i=0;i<n;i++)
    {
		printf("    %d",symbol[i]);
    }
	printf("\n\n");
    for(i=0;i<q;i++)
    { 
		printf("    %d",state[i]);
		printf("         ");
		for(j=0;j<n;j++)
		{
			printf("    %d",transition[i][j]);
		}
		printf("\n");
    }
	printf("-----------------------------------------------\n");
	printf("Enter the String: ");
	scanf("%s",str);
    k=0;
	for(i=0;i<strlen(str);i++)
	{
		ch=str[i]-'0';
		curr_state=transition[k][ch];
		k=curr_state-1;
	}
	if(curr_state==final_state)
		printf("This String is Accepted");
	else
		printf("This String Not Accepted");

	 
	return 0;
}


