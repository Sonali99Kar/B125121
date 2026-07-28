#include <stdio.h>

// Define the structure for student details
struct Student {
    int roll_number;
    char name[50];
    float cgpa;
};

int main() {
    struct Student s[5];
    int i, count = 0;

    // Input details for 5 students
    printf("--- Enter Details for 5 Students ---\n");
    for (i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i + 1);
        
        printf("Enter Roll Number: ");
        scanf("%d", &s[i].roll_number);
        
        printf("Enter Name: ");
        scanf(" %[^\n]", s[i].name); // Reads full name including spaces
        
        printf("Enter CGPA: ");
        scanf("%f", &s[i].cgpa);
    }

    // Display details of students with CGPA > 8.0
    printf("  Students with CGPA Greater Than 8.0   \n");
    
    for (i = 0; i < 5; i++) {
        if (s[i].cgpa > 8.0) {
            printf("\nRoll Number : %d\n", s[i].roll_number);
            printf("Name        : %s\n", s[i].name);
            printf("CGPA        : %.2f\n", s[i].cgpa);
            count++;
        }
    }

    // If no student meets the criteria
    if (count == 0) {
        printf("No student has a CGPA greater than 8.0.\n");
    }

    return 0;
}