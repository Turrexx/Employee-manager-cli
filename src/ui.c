#include <stdio.h>
#include <stdlib.h>
#include "ui.h"


void clear_screen() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

void print_login_menu(void) {
    clear_screen();
    printf("-----------------------------------------------------------------------------------------------------------------------------\n");
    printf("--------------------------------------------- ~ Employee Management Solutions ~ ---------------------------------------------\n");
    printf("-----------------------------------------------------------------------------------------------------------------------------\n");
    printf("----------------------------------------------- ~ Please Enter Employee ID ~ ------------------------------------------------\n");
    printf("-----------------------------------------------------------------------------------------------------------------------------\n");
}

int get_id_input(int *out_id) {
    char line[100];
    char extra;

    while (1) {
        printf("Employee ID: ");

        if (!fgets(line, sizeof(line), stdin)) {
            return -1;
        }

        if (sscanf(line, " %d %c", out_id, &extra) == 1) {
            return 1;
        }
        return 0;
  

    }

}