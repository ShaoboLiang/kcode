#include <stdio.h>
#define UPPER 300
#define LOWER 0
#define STEP 20

// main()
// {
//     float fahrenheit, celsius;
//     fahrenheit = LOWER;
//     while (fahrenheit <= UPPER){
//         celsius = 5.0*(fahrenheit - 32)/9.0;
//         printf("%3.0f \t %6.1f\n", fahrenheit, celsius);
//         fahrenheit = fahrenheit + STEP;
//     }
//     return 0;
// }

main()
{
    float fahrenheit;
    for (fahrenheit = UPPER; fahrenheit >= LOWER; fahrenheit = fahrenheit - STEP){
        printf("%3.0f \t %6.1f\n", fahrenheit, 5.0*(fahrenheit - 32)/9.0);
    }
}