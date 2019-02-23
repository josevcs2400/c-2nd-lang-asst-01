/*************************
Allocation
*************************/

#include <stdlib.h>
#include <stdio.h>

int main() {

    /*************************
    section i.
    *************************/
    int *array_size = (int *) malloc(sizeof(int));
    int size = 8;

    printf("--------------- section i. ---------------\n");
    if(array_size == NULL) {
        printf("ERROR: Memory allocation failed!\n");
        return 1;
    }
    else {
        *array_size = 10;
    }

    int *int_array = (int *) malloc(*array_size * sizeof(int));

    if(int_array == NULL) {
        printf("ERROR: Memory allocation failed!\n");
        return 0;
    }
    else {
        for(int i = 0; i < *array_size; i++) {
            int_array[i] = i * *array_size;
            printf("Array element %d holds %d\n", i, int_array[i]);
        }
    }
    printf("\n");

    free(array_size);
    array_size = NULL;

    free(int_array);
    int_array == NULL;

    /*************************
    section ii.
    *************************/
    printf("--------------- section ii. ---------------\n");
    float *data = (float *) malloc(sizeof(float) * 1000);
    if(data != NULL) {
        //use data...
    }
    free(data);
    data = NULL;

    double **square_table;
    square_table = (double **) malloc(sizeof(double *) * 100);

    if(square_table != NULL) {
        for(int i = 0; i < 100; i++) {
            square_table[i] = (double *) malloc(sizeof(double) * 100);
        }
    }
    for(int i = 0; i < 1000; i++) {
        free(square_table[i]);
        square_table[i] = NULL;
    }
    free(square_table);
    square_table = NULL;

    /*
    typeof struct {
        char first_name[10];
        char last_name[10];
        char nine_hundred[10];
        int year_first_enrolled;
    } student_t, *student_p;
    student_t lm245 = {"logan", "monaghan", "900987321", 2015};
    student_t *student_handle = &lm245;
    student_p roster = (student_p) malloc(sizeof(student_t) * 35);
    if(roster) {
        //use student roster
    }
    free(roster);
    */


    /*************************
    section iii.
    *************************/
    double ***data_cube;
    data_cube = (double ***) malloc(sizeof(double **) * 1000);

    for (int i = 0; i < 1000; i++) {
        data_cube[i] = (double **) malloc(sizeof(double *) * 1000); 
    }

    for (int i = 0; i < 1000; i++) {
        for (int j = 0; j < 1000; j++) {
            data_cube[i][j] = (double *) malloc(sizeof(double) * 1000); 
        }
    }

    for (int i = 0; i < 1000; i++) {
        for (int j=0; j<1000; j++) {
            free(data_cube[i][j]); 
        }
    }

    for (int i = 0; i < 1000; i++) {
        free(data_cube[i]);
    }

    free(data_cube);

    /*************************
    section iv.
    *************************/
    /*
    void foo() {
        int iarr[1000][1000][1000];
    }
    */
    void bar(int ***data_cube) {
        //use data_cube
    }

    /*************************
    section vi.
    *************************/
    void allocate_array(int **a) {
        *a = (int *) malloc(sizeof(int) * 100);
    }
    int *int_array5;
    allocate_array(&int_array5);
    if(int_array5) {
        //use int_array5
    }
    int *allocate_array2() {
        return (int *) malloc(sizeof(int) * 100);
    }

    int *int_array6 = allocate_array2();
    
    if (int_array6) {
        // use int_array...
    }
    

    return 0;

}
