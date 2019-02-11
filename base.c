//
/*  base.c -- prints 100 in decimal, octal, and hex */
//  
//
//  Created by Alogon on 2018/11/23.
//

#include <stdio.h>
int main(void)
{
    int x = 100;
    
    printf("dec = %d; octal = %o; hex = %x\n", x, x, x);
    printf("dec = %d, octal = %#o; hex = %#x\n", x, x, x);
    
    return 0;
}
