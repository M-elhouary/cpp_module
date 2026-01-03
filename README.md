# c-_problem_solving

Small collection of C++ practice exercises (phonebook/megaphone etc.). This repository contains short exercises meant for practicing basic C++ concepts: classes, objects, I/O, and simple data handling.

## Repository layout

- `cpp00/`
  - `ex00/` - Megaphone exercise
    - `Makefile`
    - `megaphone.cpp`
  - `ex01/` - PhoneBook/Contact exercise
    - `Contact.cpp`
    - `Contact.hpp`
    - `PhoneBook.cpp`
    - `PhoneBook.hpp`
    - `main.cpp`
    - `Makefile`
  - `a.out` (possible compiled binary)
  - `test.cpp` (misc test file)
  - `en.subject.pdf` (exercise description/original subject PDF)

> Note: file listing may vary; check the folders to see exact contents.

## Purpose

This project provides small, self-contained C++ exercises for learning and demonstrating:
- Class design and instances (objects) in C++
- Member functions, constructors, and destructors
- Basic input/output via `std::cin` / `std::cout`
- Simple memory/ownership patterns (stack vs heap)

The `PhoneBook` exercise implements a tiny interactive program that accepts these commands from standard input:
- `ADD` — add a new contact
- `SEARCH` — list/search existing contacts
- `EXIT` — quit the program

## Build & Run

Each exercise folder contains a `Makefile`. To build and run the `PhoneBook` exercise ( `cpp00/ex01` ), from the repository root run:

```sh
# Build using the Makefile in ex01
cd cpp00/ex01
make
# If make produces an executable (check the Makefile), run it:
./phonebook    # or possibly ./a.out depending on Makefile
```

If you prefer to compile manually (example for `ex01`):

```sh
# Example manual compile (adjust file names if needed)
cd cpp00/ex01
g++ -std=c++11 -Wall -Wextra -Werror Contact.cpp PhoneBook.cpp main.cpp -o phonebook
./phonebook
```

When the program runs, enter one of the commands (`ADD`, `SEARCH`, `EXIT`) when prompted. The `PhoneBook` program is interactive and reads full lines from stdin.

## Example usage (PhoneBook)

1. Run the program:

```sh
./phonebook
```

2. Example session (user input shown after prompt):

```
Enter a command (ADD, SEARCH, EXIT): ADD
Enter first name: Alice
Enter last name: Baker
Enter phone number: 0123456789
Enter a command (ADD, SEARCH, EXIT): SEARCH
# (Program prints a short table/list of contacts where you can pick one to view details)
Enter a command (ADD, SEARCH, EXIT): EXIT
```

## Notes & tips

- The code is compatible with modern compilers; compile with `-std=c++11` or later. If the exercise target requires an older standard (for example `c++98`), adjust the `-std` flag accordingly.
- Prefer using the provided `Makefile` where available.
- If you see `new`/`delete` in the code, consider using smart pointers like `std::unique_ptr` in future refactors to avoid leaks.

## Contributing

Small improvements are welcome:
- Fix typos or unclear prompts
- Add unit tests or simple test harnesses
- Improve input validation and error handling

If you want me to:
- Review or refactor `PhoneBook.cpp` / `Contact.cpp`
- Add a unit test or CI workflow
- Make `Search_A_Contact()` `const` where appropriate

…tell me which area you'd like improved and I can make a targeted change.

## License

This repository does not include a license file. If you want to publish or share this code, consider adding an appropriate license (MIT, Apache-2.0, etc.).

----
Generated README by assistant to help document the exercises and how to build/run them. Adjust any executable names or commands to match your local `Makefile` output as needed.
