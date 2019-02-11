#include <stdio.h>

main()
{
    int nwhite, nother;
    int digit[10];
    int c, i;
    nwhite = nother = 0;
    for (i = 0; i < 10; i++)
    {
        digit[i] = 0;
    }
    while ((c = getchar())!= EOF)
    if (c == ' '||c == '\t'||c == '\n'){
        ++nwhite;
    }
    else if (c >= '0' && c <= '9'){
        ++digit[c-'0'];
    }
    else {
        ++nother;
    }
    
    printf("digits are\t");
    for (i = 0; i < 10; ++i)
    {
        printf("%d", digit[i]);
    }
    printf("\n");
    printf("the number of white and other are respectly %d, %d.\n", nwhite, nother);

}