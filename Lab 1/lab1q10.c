#include <stdio.h>

// Define the structure for Date
struct Date {
    int day;
    int month;
    int year;
};

// Define the structure for Student, containing Date as a nested structure
struct Student {
    int roll_number;
    char name[50];
    struct Date dob; // Date of Birth using the Date structure
};

int main() {
    struct Student s1;

    // Input details for one student
    printf("--- Enter Student Details ---\n");
    
    printf("Enter Roll Number: ");
    scanf("%d", &s1.roll_number);
    
    printf("Enter Name: ");
    scanf(" %[^\n]", s1.name); // Reads full name including spaces
    
    printf("Enter Date of Birth (DD MM YYYY): ");
    scanf("%d %d %d", &s1.dob.day, &s1.dob.month, &s1.dob.year);

    // Display student details
    printf("\n========================================\n");
    printf("           Student Details              \n");
    printf("========================================\n");
    printf("Roll Number   : %d\n", s1.roll_number);
    printf("Name          : %s\n", s1.name);
    printf("Date of Birth : %02d/%02d/%d\n", s1.dob.day, s1.dob.month, s1.dob.year);

    return 0;
}
