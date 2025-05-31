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

- Set Header before using this library

<pre style="background: #1e1e1e; padding: 12px; border-radius: 8px; position: relative; font-family: 'Fira Code', 'Courier New', monospace; border: 1px solid #444; overflow: auto;">
  <code id="copyCode" style="color: #569CD6;">#include</code> <code id="copyCode" style="color: #CE9178;">"ClockType.h"</code>
  <button 
    onclick="copyToClipboard()"
    style="position: absolute; top: 10px; right: 10px; background: #333; color: #D4D4D4; border: none; border-radius: 4px; padding: 4px 8px; cursor: pointer; font-size: 12px; transition: background 0.2s;"
    aria-label="Copy code"
    onmouseover="this.style.background='#444'"
    onmouseout="this.style.background='#333'"
  >Copy</button>
  <span id="copyFeedback" style="display: none; color: #4CAF50; position: absolute; right: 10px; top: 35px; font-size: 12px;">✓ Copied!</span>
</pre>

<script>
  function copyToClipboard() {
    const code = document.getElementById('copyCode').innerText || document.querySelector('#copyCode').textContent;
    const feedback = document.getElementById('copyFeedback');
    
    navigator.clipboard.writeText(code.trim())
      .then(() => {
        feedback.style.display = 'inline';
        setTimeout(() => feedback.style.display = 'none', 2000);
      })
      .catch(err => console.error('Failed to copy: ', err));
  }
</script>

<script>
  function copyToClipboard() {
    const code = document.getElementById('copyCode').innerText;
    const feedback = document.getElementById('copyFeedback');
    
    navigator.clipboard.writeText(code)
      .then(() => {
        feedback.style.display = 'inline';
        setTimeout(() => feedback.style.display = 'none', 2000);
      })
      .catch(err => console.error('Failed to copy: ', err));
  }
</script>


```cpp

ClockType myClock;

myClock.setTime(10, 25, 45);
myClock.printTime();
// Output: 10:25:45
```

or 
```cpp
ClockType myClock(10, 25, 45);

std::cout << myClock << std::endl;
// Output: 10:25:45
```

## ⚙️Compile and Run

```bash
g++ yourfile.cpp ClockType.o -o main
```

- and run

```sh
./main
```
