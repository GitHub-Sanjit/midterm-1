#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char s[1001],ch;
    scanf("%s", s);
    int j = 0, countCap = 0, countSm = 0;
    while ((ch=s[j])!= '\0')
    {
        if(ch>='A' && ch<='Z'){
            countCap++;
        }else{
            countSm++;
        }
        j++;
    }
    printf("%d %d", countCap, countSm);
    return 0;
}