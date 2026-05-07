#include <stdio.h>

struct Task {
    int id;
    char description[100];
    char status[20];
};

struct Task tasks[100];
int count = 0;

void addTask() {
    printf("Enter Task ID: ");
    scanf("%d", &tasks[count].id);

    printf("Enter Description: ");
    scanf(" %[^\n]", tasks[count].description);

    printf("Enter Status (Pending/Done): ");
    scanf("%s", tasks[count].status);

    count++;
    printf("Task added successfully!\n");
}

void displayTasks() {
    if (count == 0) {
        printf("No tasks available.\n");
        return;
    }

    for (int i = 0; i < count; i++) {
        printf("\nID: %d", tasks[i].id);
        printf("\nDescription: %s", tasks[i].description);
        printf("\nStatus: %s\n", tasks[i].status);
    }
}

void updateTask() {
    int id, found = 0;

    printf("Enter Task ID to update: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (tasks[i].id == id) {
            printf("Enter new status: ");
            scanf("%s", tasks[i].status);
            found = 1;
            printf("Task updated!\n");
            break;
        }
    }

    if (!found) {
        printf("Task not found.\n");
    }
}

int main() {
    int choice;

    do {
        printf("\n--- TO-DO LIST MENU ---\n");
        printf("1. Add Task\n");
        printf("2. Display Tasks\n");
        printf("3. Update Task\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addTask(); break;
            case 2: displayTasks(); break;
            case 3: updateTask(); break;
            case 4: printf("Exiting...\n"); break;
            default: printf("Invalid choice!\n");
        }

    } while (choice != 4);

    return 0;
}