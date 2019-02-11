#include <stdio.h>

main()
{
    int c;
    int d;
    c = getchar();
    d = (c != EOF);
    printf("%d\n", d);
    while (d == 1){
        putchar(c);
        c = getchar();
    }
}

// main(){
//     while ((getchar())!= EOF){
//         putchar(c);
//     }
// }