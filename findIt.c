#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,m=0;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n;i++){
        scanf("%d", &ar[i]);
    }
    int x,i=0,count=0;
    scanf("%d", &x);
    while (i<n)
    {
        if(ar[i]==x){
            count++;
        }
        i++;
    }
    printf("%d", count);

    return 0;
}
