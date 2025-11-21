#include <stdio.h>
void mostra(int n, int i) {
    if ((n > 1) && (i > 0)) {
        mostra(n - i, i - 1);
    }
    printf("\n%d", n + i);
}

int main() {
    mostra(9, 2);
    return 0;
}
