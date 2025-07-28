//Add two polynomials

#include <stdio.h>

#define MAX 100

int main() {
    int deg1, deg2, i;
    int poly1[MAX], poly2[MAX], result[MAX];

    printf("Enter degree of first polynomial: ");
    scanf("%d", &deg1);
    printf("Enter coefficients of first polynomial:\n");
    for (i = 0; i <= deg1; i++) {
        printf("Coefficient of x^%d: ", deg1 - i);
        scanf("%d", &poly1[i]);
    }

    printf("Enter degree of second polynomial: ");
    scanf("%d", &deg2);
    printf("Enter coefficients of second polynomial:\n");
    for (i = 0; i <= deg2; i++) {
        printf("Coefficient of x^%d: ", deg2 - i);
        scanf("%d", &poly2[i]);
    }

    int maxDeg = (deg1 > deg2) ? deg1 : deg2;
    int diff = deg1 - deg2;

    for (i = 0; i <= maxDeg; i++) {
        if (i < diff) {
            result[i] = (deg1 > deg2) ? poly1[i] : poly2[i];
        } else {
            result[i] = poly1[i - (diff > 0 ? 0 : diff)] + poly2[i - (diff < 0 ? 0 : -diff)];
        }
    }

    printf("Resultant polynomial: ");
    for (i = 0; i <= maxDeg; i++) {
        printf("%dx^%d", result[i], maxDeg - i);
        if (i != maxDeg) printf(" + ");
    }

    return 0;
}

