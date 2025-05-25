#include <stdio.h>
int main() {
    long long int x, y;
    scanf("%lld %lld", &x, &y);

    int sum = x + y;
    printf("%lld + %lld = %d\n", x, y, sum);

    long long int multi = x * y;
    printf("%lld * %lld = %lld\n", x, y, multi);

    int sub = x - y;
    printf("%lld - %lld = %d\n", x, y, sub);

    return 0;
}
