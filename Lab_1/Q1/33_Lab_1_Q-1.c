



#include <stdio.h>
#include <ctype.h>
int main()    
{
	int totalCount=0;
	int digitCount=0;
	int spaceCount=0;
	int lineCount=1;
	int specialCharacterCount=-1;
	int alphabetCount=0;
	FILE *fp ;  
	char ch ;  
	fp = fopen("SampleTextFileForQ1.txt","r") ;  
	while ( 1 )  
	{  
		ch = fgetc ( fp ) ;
		if (isdigit(ch)!=0)			//Count for digits
		 	digitCount++;
		if (ch==' ')                //Count for spaces
		{
		 	spaceCount++;
		}
		if (ch=='\n')
		{
			lineCount++;
		}
		if (isdigit(ch)==0 && isalpha(ch)==0 && ch!=' ' && ch!='\n')
		{
			specialCharacterCount++;
		}
		if (isalpha(ch)!=0)
		{
			alphabetCount++;
		}
		if ( ch == EOF )  			//When Reach End of file
			break ;  
		printf("%c",ch); 
		totalCount++;              //Total characters count
	}  
	fclose (fp ) ;
	printf("\n\nTotal characters:\t%d\n",totalCount);      			 //part-a
	printf("Number of digits:\t%d\n",digitCount);           	   	 //part-b
	printf("Number of spaces:\t%d\n",spaceCount);         			 //part-c
	printf("Number of lines:\t%d\n",lineCount);           			 //part-d
	printf("Number of specialChar:\t%d\n",specialCharacterCount);    //part-e
	printf("Number of alphabet:\t%d\n",alphabetCount);               //part-f
}

