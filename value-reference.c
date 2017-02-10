void value(int a);
void reference(int* a);


void valueReferenceExample() {
    printf("Value/reference example!\n\n");

    int a = 10;

    value(a);
    printf("value(a) -> %d\n", a);

    reference(&a);
    printf("reference(&a) -> %d\n", a);

    int *b = &a;
    printf("\nvalue(a) -> %d\n", a);
    value(*b);
    printf("value(*b) -> %d\n", *b);

    reference(b);
    printf("reference(b) -> %d\n", *b);

}

void value(int a) {
    a = a * 100;
}

void reference(int * a) {
    *a = *(a) * 100;
}