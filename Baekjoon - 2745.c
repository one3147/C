#include <stdio.h>

int main() {
    char A[100];
    int b, len;
    long long int sum = 0;
    scanf("%s %d", A, &b);

    for (len = 0; A[len] != '\0'; len++);

    for (int i = 0; i < len; i++) {
        int num;
        if ('0' <= A[i] && A[i] <= '9') {
            num = A[i] - '0';
        } else {
            num = A[i] - 'A' + 10;
        }
        sum = sum * b + num;
    }

    printf("%lld\n", sum);
    return 0;
}
