#include <stdio.h>

struct employee {
    int emp_no;
    char name[20];
    float bSalary;
    float HRA;
    float nSalary;
};

int main() {
    int n;
    printf("Please enter the number of employees: ");
    scanf("%d", &n);

    struct employee emp[n];
    float totalNetSalary = 0;

    for (int i = 0; i < n; i++) {
        printf("\nEnter details of employee %d:\n", i + 1);

        printf("Employee Number: ");
        scanf("%d", &emp[i].emp_no);

        printf("Name: ");
        scanf(" %[^\n]", emp[i].name);  // Read string with spaces

        printf("Basic Salary: ");
        scanf("%f", &emp[i].bSalary);

        printf("HRA: ");
        scanf("%f", &emp[i].HRA);

        emp[i].nSalary = emp[i].bSalary + emp[i].HRA;
        totalNetSalary += emp[i].nSalary;
    }

    float averageNetSalary = totalNetSalary / n;

    printf("\nAverage Net Salary: %.2f\n", averageNetSalary);
    printf("\nEmployees with net salary more than average:\n");
    printf("Emp No\tName\t\tBasic\tHRA\tNet Salary\n");

    for (int i = 0; i < n; i++) {
        if (emp[i].nSalary > averageNetSalary) {
            printf("%d\t%-10s\t%.2f\t%.2f\t%.2f\n",emp[i].emp_no, emp[i].name, emp[i].bSalary, emp[i].HRA, emp[i].nSalary);
        }
    }

    return 0;
}
