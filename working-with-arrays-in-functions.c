#include <stdio.h>

void swap_ends(int iarr[], int size) {
    int tmp = iarr[0];
    iarr[0] = iarr[size - 1];
    iarr[size - 1] = tmp;
}

int main() {
    int iarray[] = {3, 4, 7, 1, 23};
    printf("Start: %d; End: %d\n", iarray[0], iarray[4]);
    swap_ends(iarray, 5);
    printf("Start: %d; End: %d\n", iarray[0], iarray[4]);

    return 0;
}
