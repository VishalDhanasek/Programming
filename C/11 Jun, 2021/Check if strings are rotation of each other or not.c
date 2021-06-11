/* A program to check if strings are rotation of each other or not
   Example:
   INPUT: ABCDE, DEABC
   OUTPUT: Second string is a rotation of first string */

#include <stdio.h>  
#include <string.h>  
   
int main()  
{  
    char str1[] = "abcde", str2[] = "deabc";  
          
    if(strlen(str1) != strlen(str2)){  
        printf("Second string is not a rotation of first string");  
    }  
    else{  
  
        strcat(str1, str1);  
          
       
        if(strstr(str1, str2) != NULL)  
            printf("Second string is a rotation of first string");  
        else  
            printf("Second string is not a rotation of first string");  
    }  
   
    return 0;  
}
