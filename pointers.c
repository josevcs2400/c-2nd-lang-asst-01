#include <stdio.h>

int global_i = 9;

void wont_change(int argument_i) {
    argument_i = 10;
}

void change_inside(int *pointer_to_global_i) {
    *pointer_to_global_i = 10;
}

int will_return_it_changed(int argument_i) {
    return argument_i + 1;
}

int main() {
    printf("%d\n", global_i);
    wont_change(global_i);
    printf("%d\n", global_i);
    change_inside(&global_i);
    printf("%d\n", global_i);
    global_i = will_return_it_changed(global_i);
    printf("%d\n", global_i);

    return 0;
}
