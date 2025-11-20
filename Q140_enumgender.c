#include <stdio.h>
#include <string.h>

enum Gender {
    MALE,
    FEMALE,
    OTHER
};

struct Person {
    char name[50];
    int age;
    enum Gender gender;
};

void printGender(enum Gender g) {
    switch (g) {
        case MALE:
            printf("MALE");
            break;
        case FEMALE:
            printf("FEMALE");
            break;
        case OTHER:
            printf("OTHER");
            break;
        default:
            printf("UNKNOWN");
            break;
    }
}

int main() {
    struct Person p1;
    strcpy(p1.name, "Alex");
    p1.age = 30;
    p1.gender = MALE;

    struct Person p2;
    strcpy(p2.name, "Jordan");
    p2.age = 25;
    p2.gender = FEMALE;

    printf("--- Person Records ---\n");
    
    printf("Name: %s, Age: %d, Gender: ", p1.name, p1.age);
    printGender(p1.gender);
    printf("\n");
    
    printf("Name: %s, Age: %d, Gender: ", p2.name, p2.age);
    printGender(p2.gender);
    printf("\n");

    return 0;
}
