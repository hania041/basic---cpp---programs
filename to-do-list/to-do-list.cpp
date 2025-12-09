#include <iostream>
using namespace std;

int main() {
    string tasks[100];  // can store up to 100 tasks
    int taskCount = 0;
    int choice;

    while (true) {
        cout << "\n=== Simple To-Do List ===\n";
        cout << "1. Add a task\n";
        cout << "2. View all tasks\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            cin.ignore();  // clear input buffer
            cout << "Enter your task: ";
            getline(cin, tasks[taskCount]);
            taskCount++;
            cout << "Task added!\n";
        }
        else if (choice == 2) {
            cout << "\n--- Your Tasks ---\n";
            if (taskCount == 0) {
                cout << "No tasks added yet.\n";
            } else {
                for (int i = 0; i < taskCount; i++) {
                    cout << i+1 << ". " << tasks[i] << endl;
                }
            }
        }
        else if (choice == 3) {
            cout << "Goodbye!\n";
            break;
        }
        else {
            cout << "Invalid choice! Try again.\n";
        }
    }

    return 0;
}
