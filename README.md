# Employee Manager (C)

A simple command-line employee management application written in C.
This project is designed as a learning-focused system to practice core C concepts such as structs, pointers, arrays, modular file organization, and safe data handling.

My long-term goal is to evolve this into a more complete employee management tool, starting with a CLI-based implementation before considering UI expansion.

---

## Project Goals

- Practice designing simple CLI programs
- Improve comfortability with C
- Transition CLI to web App


## Project Structure

employee-manager/
├── src/
│ ├── main.c # Program entry point
│ ├── logic.c # Employee manipulation functions
│ ├── ui.c # CLI menu and display logic 
│ ├── storage.c # File persistence
│ └── models.c # Optional struct-related helpers
├── include/
│ ├── models.h # Struct definitions
│ └── logic.h # Function prototypes
├── data/
│ └── employees.txt # Example data file (future use)
├── Makefile
└── README.md

## Project Progression

### 2025-12-28
- Employee data modeled using C structs
- Support for:
  - Employee name and title
  - Weekly availability (day, start hour, end hour)
  - Employee notes
- Introduced bounds-checked helper functions:
  - `add_availability()`
  - `add_note()`

### 2025-01-07
- Introduced UI functions to display main login screen.
- `get_id_input()` added


## Building Project
### Requirements
 * GCC (via MSYS2 / MinGW)
 * mingw32-make
 