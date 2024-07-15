#include <stdio.h>
#include <stdlib.h>

#define MAX_NUM_EMPLOYEE 1000

struct Employee {
    int id;
    char name[100];
    int salary;
    int age;
    char gender[20];
};

void InputEmployee(struct Employee emp[], int *numEmp) {
    printf("\nEnter the number of employees: ");
    scanf("%d", numEmp);

    for (int i = 0; i < *numEmp; i++) {
        printf("\nInformation of Employee %d:\n", i + 1);
        printf("Id: ");
        scanf("%d", &emp[i].id);
        printf("Name: ");
        scanf("%s", emp[i].name);
        printf("Salary: ");
        scanf("%d", &emp[i].salary);
        printf("Age: ");
        scanf("%d", &emp[i].age);
        printf("Gender: ");
        scanf("%s", emp[i].gender);
        printf("----------------------------------\n");
    }
}

void SaveToFile(struct Employee emp[], int numEmp) {
    FILE *file = fopen("employee.dat", "a");
    if (file != NULL) {
        for (int i = 0; i < numEmp; i++) {
            fprintf(file, "Id: %d\n", emp[i].id);
            fprintf(file, "Name: %s\n", emp[i].name);
            fprintf(file, "Salary: %d\n", emp[i].salary);
            fprintf(file, "Age: %d\n", emp[i].age);
            fprintf(file, "Gender: %s\n", emp[i].gender);
            fprintf(file, "----------------------------------\n");
        }
        fclose(file);
    } else {
        printf("Error: Could not open file for saving employee details.\n");
    }
}

void ShowEmployeeHistory() {
    FILE *file = fopen("employee.dat", "r");
    if (file != NULL) {
        char line[200];
        while (fgets(line, sizeof(line), file)) {
            printf("%s", line);
        }
        fclose(file);
    } else {
        printf("Error: Could not open file for showing employee history.\n");
    }
}

int main() {
    struct Employee emp[MAX_NUM_EMPLOYEE];
    int numEmp = 0;
    int choice;

    do {
        printf("\n-- Program input detail employee --\n");
        printf("1. Input Employee\n");
        printf("2. Show History\n");
        printf("3. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                InputEmployee(emp, &numEmp);
                SaveToFile(emp, numEmp);
                printf("\nInput Successful.\n");
                break;
            case 2:
                ShowEmployeeHistory();
                printf("\nShow history Successful.\n");
                break;
            case 3:
                printf("\nExiting program.\n");
                break;
            default:
                printf("\nInvalid program.\n");
                break;
        }
    } while (choice != 3);

    return 0;
}
