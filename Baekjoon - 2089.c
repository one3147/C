#include <stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    if (a == 0) {
        printf("0");
        return 0;
    }
    char A[32] = {0};
    int i = 0;
    while (a != 0) {
        int b = a % (-2);
        a /= -2;
        if (b < 0) {
            b += 2;
            a += 1;
        }
        A[i] = b + '0';
        i++;
    }

    for (int j = i - 1; j >= 0; j--) {
        printf("%c", A[j]);
    }

    return 0;
}
