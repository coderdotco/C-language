#include<stdio.h>
#include<string.h>

struct Patient {
    char name[50];
    char disease[50];
    char doctorassigned[50];
    int age;
};

// Input patient details
void inputdetail(struct Patient p[], int n) {
    for(int i = 0; i < n; i++) {
        printf("Enter the details of patient %d :\n", i + 1);
        printf("Name: ");
        scanf("%s", p[i].name);  // Use scanf to take name (no spaces allowed)
        
        printf("Disease: ");
        scanf("%s", p[i].disease);  // Use scanf to take disease (no spaces allowed)
        
        printf("Doctor: ");
        getchar();  // Consume the newline left by the previous scanf
        scanf("%[^\n]", p[i].doctorassigned);  // Read full doctor name (with spaces)
        
        printf("AGE: ");
        scanf("%d", &p[i].age);  // Take the age input
    }
}

// Swap function for sorting patients by age
void swap(struct Patient* a, struct Patient* b) {
    struct Patient temp = *a;
    *a = *b;
    *b = temp;
}

// Sort patients by age
void sort(struct Patient p[], int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(p[j].age > p[j + 1].age) {
                swap(&p[j], &p[j + 1]);
            }
        }
    }
}

// Display patients by doctor name
void display(struct Patient p[], int n) {
    char copyDoctor[50];
    int present = 0;
    
    printf("\nEnter the doctor Name: ");
    getchar();  // Consume any leftover newline from previous input
    scanf("%[^\n]", copyDoctor);  // Take full input for doctor name (including spaces)

    // Search for patients assigned to this doctor
    for(int i = 0; i < n; i++) {
        if(strcmp(copyDoctor, p[i].doctorassigned) == 0) {
            present = 1;
            printf("Name: %s, Disease: %s, Age: %d \n", p[i].name, p[i].disease, p[i].age);
        }
    }
    if(present == 0) {
        printf("\nDoctor entered is invalid.\n");
    }
}

// Display youngest and oldest patients
void young(struct Patient p[], int n) {
    printf("\nYoungest patient: \n");
    printf("Name: %s, Age: %d \n", p[0].name, p[0].age);
    printf("Oldest patient: \n");
    printf("Name: %s, Age: %d \n", p[n-1].name, p[n-1].age);
}

int main() {
    int n;
    printf("Enter the number of patients you want to enter: ");
    scanf("%d", &n);

    // Declare array of patients
    struct Patient p[n];
    inputdetail(p, n);
    sort(p, n);
    display(p, n);
    young(p, n);

    return 0;
}
