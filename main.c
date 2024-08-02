#include <stdio.h>

int main() {
    int n1, n2, n3, n4;
    printf("enter four numbers: ");
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
    if ((n2 == n1 + 1 && n3 == n2 + 1 && n4 == n3 + 1) ||
        (n2 == n1 - 1 && n3 == n2 - 1 && n4 == n3 - 1)) {
        printf("yes\n");
    } else {
        printf("no\n");
    }

    return 0;
}
