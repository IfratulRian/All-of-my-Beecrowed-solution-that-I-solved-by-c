#include <stdio.h>
#include<stdlib.h>

int main() {
    long long a, b, c;
    while (scanf("%lld", &a), a != 0) {
        if(scanf("%lld %lld", &b, &c) !=2)return 0;
        long long ans = (a * b * c) / abs(a - c);
        if (ans == 1)
            printf("1 pagina\n");
        else
            printf("%lld paginas\n", ans);
    }
    return 0;
}
