/* nogood.c -- a program with errors */
//  nogood.c
//  
//
//  Created by Alogon on 2018/11/22.
//

#include <stdio.h>
int main(void)
{
 int n, n2, n3;
 
 /* this program has several errors */
  n =  5;
  n2 = n * n;
  n3 = n * n2;
  printf("n = %d, n squared = %d, n cubed = %d\n", n, n2, n3)
  
  return 0;
}
