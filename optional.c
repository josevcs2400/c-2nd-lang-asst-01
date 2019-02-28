/*************************
section 5.(optional)
*************************/

#include <stdio.h>

int main() {

    //typedef struct student_record student_t;
    typedef struct {
        char first_name[10];
        char last_name[10];
        char nine_hundred[10];
        int year_first_enrolled;
    } student_t, *student_p;

    student_t lm245 = {"logan", "monaghan", "900987321", 2015};
    student_t* student_handle = &lm245;

    printf("--------------- section i. and ii. ---------------\n");
    printf("%s-%s-%s-%d\n", student_handle->first_name, 
                            student_handle->last_name, 
                            student_handle->nine_hundred, 
                            student_handle->year_first_enrolled);
    printf("address of variable that student_handle points to = %p\n", student_handle);

    return 0;
   
}
