#include <stdio.h>
#include <string.h>
#include "logic.h"

int add_availability(Employee *e, int day, int start_hour, int end_hour) {
    if (e->availability_count >= MAX_AVAILABILITY) {
        return 0;
    }

    Availability *a = &e->availability[e->availability_count];

    a->day = day;
    a->start_hour = start_hour;
    a->end_hour = end_hour;

    e->availability_count++;
    return 1;
}


int add_note(Employee *e, const char *text) {
    if (e->note_count >= MAX_NOTES) {
        return 0;
    }

    Note *n = &e->notes[e->note_count];
    snprintf(n->text, 
        NOTE_LENGTH, 
        "%s", text);

    e->note_count++;
    return 1;
}