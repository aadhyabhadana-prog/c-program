#include <stdio.h>

struct Term {
    int coeff;
    int exp;
};

struct Polynomial {
    int n;
    struct Term terms[10];
};

void readPolynomial(struct Polynomial *p) {
    printf("Enter number of non-zero terms: ");
    scanf("%d", &p->n);
    for (int i = 0; i < p->n; i++) {
        printf("Enter coefficient for term %d: ", i + 1);
        scanf("%d", &p->terms[i].coeff);
        printf("Enter exponent for term %d: ", i + 1);
        scanf("%d", &p->terms[i].exp);
    }
}

void displayPolynomial(struct Polynomial p) {
    for (int i = 0; i < p.n; i++) {
        printf("%dx^%d", p.terms[i].coeff, p.terms[i].exp);
        if (i < p.n - 1) {
            printf(" + ");
        }
    }
    printf("\n");
}

int main() {
    struct Polynomial p1;
    readPolynomial(&p1);
    printf("\nPolynomial is: ");
    displayPolynomial(p1);
    return 0;
}
