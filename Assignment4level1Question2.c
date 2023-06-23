#include <stdio.h>

struct Complex {
    double real;
    double imag;
};

void readComplex(struct Complex* c) {
    printf("Enter the real part: ");
    scanf("%lf", &(c->real));

    printf("Enter the imaginary part: ");
    scanf("%lf", &(c->imag));
}

void writeComplex(const struct Complex* c) {
    printf("Complex number: %.2lf + %.2lfi\n", c->real, c->imag);
}

struct Complex addComplex(const struct Complex* c1, const struct Complex* c2) {
    struct Complex result;
    result.real = c1->real + c2->real;
    result.imag = c1->imag + c2->imag;
    return result;
}

struct Complex multiplyComplex(const struct Complex* c1, const struct Complex* c2) {
    struct Complex result;
    result.real = c1->real * c2->real - c1->imag * c2->imag;
    result.imag = c1->real * c2->imag + c1->imag * c2->real;
    return result;
}

int main() {
    struct Complex c1, c2, sum, product;

    printf("Reading the first complex number:\n");
    readComplex(&c1);

    printf("Reading the second complex number:\n");
    readComplex(&c2);

    printf("\n");

    printf("First complex number:\n");
    writeComplex(&c1);

    printf("Second complex number:\n");
    writeComplex(&c2);

    printf("\n");

    sum = addComplex(&c1, &c2);
    printf("Sum of the complex numbers:\n");
    writeComplex(&sum);

    product = multiplyComplex(&c1, &c2);
    printf("Product of the complex numbers:\n");
    writeComplex(&product);

    return 0;
}
