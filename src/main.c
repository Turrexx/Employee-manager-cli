#include <stdio.h>
#include "models.h"
#include "logic.h"
#include "ui.h"

int main(void) {

    /* Create and initialize an employee */
    Employee e = {0};

    e.id = 1;
    snprintf(e.name, sizeof(e.name), "John Smith");
    snprintf(e.title, sizeof(e.title), "Senior Pharmacy Technician");
    e.role = ROLE_EMPLOYEE;

    /* Add availability */
    add_availability(&e, 2, 8, 16);
    add_availability(&e, 3, 8, 16);
    add_availability(&e, 4, 8, 16);
    add_availability(&e, 6, 14, 22); 
    add_availability(&e, 7, 14, 22);

    /* Add a note */
    add_note(&e, "Finished onboarding");
 

    /* Print to verify */
    int emp_id;
    clear_screen();
    print_login_menu();
    while (1) {
        if (!get_id_input(&emp_id)) {
            clear_screen();
            print_login_menu();
            printf("Invalid input. Try again.\n");
            continue;
        }
        break;
    }


    printf("--------------------------------\n");
    printf("ID entered: %d\n", emp_id);
    if (e.role == ROLE_EMPLOYEE) {
        printf("Role: Employee\n");
    } else if (e.role == ROLE_MANAGER) {
        printf("Role: Manager\n");
    }
    return 0;
}
