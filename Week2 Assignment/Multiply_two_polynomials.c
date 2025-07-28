//Multiply two polynomials

#include <stdio.h>

#define MAX 100  


void multiplyPolynomials(int poly1[], int deg1, int poly2[], int deg2, int result[]) {
	int i,j;
    
    for (i = 0; i < MAX; i++) result[i] = 0;

    
    for (i = 0; i <= deg1; i++) {
        for (j = 0; j <= deg2; j++) {
            result[i + j] += poly1[i] * poly2[j];
        }
    }
}


void printPolynomial(int poly[], int degree) {
	int i;
    for (i = degree; i >= 0; i--) {
        if (poly[i] != 0) {
            if (i != degree) printf(" + ");
            if (i == 0)
                printf("%d", poly[i]);
            else if (i == 1)
                printf("%dx", poly[i]);
            else
                printf("%dx^%d", poly[i], i);
        }
    }
    printf("\n");
}

int main() {
	int i;
    int deg1, deg2;

    printf("Enter degree of first polynomial: ");
    scanf("%d", &deg1);
    int poly1[deg1 + 1];

    printf("Enter coefficients of first polynomial (from x^0 to x^%d):\n", deg1);
    for (i = 0; i <= deg1; i++) {
        scanf("%d", &poly1[i]);
    }

    printf("Enter degree of second polynomial: ");
    scanf("%d", &deg2);
    int poly2[deg2 + 1];

    printf("Enter coefficients of second polynomial (from x^0 to x^%d):\n", deg2);
    for (i = 0; i <= deg2; i++) {
        scanf("%d", &poly2[i]);
    }

    int result[MAX];
    multiplyPolynomials(poly1, deg1, poly2, deg2, result);

    printf("First Polynomial: ");
    printPolynomial(poly1, deg1);
    printf("Second Polynomial: ");
    printPolynomial(poly2, deg2);

    printf("Product Polynomial: ");
    printPolynomial(result, deg1 + deg2);

    return 0;
}

