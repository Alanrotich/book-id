#include <stdio.h>

int main() {
    int bookID, dueDate, returnDate;

    // Taking input from the user
    printf("Enter Book ID: ");
    if (scanf("%d", &bookID) != 1) {
        printf("Invalid input for Book ID.\n");
        return 1; // Exit with error code
    }

    // Suggest a format for dates 
    printf("Enter Due Date (as an integer,): ");
    if (scanf("%d", &dueDate) != 1) {
        printf("Invalid input for Due Date.\n");
        return 1; // Exit with error code
    }

    printf("Enter Return Date (as an integer,): ");
    if (scanf("%d", &returnDate) != 1) {
        printf("Invalid input for Return Date.\n");
        return 1; // Exit with error code
    }

    // Display the inputs for verification
    printf("\nBook ID: %d", bookID);
    printf("\nDue Date: %d", dueDate);
    printf("\nReturn Date: %d\n", returnDate);

    // Check if the book was returned late
    if (returnDate > dueDate) {
        printf("The book was returned late.\n");
    } else {
        printf("The book was returned on time.\n");
    }

    return 0;
}
