#include <stdio.h> // Required for input/output functions like printf and scanf

int main() {
    int i;          
    int num;
    int largest;    
    int smallest;   

    
    printf("Enter number 1: ");
    scanf("%d", &num);

    largest = num;  
    smallest = num; 

   
    for (i = 2; i <= 100; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

   
        if (num > largest) {
            largest = num;
        }

        
        if (num < smallest) {
            smallest = num;
        }
    
    printf("\nThe largest number is: %d\n", largest);
    printf("The smallest number is: %d\n", smallest);

    return 0; 
}