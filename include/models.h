#ifndef MODELS_H
#define MODELS_H

#define MAX_AVAILABILITY 7
#define MAX_NOTES 5
#define NOTE_LENGTH 100


typedef struct {
    int day;
    int start_hour;
    int end_hour;
} Availability;

typedef struct {
    char text[NOTE_LENGTH];
} Note;

typedef struct {
    int id;
    char name[50];
    char title[50];

    Availability availability[MAX_AVAILABILITY];
    int availability_count;

    Note notes[MAX_NOTES];
    int note_count;

} Employee;



#endif