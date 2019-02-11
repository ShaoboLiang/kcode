//
//  two_func.c -- a program using two functions in one file
//  
//
//  Created by Alogon on 2018/11/22.
//

#include <stdio.h>
void butler(void);     /* ANSI/ISO C function prototying */
int main(void)
{
    printf("I will summon the butler function.\n");
    butler();
    printf("Yes. Bring me some tea and writeable DVDs.\n");
    
    return 0;
}

void butler(void)       /* start of function definition */
{
    printf("You rang, sir?\n");
}
