#include <stdio.h>
/*test our power function*/

int power(int m, int n);
main ()
{
    int i;
    for (i = 0; i < 10; ++i){
        printf("when i is %d.\n", i);
        printf("the computation result is %d\n", power(3, i));
    }
    return 0;
}

/* our power function*/

// int power(int m, int n){
//     int i;
//     int p;
//     p = 1;
//     for (i = 1; i <= n; ++i){
//         p = p * m;
//     }
//     return p;
// }

// choose one to do 

/* the version of without extraneous arguments */
int power(int m, int n)
{
    int p;
    for (p = 1; n > 0; --n)
        p = p * m; 
    return p;
}
