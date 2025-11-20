#include <stdio.h>

enum UserRole {
    ADMIN = 100,
    USER = 50,
    GUEST = 1
};

int main() {
    enum UserRole role1 = ADMIN;
    enum UserRole role2 = USER;
    enum UserRole role3 = GUEST;

    int intValue1 = ADMIN;
    int intValue2 = USER;
    
    printf("--- Enum Constants Store Explicit Integers ---\n");
    
    printf("The constant ADMIN has the integer value: %d\n", ADMIN);
    printf("The constant USER has the integer value: %d\n", USER);
    printf("The constant GUEST has the integer value: %d\n", GUEST);
    
    printf("\n--- Direct Variable Output ---\n");
    printf("Printing enum variable (role1): %d\n", role1);
    
    printf("\n--- Assigning Enum to Integer Variable ---\n");
    printf("An integer variable can store the enum constant value.\n");
    printf("int intValue1 = ADMIN; Result: %d\n", intValue1);
    
    printf("\n--- Arithmetic Operations on Enums ---\n");
    printf("Enums behave like integers, so arithmetic is possible.\n");
    printf("USER + GUEST = %d\n", USER + GUEST); 

    return 0;
}
