/*************************
Structures
*************************/

#include <stdio.h>

int structures_jv() {

    /*************************
    section i.
    *************************/
    struct student_record {
        char first_name[10];
        char last_name[10];
        char nine_hundred[10];
        int year_first_enrolled;
    };
    
    struct car {
        char make[20];
        char model[10];
        char color[8];
        int year_manufactured;
    };

    struct nfl_team {
        char city[20];
        char name[15];
        int wins;
        int losses;
    };

    /*************************
    section ii.
    *************************/
    printf("\n");
    struct student_record jm123 = { "john", "michaels", "900123456", 1994};
    printf("--------------- section ii. ---------------\n");
    printf("%s-%s-%s-%d\n", jm123.first_name,
                            jm123.last_name,
                            jm123.nine_hundred,
                            jm123.year_first_enrolled);
    printf("\n");

    struct car dream_car = {"McLaren", "F1", "silver", 1997};
    printf("My dream car is:\n");
    printf("A %d %s %s %s.", dream_car.year_manufactured,
                             dream_car.color,
                             dream_car.make,
                             dream_car.model);
    printf("\n");

    /*************************
    section iii.
    *************************/
    printf("\n");
    struct student_record *student_pointer = &jm123;
    printf("--------------- section iii. ---------------\n");
    printf("%s-%s-%s-%d\n", student_pointer->first_name,
                            student_pointer->last_name,
                            student_pointer->nine_hundred,
                            student_pointer->year_first_enrolled);
    //or use this, but above is easier to type and -> has greater precedence
    printf("%s-%s-%s-%d\n", (*student_pointer).first_name,
                            (*student_pointer).last_name,
                            (*student_pointer).nine_hundred,
                            (*student_pointer).year_first_enrolled);

}
