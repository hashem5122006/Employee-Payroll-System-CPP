# 🏢 Employee Payroll Management System

A **C++ console-based** application for managing employee records and payroll calculations — built with a focus on **data integrity**, **security**, and **clean architecture**.

---

## 📌 About the Project

This system was built as a practical C++ project to demonstrate real-world programming concepts beyond basic university coursework. It handles the full lifecycle of employee management — from secure login to salary computation and persistent data storage.

---

## ✨ Features

### 🔐 Authentication System
- **Multi-level login** — separate access for Admins and Employees
- Password-protected accounts for both roles

### 👥 Employee Management
- Add, update, and view employee records
- Store employee details: name, ID, position, age, and phone number
- Input validation using **Regular Expressions (Regex)** for IDs and phone numbers

### 💰 Payroll Calculation
- Computes **Net Salary** automatically based on:
  - Basic Salary
  - Bonus
  - Tax & Tax Rate
  - Overtime Hours & Overtime Rate
  - Deductions
- Performance score tracking per employee

### 💾 Data Persistence
- All data is **saved and loaded from files** using File I/O
- No data is lost between sessions

---

## 🛠️ Technologies Used

| Technology | Usage |
|---|---|
| C++ | Core programming language |
| File I/O (`fstream`) | Persistent data storage |
| Regular Expressions (`<regex>`) | Input validation |
| Header Files (`.h`) | Modular code structure |
| Structs | Data modeling for employees & admins |

---

## 📁 Project Structure

```
Employee-Payroll-System-CPP/
│
├── main.cpp              # Entry point — loads data and launches the app
├── EmployeeManager.h     # Data structures & function declarations
└── EmployeeManager.cpp   # Core logic implementation
```

---

## 🚀 How to Run

### Prerequisites
- A C++ compiler (g++ recommended)
- C++11 or later

### Steps

```bash
# 1. Clone the repository
git clone https://github.com/hashem5122006/Employee-Payroll-System-CPP.git

# 2. Navigate to the folder
cd Employee-Payroll-System-CPP

# 3. Compile
g++ main.cpp EmployeeManager.cpp -o payroll -std=c++11

# 4. Run
./payroll
```

---

## 👤 Author

**Hashem Abed**  
Computer Science Student @ Ain Shams University  
[LinkedIn](https://www.linkedin.com/in/hashem-abed) • [GitHub](https://github.com/hashem5122006)

