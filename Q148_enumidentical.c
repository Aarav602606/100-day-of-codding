#include <stdio.h>
#include <string.h>

struct Data {
    int value;
    char text[20];
};

int are_identical(struct Data a, struct Data b) {
    if (a.value != b.value) {
        return 0;
    }
    
    if (strcmp(a.text, b.text) != 0) {
        return 0;
    }
    
    return 1;
}

int main() {
    struct Data d1 = {50, "Hello"};
    struct Data d2 = {50, "Hello"};
    struct Data d3 = {50, "World"};

    if (are_identical(d1, d2)) {
        printf("d1 and d2 are identical.\n");
    } else {
        printf("d1 and d2 are different.\n");
    }

    if (are_identical(d1, d3)) {
        printf("d1 and d3 are identical.\n");
    } else {
        printf("d1 and d3 are different.\n");
    }

    return 0;
}
