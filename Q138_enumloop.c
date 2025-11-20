#include <stdio.h>

enum UserRole {
    ADMIN,
    USER,
    GUEST,
    ROLE_COUNT
};

int main() {
    const char *roleNames[] = {
        "ADMIN",
        "USER",
        "GUEST"
    };

    int i;

    printf("--- User Roles and Integer Values ---\n");
    
    for (i = ADMIN; i < ROLE_COUNT; i++) {
        printf("Role: %s, Value: %d\n", roleNames[i], i);
    }

    return 0;
}