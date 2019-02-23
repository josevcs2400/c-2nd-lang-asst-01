/*************************
Working with arrays in functions
*************************/
#include <stdio.h>

/*************************
section i.
*************************/
void swap_ends(int iarr[], int size) {
    int tmp = iarr[0];
    iarr[0] = iarr[size - 1];
    iarr[size - 1] = tmp;
}

/*************************
section ii. !!!note, dont do this
*************************/
int *get_array2() {
    //int array2[] = {3, 4, 7, 1, 23};
    //return array2;
}

int main() {
    /*************************
    section i.
    *************************/
    int iarray[] = {3, 4, 7, 1, 23};
    printf("--------------- section i. ---------------\n");
    printf("Start: %d; End: %d\n", iarray[0], iarray[4]);
    swap_ends(iarray, 5);
    printf("Start: %d; End: %d\n", iarray[0], iarray[4]);
    printf("\n");

    /*************************
    section ii. !!!note, dont do this
    *************************/
    printf("--------------- section ii. ---------------\n");
    int *array2 = get_array2();
    //printf("Start: %d; End %d\n", array2[0], array2[4]);

    return 0;
}
