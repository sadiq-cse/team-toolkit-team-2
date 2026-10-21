#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// ==========================================
// SAMI (DEVELOPER LEAD) FEATURES
// ==========================================
void basic_calculator() {
    double a, b;
    char op;
    
    printf("\n--- Basic Arithmetic Calculator ---\n");
    printf("Enter expression (e.g., 10 + 5): ");
    
    if (scanf("%lf %c %lf", &a, &op, &b) != 3) {
        while (getchar() != '\n');
        printf("Invalid numeric input.\n");
        return;
    }
    
    if (op == '+') {
           printf("Result: %.2lf\n", a + b);
    } else if (op == '-') {
           printf("Result: %.2lf\n", a - b);
    } else if (op == '*') {
           printf("Result: %.2lf\n", a * b);
    } else if (op == '/') {
        if (b == 0) {
             printf("Error: Division by zero!\n");
        } else {
             printf("Result: %.4lf\n", a / b);
        }
    } else {
        printf("Invalid operator.\n");
    }

}

void unit_converter() {
    int sub;
    double val;
    
    printf("\n--- Unit Converter ---\n");
    printf("1. Kilometers to Miles\n");
    printf("2. Celsius to Fahrenheit\n");
    printf("Select conversion (1/2): ");
       scanf("%d", &sub);
    printf("Enter value to convert: ");
       scanf("%lf", &val);

    if (sub == 1) {
         printf("%.2lf km = %.2lf miles\n", val, val * 0.621371);
    } else if (sub == 2) {
         printf("%.2lf C = %.2lf F\n", val, (val * 9.0 / 5.0) + 32.0);
    } else {
         printf("Invalid selection.\n");
    }
}


// ==========================================
// SADIQ (MAINTAINER LEAD) FEATURES
// ==========================================

void gpa_calculator() {
    int n, i;
    double credit, gp, total_points = 0.0, total_credits = 0.0;
    printf("\n--- Semester GPA Calculator ---\n");
    printf("Enter number of courses: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("Course %d credit hours: ", i);
        scanf("%lf", &credit);
        printf("Course %d grade point (0.00 - 4.00): ", i);
        scanf("%lf", &gp);
        total_points += (credit * gp);
        total_credits += credit;
    }

    if (total_credits > 0) {
        printf("Semester GPA: %.2lf\n", total_points / total_credits);
    } else {
        printf("Total credits must be greater than zero.\n");
    }
}


char todo_list[20][100];
int todo_count = 0;

void todo_manager() {
    int sub, i, del_idx;
    while (1) {
        printf("\n--- To-Do List Manager ---\n");
        printf("1. View Tasks  2. Add Task  3. Remove Task  4. Back\n");
        printf("Choose action: ");
        scanf("%d", &sub);
        while (getchar() != '\n');

        if (sub == 1) {
            if (todo_count == 0) {
                printf("Your to-do list is empty.\n");
            } else {
                for (i = 0; i < todo_count; i++) {
                    printf("%d. %s\n", i + 1, todo_list[i]);
                }
            }
        } else if (sub == 2) {
            if (todo_count >= 20) {
                printf("Task list is full!\n");
            } else {
                printf("Enter new task: ");
                fgets(todo_list[todo_count], 100, stdin);
                todo_list[todo_count][strcspn(todo_list[todo_count], "\n")] = '\0';
                todo_count++;
                printf("Task added.\n");
            }
        } else if (sub == 3) {
            printf("Enter task number to remove: ");
            scanf("%d", &del_idx);
            if (del_idx >= 1 && del_idx <= todo_count) {
                for (i = del_idx - 1; i < todo_count - 1; i++) {
                    strcpy(todo_list[i], todo_list[i + 1]);
                }
                todo_count--;
                printf("Task removed.\n");
            } else {
                printf("Invalid task number.\n");
            }
        } else if (sub == 4) {
            break;
        } else {
            printf("Invalid choice.\n");
        }
    }
}


// ==========================================
// ASHIQ (REVIEWER LEAD) FEATURES
// ==========================================
void trivia_quiz() {
    int ans, score = 0;
    printf("\n--- Git & GitHub Quick Quiz ---\n");

    printf("Q1: Which Git operation saves uncommitted changes temporarily?\n");
    printf("1) Commit   2) Stash   3) Blame\nYour answer (1-3): ");
    scanf("%d", &ans);
    if (ans == 2) { printf("Correct!\n"); score++; }
    else { printf("Incorrect. Answer is 2 (Stash).\n"); }

    printf("\nQ2: Which keyword in a PR description auto-closes Issue #5?\n");
    printf("1) Closes #5   2) Deletes #5   3) Pushes #5\nYour answer (1-3): ");
    scanf("%d", &ans);
    if (ans == 1) { printf("Correct!\n"); score++; }
    else { printf("Incorrect. Answer is 1 (Closes #5).\n"); }

    printf("\nQ3: Which branch is protected in our repository workflow?\n");
    printf("1) feature   2) main   3) draft\nYour answer (1-3): ");
    scanf("%d", &ans);
    if (ans == 2) { printf("Correct!\n"); score++; }
    else { printf("Incorrect. Answer is 2 (main).\n"); }

    printf("\nFinal Quiz Score: %d/3\n", score);
}


void password_generator() {
    int length, i;
    const char chars[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*";
    int char_len = (int)strlen(chars);

    printf("\n--- Secure Password Generator ---\n");
    printf("Enter password length (8-32): ");
    scanf("%d", &length);

    if (length < 8 || length > 32) {
        printf("Length must be between 8 and 32.\n");
        return;
    }

    printf("Generated Password: ");
    for (i = 0; i < length; i++) {
        printf("%c", chars[rand() % char_len]);
    }
    printf("\n");
}


// ==========================================
// MAIN CLI MENU
// ==========================================
int main() {
    int choice;
    srand((unsigned int)time(NULL));

    while (1) {
        printf("\n====================================\n");
        printf("         TEAM TOOLKIT v1.0          \n");
        printf("====================================\n");
        printf("1. Basic Calculator       (Sami)\n");
        printf("2. Unit Converter         (Sami)\n");
        printf("3. GPA Calculator         (Sadiq)\n");
        printf("4. To-Do List Manager     (Sadiq)\n");
        printf("5. Git & CS Trivia Quiz   (Ashiq)\n");
        printf("6. Password Generator     (Ashiq)\n");
        printf("0. Exit\n");
        printf("Select an option (0-6): ");

        if (scanf("%d", &choice) != 1) {
            while (getchar() != '\n');
            printf("Invalid input. Please enter a number.\n");
            continue;
        }

        if (choice == 1) {
            basic_calculator();
        } else if (choice == 2) {
            unit_converter();
        } else if (choice == 3) {
            gpa_calculator();
        } else if (choice == 4) {
            todo_manager();
        } else if (choice == 5) {
            trivia_quiz();
        } else if (choice == 6) {
            password_generator();
        } else if (choice == 0) {
            printf("Exiting Team Toolkit. Goodbye!\n");
            break;
        } else {
            printf("Invalid selection. Try again.\n");
        }
    }
    return 0;
}
