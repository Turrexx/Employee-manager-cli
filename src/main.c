#include <stdio.h>
#include "models.h"

int main(void) {

    /* Create and initialize an employee */
    Employee e = {0};

    e.id = 1;
    snprintf(e.name, sizeof(e.name), "John Smith");
    snprintf(e.title, sizeof(e.title), "Senior Pharmacy Technician");

    /* Add availability */
    if (e.availability_count < MAX_AVAILABILITY) {
        e.availability[e.availability_count].day = 1;        // Monday
        e.availability[e.availability_count].start_hour = 9;
        e.availability[e.availability_count].end_hour = 17;
        e.availability_count++;
    }

    if (e.availability_count < MAX_AVAILABILITY) {
        e.availability[e.availability_count].day = 3;        // Wednesday
        e.availability[e.availability_count].start_hour = 12;
        e.availability[e.availability_count].end_hour = 20;
        e.availability_count++;
    }

    if (e.availability_count < MAX_AVAILABILITY) {
        e.availability[e.availability_count].day = 5;       // Friday
        e.availability[e.availability_count].start_hour = 15;
        e.availability[e.availability_count].end_hour = 22;
        e.availability_count++;
    }

    /* Add a note */
    if (e.note_count < MAX_NOTES) {
        snprintf(e.notes[e.note_count].text,
                 sizeof(e.notes[e.note_count].text),
                 "Requested weekends off");
        e.note_count++;
    }

    if (e.note_count < MAX_NOTES) {
        snprintf(e.notes[e.note_count].text,
                sizeof(e.notes[e.note_count].text),
            "Unavailable Thursdays");
        e.note_count++;
    }

    if (e.note_count < MAX_NOTES) {
        snprintf(e.notes[e.note_count].text, 
            sizeof(e.notes[e.note_count].text), 
            "Follow up on tardiness");
        e.note_count++;
    }

    /* Print to verify */
    printf("Employee: %s (%s)\n", e.name, e.title);

    for (int i = 0; i < e.availability_count; i++) {
        printf("Availability %d: Day %d, %02d-%02d\n",
               i,
               e.availability[i].day,
               e.availability[i].start_hour,
               e.availability[i].end_hour);
    }

    for (int i = 0; i < e.note_count; i++) {
        printf("Note %d: %s\n", i, e.notes[i].text);
    }

    return 0;
}
