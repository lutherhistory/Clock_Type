# ⏰ ClockType - C++ Header File

A lightweight and reusable C++ class for managing and displaying time in hour-minute-second format.


## 🛠️ Features

- Set time manually
- Increment seconds, minutes, or hours
- Compare two time values
- Display time in HH:MM:SS format

## 🧠 Usage

### 1. Include the header in your project

```cpp
#include "ClockType.h"

ClockType myClock;
myClock.setTime(10, 25, 45);
myClock.printTime(); // Output: 10:25:45

or

ClockType myClock(10, 25, 45);
cout << myClock << endl; // Output: 10,25,45
```


---

Let me know if you want a `main.cpp` example to go with it!

