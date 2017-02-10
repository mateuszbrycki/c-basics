
void pointerExample() {
    printf("Pointer example!\n\n");

    int a = 10;
    int * aP = &a;

    printf("a -> %d\n", a);
    printf("&a -> %d\n", &a);
    printf("aP -> %d\n", aP);
    printf("&aP -> %d\n", &aP);
    printf("*aP -> %i\n", *aP);

    printf("\na++\n");
    a++;

    printf("a -> %d\n", a);
    printf("*aP -> %i\n", *aP);

    printf("\n*(aP)++\n");
    (*aP)++;

    printf("a -> %d\n", a);
    printf("*aP -> %i\n", *aP);

}