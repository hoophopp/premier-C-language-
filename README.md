# 🧮 Prime Number Checker in C

Hey there! 👋  
This is a small C program I wrote that checks if a number is prime. It also shows the sum of all its divisors along the way.

---

## 🌟 What it does

- It calculates the **sum of all divisors** of any number you enter.
- Then, using that sum, it checks if the number is **prime**.
- Reminder: a number is prime if it’s only divisible by `1` and itself — meaning the sum of its divisors is `n + 1`.

---

## 🚀 How it works

### 🔧 `sommeDiviseurs(int n)`
This function adds up all the numbers that divide `n` exactly (no remainder).  
It just loops through from `1` to `n`, and every time `n % i == 0`, it adds `i` to the total.

### 🔎 `EstPremier(int n)`
Here’s where the magic happens ✨  
It uses `sommeDiviseurs(n)` to check if the number is prime. If the sum is exactly `n + 1`, then it's prime (only divisible by 1 and itself).  
It returns `1` if it *is* prime, and `0` if it’s *not*.

### 🧑‍💻 `main()`
- It asks the user to enter a **positive number**.
- If the number is 1 or less, it keeps asking (since 1 isn't prime).
- Then it calls the two functions above to figure out if the number is prime.
- Finally, it shows the result in the console.

---

## 🧪 Example

```bash
Enter a positive number: 5
5 is a prime number.
