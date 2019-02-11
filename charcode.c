//
/*  charcode.c - displays code number for a character */
//  
//
//  Created by Alogon on 2018/11/23.
//

#include <stdio.h>
int main(void)
{
    char ch;
    
    printf("Please enter a character.\n");
    scanf("%c", &ch);
    printf("The code for %c is %d.\n", ch, ch);
    
    return 0;
}
