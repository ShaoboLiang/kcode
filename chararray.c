#include <stdio.h>
#define MAX 3
int geline(char line[], int max);
void copyline(char from[], char to[]);

int main(){
    int maxlen;
    int curlen; 
    char curline[MAX];
    char maxline[MAX];
    maxlen = 0;
    while ((curlen = geline(curline, MAX)) > 0){
        if (curlen > maxlen){
            maxlen = curlen;
            copyline(curline, maxline);
        }
    }

    printf("the max line is %s", maxline);

}

int geline(char l[], int m){
    int c, i;
    for (i = 0; i < m-1 && (c = getchar())!= 0 && c != '\n'; ++i)
    {   l[i] = c;
    }
    // if (c == '\n'){
    //     l[i] = c;
    //     ++i;
    //     }
        l[i] = '\0';
        return i;   
}

void copyline(char from[], char to[]){
    int i;
    while (from[i]!= 0)
    {
        to[i] = from[i];
        ++i;
    }
}


