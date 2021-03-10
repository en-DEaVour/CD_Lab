#include<stdio.h>
#include<string.h>
void main(){
 // char a[10][10],b[10];
  char production[10][10]; 
  int i;
  static int j;
//  int n,i,j,k;
//  printf("enter how many productions\n");
//  scanf("%d",&n);
//  printf("enter the production rules \n");
//  for(i=0;i<n;i++){
//    scanf("%s",a[i]);
//  }
//  printf("follow(%c)={$}\n",a[0][0]);
//  for(i=1;i<n;i++){
//    printf("follow(%c)={",a[i][0]);
//    for(j=0;j<n;j++){
//        for(k=3;k<strlen(a[j]);k++)
//        {
//            if(a[j][k]==a[i][0])
//            {
//                printf("%c",a[j][k+1]);
//            }
//        }
//    }
//    printf("}\n");
//  }
// }
    strcpy(production[0], "E->TE'"); 
    strcpy(production[1], "E'->+TE'"); 
    strcpy(production[2], "E'->E"); 
    strcpy(production[3], "T->FT'"); 
    strcpy(production[4], "T'->*FT'"); 
    strcpy(production[5], "T'->e"); 
    strcpy(production[6], "F->(E)"); 
    strcpy(production[7], "F->id"); 
//printf("%c",production[5][1]);


//for(i=3;i<strlen(production[0]);i++)
//{
//	if(production[0][i]>=97 || production[0][i]<=122)
//	{
//		printf("%c",production[0][i]);
//		j = i;
//	}
//	break;
//}
for(i=0;i<8;i++)
{
	if((production[i][3]||production[i][4])>=97 || (production[i][3]||production[i][4])<=122)
	{
	//	int k=3;
	//	if(production[j][k]>=97 || production[0][k]<=122)
	//	{
			printf("%c",production[i][4]);
	//		j = k;
	}
	break;
	//	break;
}
}
	
//	else
//	{
//		printf("MK");
//	}








