#include <stdio.h>

int main() {
    int marks;

    printf("Enter marks (0-100): ");
    scanf("%d" , &marks);
    if (marks >= 0 && marks <= 100) 
    {
    
    if (marks >= 85) {
        printf("Grade: A\n");
    } 
    else if (marks >= 75) {
        printf("Grade: B\n");
    } 
    else if (marks >= 55) {
        printf("Grade: C\n");
    } 
    else if (marks >= 45) {
        printf("Grade: D\n");
    } 
    else {
        printf("Grade: F\n");
    }
    }
    else
    {
        printf("Invalid input!\n");
    }
    return 0;
}
