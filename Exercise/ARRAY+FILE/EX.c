#include <stdio.h>
#include <stdlib.h>

struct Employee {
    int id, salary, age;
    char name[50]; 
    char sex[2];
};

void saveFile(struct Employee emp[], int n) {
    FILE *fptr = fopen("employee.dat","wb");
    if(fptr == NULL) {
        printf("Error!");
        exit(1);
    }
    fwrite(&n, sizeof(int), 1, fptr);
    fwrite(emp, sizeof(struct Employee), n, fptr);
    fclose(fptr);
}

void readFile() {
    FILE *fptr = fopen("employee.dat","rb");
    if(fptr == NULL) {
        printf("Error!");
        exit(1);
    }
    int n;
    fread(&n, sizeof(int), 1, fptr);
    printf("Number of Employees: %d\n", n);
    printf("ID\tSalary\tAge\tName\tSex\n");
    struct Employee emp;
    while(fread(&emp, sizeof(struct Employee), 1, fptr)) {
        printf("%d\t%d\t%d\t%s\t%s\n", emp.id, emp.salary, emp.age, emp.name, emp.sex);
    }
    fclose(fptr);
}

int main() {
    struct Employee emp[100];
    int n, i;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Enter details for employee %d:\n", i+1);
        printf("ID: ");
        scanf("%d", &emp[i].id);
        printf("Salary: ");
        scanf("%d", &emp[i].salary);
        printf("Age: ");
        scanf("%d", &emp[i].age);
        printf("Name: ");
        scanf("%s", emp[i].name);
        printf("Sex: ");
        scanf("%s", emp[i].sex);
    }

    saveFile(emp, n);
    printf("Employee details saved to file.\n");

    printf("\nReading employee details from file:\n");
    readFile();

    return 0;
}
