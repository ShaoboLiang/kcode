//
//  fathm_ft.c -- convert 2 fathoms to feet
//  
//
//  Created by Alogon on 2018/11/22.
//

#include "fathm_ft.h"
int main(void)
{
    int feet, fathoms;
    
    fathoms = 2;
    feet = 6 * fathoms;
    printf("There are %d feet in %d fathoms!\n", feet, fathoms);
    printf("Yes, I said %d feet!\n", 6 * fathoms);
    
    return 0;
}
