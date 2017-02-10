void printArray(int intArray[]);

void arrayExample() {
    printf("Array example!\n\n");

    int a[] = {1,2,3,4,5,6,7,8,9};

    int * pointer = a;

    printf("a -> %d\n", a);
    printf("&a -> %d\n", &a);
    printf("pointer -> %d\n", pointer);
    printf("&pointer -> %d\n", &pointer);
    printArray(a);
    printf("*pointer -> %i\n", *pointer);

    printf("\nA: a[0]++\n");
    a[0]++;
    printArray(a);
    printf("*pointer -> %i\n", *pointer);
    printf("pointer -> %d\n", pointer);


    printf("\nB: *pointer -> %i\n", *pointer);
    printf("(*pointer) + 4 -> %i\n", (*pointer) + 4);
    printArray(a);


    printf("\nC: *pointer -> %i\n", *pointer);
    printf("*(pointer + 4) -> %i\n", *(pointer + 4));
    printArray(a);

    printf("\nD: *pointer -> %i\n", *pointer);
    printf("(*(pointer + 4))++ -> %i\n", ++(*(pointer + 4)));
//    printf("(*(pointer + 4))++ -> %i\n", (*(pointer + 4))++);
    printArray(a);

}

void printArray(int intArray[]) {

    int arraySize = sizeof(intArray) / sizeof(intArray[0]);
    printf("Array: ");
    for(int i = 0; i < 9; i++) {
        printf("%d ", intArray[i]);
    }
    printf("\n");


}
