#include <stdio.h>

enum UserRole {
    ADMIN,
    USER,
    GUEST
};

void checkPermissions(enum UserRole role) {
    switch (role) {
        case ADMIN:
            printf("Role: ADMIN. Access Level: Full Read and Write access. System configuration permitted.\n");
            break;
        case USER:
            printf("Role: USER. Access Level: Standard Read and Limited Write access. Can modify own data.\n");
            break;
        case GUEST:
            printf("Role: GUEST. Access Level: Read-only access. No modification privileges.\n");
            break;
        default:
            printf("Role: UNKNOWN. Access Level: Denied.\n");
            break;
    }
}

int main() {
    enum UserRole user1 = ADMIN;
    enum UserRole user2 = USER;
    enum UserRole user3 = GUEST;

    printf("--- User Role and Permissions Check ---\n");
    
    checkPermissions(user1);
    checkPermissions(user2);
    checkPermissions(user3);

    return 0;
}

