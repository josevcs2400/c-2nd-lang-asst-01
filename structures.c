/*************************
Structures
*************************/

#include <stdio.h>

int main() {

    /*************************
    section i.
    *************************/
    struct student_record {
        char first_name[10];
        char last_name[10];
        char nine_hundred[10];
        int year_first_enrolled;
    };

    /*************************
    section ii.
    *************************/
    struct student_record jm123 = { "john", "michaels", "900123456", 1994};
    printf("--------------- section ii. ---------------\n");
    printf("%s-%s-%s-%d\n", jm123.first_name,
                            jm123.last_name,
                            jm123.nine_hundred,
                            jm123.year_first_enrolled);
    printf("\n");

    /*************************
    section iii.
    *************************/
    struct student_record *student_pointer = &jm123;
    printf("--------------- section iii. ---------------\n");
    printf("%s-%s-%s-%d\n", student_pointer->first_name,
                            student_pointer->last_name,
                            student_pointer->nine_hundred,
                            student_pointer->year_first_enrolled);
    //printf("%s-%s-%s-%d\n", (*student_pointer).first_name,
    //                        (*student_pointer).last_name,
    //                        (*student_pointer).nine_hundred,
    //                        (*student_pointer).year_first_enrolled);

}
