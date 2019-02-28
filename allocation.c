/*************************
Allocation
*************************/

#include <stdlib.h>
#include <stdio.h>

int main() {



    /*************************
    section i.
    *************************/
    //explicit allocation of an integer on the heap
    printf("--------------- section i. ---------------\n");
    int* array_size = (int*) malloc(sizeof(int));
    int size = 8;
    printf("memory address of array_size = %p\n", array_size);
    if(array_size == NULL) {
        printf("ERROR: Memory allocation failed!\n");
        return 0;
    }
    else {
        *array_size = 9; 
        printf("value at pointer array_size address = %d\n", *array_size); //prints 00000009
    }

    //explicit allocation of an integer array on the heap
    int* int_array = (int*) malloc(*array_size * sizeof(int)); 

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

    //ALWAYS make sure to free up any malloc variables
    free(array_size);
    array_size = NULL; //good practice along with free() function!!!
    free(int_array);
    int_array = NULL;



    /*************************
    section ii.
    *************************/
    printf("\n");
    printf("--------------- section ii. ---------------\n");
    float* data = (float*) malloc(sizeof(float) * 1000);
    if(data != NULL) {
        printf("the memory address value of pointer data = %d\n", data);
        printf("the value of the memory address that pointer data points to = %f\n", *data);
    }
    else {
        return 0;
    }
    free(data);
    data = NULL;

    //double pointers
    printf("\n");
    double** square_table = (double**) malloc(sizeof(double*) * 10);
    printf("address of outer square_table = %p\n", square_table);
    printf("\n");
    if(square_table != NULL) {
        for(int i = 0; i < 10; i++) {
            square_table[i] = (double*) malloc(sizeof(double) * 10);
            if(square_table[i] != NULL) {
                printf("address of inner square_table at index %d = %p\n", i, square_table[i]);
            }
            else {
                return 0;
            }
        }
        printf("\n");
    }
    else {
        return 0;
    }
    //free up memory
    for(int i = 0; i < 10; i++) { 
        free(square_table[i]);
        square_table[i] = NULL;
    }
    free(square_table);
    square_table = NULL;

    struct student_t {
        char first_name[15];
        char last_name[20];
        char id_number[9];
        int year_enrolled;
    };
    struct student_t lm245 = {"logan", "monaghan", "90098732", 2015};
    struct student_t *student_pointer = &lm245;
    //create roster of 35 students
    struct student_pointer *roster = (struct student_pointer*) malloc(sizeof(struct student_t) * 35); 
    if(roster) {
        printf("address that roster points to = %p\n", roster);
    }
    else {
        return 0;
    }
    free(roster);
    roster = NULL;


    /*************************
    section iii.
    *************************/
    printf("\n");
    printf("--------------- section iii. ---------------\n");
    //allocate 1st dimension
    double*** data_cube = (double***) malloc(sizeof(double**) * 10);
    if(data_cube == NULL) { 
        printf("there was an error allocating memory for 1st dimension!\n");
        return 0; 
    }
    //allocate 2nd dimension
    for (int i = 0; i < 10; i++) {
        data_cube[i] = (double**) malloc(sizeof(double*) * 10); 
        if(data_cube[i] == NULL) { 
            printf("there was an error allocating memory for 2nd dimension!\n");
            return 0; 
        }
    }
    //allocate 3rd dimension
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            data_cube[i][j] = (double*) malloc(sizeof(double) * 10); 
            if(data_cube[i][j] == NULL) { 
                printf("there was an error allocating memory for 3rd dimension!\n");
                return 0; 
            }
        }
    }
    //use data cube
    printf("data_cube = %p\n", data_cube);
    for(int i = 0; i < 10; i++) {
        printf("%d\n", data_cube[i]);
        for(int j = 0; j < 10; j++) {
            if(j == 9) {
                printf("%d", data_cube[i][j]);
            }
            else {
                printf("%d - ", data_cube[i][j]);
            }
        }
        printf("\n");
    }
    //free up memory
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            free(data_cube[i][j]);
            data_cube[i][j] = NULL;
        }
    }
    for (int i = 0; i < 10; i++) {
        free(data_cube[i]);
        data_cube[i] = NULL;
    }
    free(data_cube);
    data_cube = NULL;

    /*************************
    section iv.
    *************************/
    /*
    void foo() {
        int iarr[1000][1000][1000];
    }
    
    void bar(int ***data_cube) {
        //use data_cube
    }*/

    /*************************
    section vi.
    *************************/
    /*void allocate_array(int **a) {
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
    */

    return 0;

}
