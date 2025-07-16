# Bookshop Inventory Management System (C++)

A simple **Bookshop Inventory Management System** built using **C++**, designed for **Console Applications**.
This project allows bookshops to manage their book records, track inventory, and perform basic operations like search, update, delete, and purchase.

## Features

* **Add New Books**
* **Display All Books**
* **Search for a Book** by Title and Author
* **Update Book Details**
* **Delete a Book from Inventory**
* **Purchase Books** (Reduce Quantity & Generate Total Cost)

## Technologies Used

* **Language:** C++
* **IDE:** CodeBlocks / Visual Studio / Dev C++ / Any C++ Compiler
* **File Handling:** Simple text file-based storage (`book.txt`)
* **OOP Concepts:** Classes, Objects, Encapsulation

## Project Structure

```
Bookshop-inventory-management-system-CP-C-
│
├── main.cpp           # Main source code
├── book.txt           # Data file for storing books (auto-generated)
├── README.md          # Project documentation (you are here)
```

---

## ⚙️ How It Works

1. **Start the Program**
2. **Select Options from Menu:**

| Option | Description       |
| ------ | ----------------- |
| 1      | Add New Book      |
| 2      | Display All Books |
| 3      | Search for Book   |
| 4      | Update Book       |
| 5      | Delete Book       |
| 6      | Purchase Book     |
| 7      | Exit              |

3. **File Handling:**
   All records are stored in `book.txt` using file input/output operations.

---

## Usage

### Run the Program:

1. **Clone the repository:**

```bash
git clone https://github.com/m-wasiq-37/Bookshop-inventory-managment-system-CP-C-.git
cd Bookshop-inventory-managment-system-CP-C-
```

2. **Compile and Run:**

For Windows (Command Line):

```bash
g++ main.cpp -o bookshop
bookshop.exe
```

For Linux/macOS:

```bash
g++ main.cpp -o bookshop
./bookshop
```

---

## Example Output

```
========= BOOKSHOP INVENTORY SYSTEM =========

1. Add Book
2. Display Books
3. Search Book
4. Update Book
5. Delete Book
6. Purchase Book
7. Exit

Enter your choice:
```

---

## Data Storage

* The books are stored in a plain text file named `book.txt`.
* Each book record includes:

  * Title
  * Author
  * Publisher
  * Price
  * Quantity

---

## Learning Objectives

This project is ideal for **beginner to intermediate C++ learners** who want to:

* Practice **Object-Oriented Programming (OOP)**
* Learn **File Handling** in C++
* Develop **Menu-Driven Console Applications**

---

## Limitations

* **No database support** (File-based storage only)
* **Console-based UI** (No graphical interface)
* **Basic error handling**

---

## Contribution

Contributions are welcome!
Feel free to **fork**, improve the code, or add new features such as:

* GUI Integration (using Qt or C++)
* Database Support (MySQL / SQLite)
* Better UI/UX for console

---

## License

This project is **open-source** and available under the **MIT License**.

---

## Acknowledgements

Created by **[M Wasiq](https://github.com/m-wasiq-37)**
For learning purposes and academic practice.
