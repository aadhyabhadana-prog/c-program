#include <stdio.h>

struct Term {
    int coeff;
    int exp;
};

int readPolynomial(struct Term poly[]) {
    int n, i;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    printf("Enter coefficient and exponent in descending order of exponent:\n");
    for (i = 0; i < n; i++) {
        scanf("%d %d", &poly[i].coeff, &poly[i].exp);
    }
    return n;
}

int addPolynomials(struct Term p1[], struct Term p2[], struct Term p3[], int n1, int n2) {
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2) {
        if (p1[i].exp > p2[j].exp) {
            p3[k] = p1[i];
            i++;
            k++;
        } else if (p1[i].exp < p2[j].exp) {
            p3[k] = p2[j];
            j++;
            k++;
        } else {
            p3[k].exp = p1[i].exp;
            p3[k].coeff = p1[i].coeff + p2[j].coeff;
            i++;
            j++;
            k++;
        }
    }
    while (i < n1) {
        p3[k] = p1[i];
        i++;
        k++;
    }
    while (j < n2) {
        p3[k] = p2[j];
        j++;
        k++;
    }
    return k;
}

void printPolynomial(struct Term poly[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%dx^%d", poly[i].coeff, poly[i].exp);
        if (i != n - 1) {
            printf(" + ");
        }
    }
    printf("\n");
}

int main() {
    struct Term p1[100], p2[100], p3[100];
    int n1, n2, n3;
    printf("First polynomial:\n");
    n1 = readPolynomial(p1);
    printf("Second polynomial:\n");
    n2 = readPolynomial(p2);
    n3 = addPolynomials(p1, p2, p3, n1, n2);
    printf("Sum polynomial: ");
    printPolynomial(p3, n3);
    return 0;
}
