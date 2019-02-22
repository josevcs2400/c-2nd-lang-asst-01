/*************************
Pointer-array duality
*************************/
 #include <stdio.h>



/*************************
joses functions
*************************/
int printNumbersFrom1to100() {
    int allNumbers[100];
    for(int i = 1; i < 101; i++) {
        allNumbers[i] = i;
    }
    printf("%d\n", allNumbers);
}



int main() {

    /*************************
    i.
    *************************/
    int iarray[10];
    for(int i = 0; i < 10; i++) {
        iarray[i] = 0;
    }
    float farray[] = {0.5, 8.6};
    char cstring[] = "abracadabra";

    /*************************
    ii.
    *************************/
    int integer_array[] = { 23, 56, 12, 9, 4, 356, 122, 0, 2, 7 };
    printf("The array element at index 8 is %d\n", integer_array[8]);
    int arr_size = sizeof(integer_array) / sizeof(integer_array[0]);
    printf("Number of elements of array is %d\n", arr_size);

    /*************************
    iii.
    *************************/
    int iarray[10];
    for(int i = 0; i < 10; i++) {
        iarray[i] = 0;
    }
    iarray[5] = 6;
    int *jarr = iarray;
    jarr[5] = jarr[5] + 1;

    //joses code below
    iarray[0] = 111;
    iarray[9] = 999;

    printf("%d\n", iarray[0]);
    //printNumbersFrom1to100();

    return 0;

}
