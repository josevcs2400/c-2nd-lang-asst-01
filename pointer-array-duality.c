/*************************
Pointer-array duality
*************************/
 #include <stdio.h>



/*************************
joses functions
*************************/
int printNumbersFrom1to10() {
    int allNumbers[10];
    for(int i = 0; i < 10; i++) {
        allNumbers[i] = i + 1;
        printf("%d\n", allNumbers[i]);
    }
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
    printf("--------------- section i. ---------------\n");
    printf("%.1f\n", farray[0]); //prints one float number
    printf("%c\n", cstring[2]); //prints one character
    printf("%s\n", cstring);
    printf("\n");

    /*************************
    ii.
    *************************/
    int integer_array[] = { 23, 56, 12, 9, 4, 356, 122, 0, 2, 7 };
    printf("--------------- section ii. ---------------\n");
    printf("The array element at index 8 is %d\n", integer_array[8]);
    int arr_size = sizeof(integer_array) / sizeof(integer_array[0]);
    printf("Number of elements of array is %d\n", arr_size);
    int array3[] = {234, 1231, 12312, 123123, 123, 123123123, 123123};
    int size_of_array3 = sizeof(array3) / sizeof(array3[0]);
    printf("size of memory used by array3 = %d\n", sizeof(array3)); //4 bit int x number of elements in array
    printf("size of array3 = %d\n", size_of_array3);
    printf("\n");

    /*************************
    iii.
    *************************/
    int iarray2[10];
    for(int i = 0; i < 10; i++) {
        iarray2[i] = 0;
    }
    iarray2[5] = 6;
    int *jarr = iarray2;
    jarr[5] = jarr[5] + 1;

    //joses code below
    iarray2[0] = 111;
    iarray2[9] = 999;

    printf("--------------- section iii. ---------------\n");
    printf("%d\n", iarray2[0]);
    printNumbersFrom1to10();

    return 0;

}
