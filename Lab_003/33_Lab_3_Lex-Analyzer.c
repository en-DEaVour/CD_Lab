// Write a C program to implement Lexical Analyzer.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h> 
char token[10];
bool isidentifier()
{
	int final_state=2,curr_state,i,symbol_index,k,s;
	int transition[4][3]={{2,3,4},{2,2,2},{3,3,3},{2,2,2}};
	int state[4]={1,2,3,4};	            	
    k=0;
		for(i=0;i<strlen(token);i++)
	  { 
        if('a'<=token[i] && token[i]<='z' || 'A'<=token[i] && token[i]<='Z')
		    symbol_index=0;
		else if('0'<=token[i] && token[i]<='9')
			 symbol_index=1;
		else if(token[i]=='_')
			 symbol_index=2;
		else
			return false;
		curr_state=transition[k][symbol_index];
		k=curr_state-1;
	  }
	if(curr_state==final_state)
		 return true;
    else
	{
		for(i=0;i<strlen(token);i++)
	    { 
		    if('0'<=token[i] && token[i]<='9')
                s=0;
			else if(token[i]=='.')
				s=1;
			else
				return false;
        }
		if(s==1)
			printf("%s ---> Floating Constant\n",token);
		else if(s==0)
             printf("%s ---> Integer Constant\n",token);
	}   
	return false;
}

 bool iskeyword()
{
	char keywords[32][10]={"auto","const","double","float","int","short","struct","unsigned",
	"break","continue","else","for","long","signed","switch","void","case","deafult",
	"enum","goto","register","sizeof","typedef","volatile","char","do","exturn","static",
	"union","while","return","if"};
	int i;
    for(i=0;i<33;i++)
	{
		if(strcmp(token,keywords[i])==0)
		{
			return true;
		}
	}
	if(i==33)
	{
		if(isidentifier())
		   printf("%s ---> identifier\n",token);
	}
	return false;
}

bool isoperator()
{
	if (strcmp(token,"+")==0 ||strcmp(token,"-")==0|| strcmp(token,"*")==0||  
       strcmp(token,"/")==0 || strcmp(token,"<")==0|| strcmp(token,">")==0||  
       strcmp(token,">=")==0 || strcmp(token,"<=")==0 ||strcmp(token,"&")==0|| 
	   strcmp(token,"=")==0|| strcmp(token,"==")==0|| strcmp(token,"!")==0 || 
	   strcmp(token,"||")==0 || strcmp(token,"{")==0 || strcmp(token,"}")==0||  
	   strcmp(token,"(")==0 || strcmp(token,")")==0 ) 
	 return true;
	
	return false;
}

int main(int argc, char *argv[])
{
    FILE *f;
	int i=0;
    f=fopen("program.txt","r");
    if(f==NULL)
	{
       printf("File Not Found");
		exit(1);
	}
    else
    {
        while(fscanf(f,"%s",token)!=EOF)
        {
             if(iskeyword())
				printf("%s ---> Keyword\n",token);

		     if(isoperator())
				printf("%s ---> Operator\n",token);
        }
        fclose(f);
    }
}

