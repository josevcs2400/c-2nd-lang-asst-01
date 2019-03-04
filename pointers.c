/*************************
Pointers
*************************/
#include <stdio.h>

int global_i = 9;
int *second_pointer_to_global_i = &global_i;

/*************************
ii.
*************************/
void wont_change(int argument_i) {
    argument_i = 10;
    //but this will change the argument right???
    *second_pointer_to_global_i = argument_i;
}
void change_inside(int *pointer_to_global_i) {
    *pointer_to_global_i = 10;
}

/*************************
iii.
*************************/
int will_return_it_changed(int argument_i) {
    return argument_i + 1;
}

int pointers_jv() {

    /*************************
    i.
    *************************/
    int *p; //initialize a pointer called p
    //*p = 6;
    //p = 0xffeeddccaa00;
    int i = 7;
    p = &i; //assign address of i to p
    *p = 9; //i is now 9
    //int **p;
    //joses code below
    int a = 1;
    float dollar = 1.00f;
    char alpha = 'A';
    int *ap = &a;
    char *alpha_pointer = &alpha;
    float *dollar_pointer = &dollar;
    printf("--------------- section i. ---------------\n");
    printf("address of a and value of pointer ap = %d\n", ap);
    printf("address of alpha and value of alpha_pointer = %d\n", alpha_pointer);
    printf("address of dollar and value of dollar_pointer = %d\n", dollar_pointer);
    printf("direct value of dollar = %.2f\n", dollar);
    printf("indirect value of dollar (*dollar_pointer) = %.2f\n", *dollar_pointer);
    printf("\n");

    /*************************
    ii.
    *************************/
    printf("--------------- section ii. ---------------\n");
    printf("%d\n", global_i); //9
    wont_change(global_i);
    printf("%d\n", global_i); //10 cuz of second_pointer_to_global_i
    printf("%d\n", *second_pointer_to_global_i); //10
    printf("%d\n", global_i); //10
    global_i = 9; 
    printf("%d\n", global_i); //9
    change_inside(&global_i); //10 cuz & is used to get address of global_i
    printf("%d\n", global_i);
    printf("\n");


    /*************************
    iii.
    *************************/
    printf("--------------- section iii. ---------------\n");
    printf("%d\n", global_i);
    global_i = will_return_it_changed(global_i);
    printf("%d\n", global_i);

    return 0;
}
