#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n = 1001;
    scanf("%d",&n);
    int ar[n];
    for (int i = 0; i < n;i++){
        scanf("%d", &ar[i]);
    }
    int countE = 0;
    int countO = 0;
    for (int i = 0; i < n;i++){
        if(ar[i]%2==0){
            countE++;
        }else{
            countO++;
        }
    }
        printf("%d %d", countE,countO);
        return 0;
}
