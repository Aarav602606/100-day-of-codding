#include <stdio.h>

enum Status {
    SUCCESS = 10,
    FAILURE = 20,
    TIMEOUT = 30
};

void printStatusMessage(enum Status currentStatus) {
    switch (currentStatus) {
        case SUCCESS:
            printf("Status %d: Operation successful: Data processed correctly.\n", SUCCESS);
            break;
        case FAILURE:
            printf("Status %d: Operation failed: An unexpected error occurred.\n", FAILURE);
            break;
        case TIMEOUT:
            printf("Status %d: Operation timed out: The process took too long to complete.\n", TIMEOUT);
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

    printf("--- Checking Operation Results with Explicit Values ---\n");
    
    printStatusMessage(result1);
    printStatusMessage(result2);
    printStatusMessage(result3);

    return 0;
}

