#include <stdio.h>

int main() {
    int totalStudents = 50;
    int boysCount = 0;
    int girlsCount = 0;
    char gender;

    printf("Enter the gender for each of the 50 students (M for Male, F for Female):\n");

    for (int i = 1; i <= totalStudents; i++) {
        printf("Student %d: ", i);
        scanf(" %c", &gender); 

        if (gender == 'M' || gender == 'm') {
            boysCount++;
        } else if (gender == 'F' || gender == 'f') {
            girlsCount++;
        } else {
            printf("Invalid input. Please enter 'M' or 'F'. Re-enter for Student %d.\n", i);
            i--; 
        }
    }

    printf("\n--- Class Summary ---\n");
    printf("Total Boys: %d\n", boysCount);
    printf("Total Girls: %d\n", girlsCount);

    return 0;
}