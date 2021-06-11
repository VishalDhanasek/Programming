/* The program must accept two string values S1 and S2 as the input. 
The program must print the longest string among the two string values as the output. 
If both string values have the same length, then the program must print the first string as the output.

Example Input/Output 
Input:
green banana

Output:
banana        */

#include <stdio.h>
#include <string.h>

int main()
{
   char str1[100],str2[100];
   int len1, len2;
   scanf("%s %s",str1,str2);
   len1 = strlen(str1);
   len2 = strlen(str2);
   if(len1>len2)
   {
       printf("%s",str1);
   }
   else if(len2>len1)
   {
       printf("%s",str2);
   }
   else
   {
       printf("%s",str1);
   }
   return 0;
}
