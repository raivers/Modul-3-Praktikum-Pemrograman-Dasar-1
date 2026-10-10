#include <stdio.h>

int main() {
    //test case 1
    int a1, b1, c1;

    scanf("%d %d %d", &a1, &b1, &c1);

    if (a1 < b1 && b1 < c1) {
        printf("%d %d %d\n", a1, b1, c1);
    } else if (a1 < c1 && c1 < b1) {
        printf("%d %d %d\n", a1, c1, b1);
    } else if (b1 < a1 && a1 < c1) {
        printf("%d %d %d\n", b1, a1, c1);
    } else if (b1 < c1  && c1 < a1) {
        printf("%d %d %d\n", b1, c1, a1);
    } else if (c1 < a1 && a1 < b1) {
        printf("%d %d %d\n", c1, a1, b1);
    } else {
        printf("%d %d %d\n", c1, b1, a1);
    }

    //test case 2
    int a2, b2, c2;

    scanf("%d %d %d", &a2, &b2, &c2);

    if (a2 < b2 && b2 < c2) {
        printf("%d %d %d\n", a2, b2, c2);
    } else if (a2 < c2 && c2 < b2) {
        printf("%d %d %d\n", a2, c2, b2);
    } else if (b2 < a2 && a2 < c2) {
        printf("%d %d %d\n", b2, a2, c2);
    } else if (b2 < c2  && c2 < a2) {
        printf("%d %d %d\n", b2, c2, a2);
    } else if (c2 < a2 && a2 < b2) {
        printf("%d %d %d\n", c2, a2, b2);
    } else {
        printf("%d %d %d\n", c2, b2, a2);
    }

    //test case 3
    int a3, b3, c3;

    scanf("%d %d %d", &a3, &b3, &c3);

    if (a3 < b3 && b3 < c3) {
        printf("%d %d %d\n", a3, b3, c3);
    } else if (a3 < c3 && c3 < b3) {
        printf("%d %d %d\n", a3, c3, b3);
    } else if (b3 < a3 && a3 < c3) {
        printf("%d %d %d\n", b3, a3, c3);
    } else if (b3 < c3  && c3 < a3) {
        printf("%d %d %d\n", b3, c3, a3);
    } else if (c3 < a3 && a3 < b3) {
        printf("%d %d %d\n", c3, a3, b3);
    } else {
        printf("%d %d %d\n", c3, b3, a3);
    }
    return 0;
}