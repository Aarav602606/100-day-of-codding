#include <stdio.h>

enum Status {
    SUCCESS,
    FAILURE,
    TIMEOUT
};

void printStatusMessage(enum Status currentStatus) {
    switch (currentStatus) {
        case SUCCESS:
            printf("Operation successful: Data processed correctly.\n");
            break;
        case FAILURE:
            printf("Operation failed: An unexpected error occurred.\n");
            break;
        case TIMEOUT:
            printf("Operation timed out: The process took too long to complete.\n");
            break;
        default:
            printf("Unknown status code.\n");
            break;
    }
}

int main() {
    enum Status result1 = SUCCESS;
    enum Status result2 = FAILURE;
    enum Status result3 = TIMEOUT;

    printf("--- Checking Operation Results ---\n");
    
    printStatusMessage(result1);
    printStatusMessage(result2);
    printStatusMessage(result3);

    return 0;
}

