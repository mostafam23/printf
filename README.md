# ft_printf

A 42 project where we reimplement the `printf` function in C.  
The goal is to learn about variadic functions, formatted output, and to build a
deeper understanding of how low-level I/O works.

---

## 📖 Description
`ft_printf` is a custom version of the standard C library function `printf`.  
It reproduces the behavior of `printf` by handling formatted output and
conversions such as characters, strings, pointers, integers, and hexadecimals.

This project is part of the **42 curriculum**.

---

## ⚙️ Features
- Supports the following conversions:
  - `%c` : character  
  - `%s` : string  
  - `%p` : pointer address  
  - `%d` / `%i` : signed decimal integer  
  - `%u` : unsigned decimal integer  
  - `%x` / `%X` : hexadecimal (lowercase / uppercase)  
  - `%%` : percent sign  

- Handles flags, width, and precision where required.  
- Built with modular and reusable code style following 42 Norminette.

---

## 🛠️ Usage

### 1. Clone the repository
```bash
git clone https://github.com/your-username/ft_printf.git
cd ft_printf
