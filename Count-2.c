#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char s[1000],ch;
    scanf("%s", s);
    int j = 0;
    int vowel = 0;
    while ((ch=s[j])!= '\0')
    {
        if(ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u'){
            vowel++;
        }
        j++;
    }
    printf("%d", vowel);
    return 0;
}
