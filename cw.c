#include <stdio.h>
#define IN 1
#define OUT 0
main()
{
    int nc, nl, nw;
    int c;
    int state = OUT;
    nc = nl = nw = 0;

    while ((c = getchar())!= EOF){
        ++nc; 
        if (c == '\n')
        ++nl;
        if (c == '\n'||c == '\t' || c == ' ')
            state = OUT;
        else if(state == OUT) {
            state = IN;
            ++nw;
        } 
    }
    printf("%d, %d, %d", nc, nl, nw);

}