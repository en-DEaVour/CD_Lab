// Write a C program to display whether the given input is keyword or not.
#include <stdio.h>
#include <string.h>
int main() {
   char keyword[32][10]={
      "auto","double","int","struct","break","else","long",
      "switch","case","enum","register","typedef","char",
      "extern","return","union","const","float","short",
      "unsigned","continue","for","signed","void","default",
      "goto","sizeof","voltile","do","if","static","while"
   } ;
   char input[10];
   printf("Give input: ");
   scanf("%s",input);
   int flag=0,i;
   for(i = 0; i < 32; i++) {
      if(strcmp(input,keyword[i])==0) {
         flag=1;
      }
   }
   if(flag==1)
      printf("-> %s is a keyword",input);
   else
      printf("-> %s is not a keyword",input);
}
