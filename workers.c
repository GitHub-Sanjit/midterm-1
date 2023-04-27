#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int m1, m2, d,result;
    scanf("%d %d %d", &m1, &m2, &d);
    result = (m1 * d)/m2;
    printf("%d", result);
    return 0;
}
