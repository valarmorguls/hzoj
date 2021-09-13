#include <stdio.h>
int main() {
    int begin, n, i;
    scanf("%d%d",&begin, &n);
    if (begin < 0) {
        begin = 0;
    }
    if (begin % 2 != 0) {
        begin = begin + 1;
    }
    for (i = 0; i < n; i++) {
        printf("%d\n", begin);
        begin += 2;
    }
}
