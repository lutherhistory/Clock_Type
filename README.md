# ⏰ ClockType - C++ Time Management Class

`ClockType` is a simple, object-oriented C++ class for handling and displaying time in `HH:MM:SS` format. Ideal for learning class design, constructors, encapsulation, and operator overloading.

---

## 📁 File Overview

- `ClockType.h` – Class declaration
- `ClockType.cpp` – Class implementation (if separated)
- `main.cpp` – Example usage (optional/demo)

---

## ⚙️ Features

- Set custom time
- Get individual time components
- Increment seconds, minutes, or hours
- Compare two clocks
- Print time using either a method or `<<` operator

---

## 🛠️ Requirements

- C++11 or later
- Any C++ compiler (e.g. `g++`, `clang++`, `MSVC`)

---

## 🧠 Usage

### 1. Include the header in your project

```cpp
#include "ClockType.h"

ClockType myClock;
myClock.setTime(10, 25, 45);
myClock.printTime(); // Output: 10:25:45
```
```cpp
ClockType myClock(10, 25, 45);
std::cout << myClock << std::endl; // Output: 10:25:45
```
