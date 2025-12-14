# To-Do List Manager

A simple C++ project to manage daily tasks.

## Overview

Manage your daily tasks efficiently with this lightweight CLI tool. All tasks are automatically saved to a text file and persist between sessions.

## 📋 Features

- **View Tasks** - Display all tasks with completion status
- **Add Tasks** - Create new tasks with descriptions
- **Mark Complete** - Mark tasks as done
- **Delete Tasks** - Remove completed or unwanted tasks
- **Auto-Save** - Tasks persist between sessions

## Installation
```bash
# Clone the repository
git clone https://github.com/prathmesh-nakate/todo-list-manager
cd todo-list-manager

# Compile
g++ main.cpp -o todo

# Run
./todo        # Linux/Mac
todo.exe      # Windows
```
## Usage Example
```
===================================================
             Simple To-Do List Manager             
===================================================

---- Menu ----
1. View Tasks
2. Add Tasks
3. Mark Tasks Complete
4. Delete Tasks
5. Exit

Choose (1-5): 2
Enter Tasks Description: Complete C++ project
Task Added!

Choose (1-5): 1

=== Your To-Do List ===
1. [ ] Complete C++ project
```

## How It Works

- Tasks are stored in `tasks.txt`
- Format: `0 description` (incomplete) or `1 description` (complete)
- All changes are automatically saved

## Project Structure
```
.
├── main.cpp          # Source code
├── README.md         # Documentation
├── .gitignore        # Git ignore rules
└── tasks.txt         # Task storage (auto-generated)
```

## Technologies

- **Language:** C++
- **Libraries:** Standard Library (iostream, fstream, vector, string)
- **Storage:** Text file

## What I Learned

- File I/O operations in C++
- Vector manipulation
- Menu-driven program design

## Contributing

Pull requests are welcome! For major changes, please open an issue first.

## Author

**[Prathmesh Umesh Nakate]**
- GitHub: [@prathmesh-nakate] (https://github.com/prathmesh-nakate)
- Email: prathmeshnakate24@gmail.com

---

⭐ Star this repo if you found it helpful!




