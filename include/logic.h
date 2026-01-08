#ifndef LOGIC_H
#define LOGIC_H

#include "models.h"


int add_availability(Employee *e, int day, int start_hour, int end_hour);
int add_note(Employee *e, const char *text);

void print_availability(const Employee *e);
void print_notes(const Employee *e);


#endif