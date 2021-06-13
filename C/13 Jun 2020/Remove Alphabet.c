/* The program must accept two alphabets CH1 and CH2 as the input. The program must print the output based on the following conditions.
- If CH1 is either 'U' or 'u' then print all the uppercase alphabets except CH2.
- If CH1 is either 'L' or 'l' then print all the lowercase alphabets except CH2.
- For any other values of CH1 then print INVALID.

Example Input/Output:
Input:
U v

Output:
A B C D E F G H I J K L M N O P Q R S T U W X Y Z    */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch1, ch2;
    scanf("%c %c", &ch1, &ch2);
    ch1 = tolower(ch1);
    if(ch1 == 'u')
    {
        ch2 = toupper(ch2);
        char alpha = 'A';
        while(alpha <= 'Z')
        {
            if(alpha != ch2)
            {
                printf("%c ", alpha);
            }
            alpha++;
        }
    }
    else if(ch1 == 'l')
    {
        ch2 = tolower(ch2);
        char alpha = 'a';
        while(alpha <= 'z')
        {
            if(alpha != ch2)
            {
                printf("%c ", alpha);
            }
            alpha++;
        }
    }
    else
    {
        printf("INVALID");
    }
    return 0;
}
