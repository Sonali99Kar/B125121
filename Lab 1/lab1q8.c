#include <stdio.h>

// Define the structure for employee details
struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee e[5];
    int i, max_index = 0;

    // Input details for 5 employees
    printf("--- Enter Details for 5 Employees ---\n");
    for (i = 0; i < 5; i++) {
        printf("\nEmployee %d:\n", i + 1);
        
        printf("Enter ID: ");
        scanf("%d", &e[i].id);
        
        printf("Enter Name: ");
        scanf(" %[^\n]", e[i].name); // Reads full name including spaces
        
        printf("Enter Salary: ");
        scanf("%f", &e[i].salary);
    }

    // Logic to find the employee with the highest salary
    for (i = 1; i < 5; i++) {
        if (e[i].salary > e[max_index].salary) {
            max_index = i; // Keep track of the index with the maximum salary
        }
    }

    // Display details of the employee with the highest salary
    printf("\n========================================\n");
    printf("  Employee with the Highest Salary      \n");
    printf("========================================\n");
    printf("ID     : %d\n", e[max_index].id);
    printf("Name   : %s\n", e[max_index].name);
    printf("Salary : %.2f\n", e[max_index].salary);

    return 0;
}
