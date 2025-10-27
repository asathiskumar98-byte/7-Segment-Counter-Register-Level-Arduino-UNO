# 🔢 7-Segment Counter (Register-Level) — Arduino UNO

This project demonstrates how to interface a **7-segment display** with the **ATmega328P (Arduino UNO)** using **pure register-level programming** (no Arduino functions).

---

## ⚙️ Hardware Used
- Arduino UNO (ATmega328P)
- Common Cathode 7-Segment Display
- 220Ω current-limiting resistors for each segment

---

## 🔌 Pin Configuration
| 7-Segment Pin | Connection | Arduino Pin |
|----------------|-------------|--------------|
| a–g, dp | PORTD (D0–D7) | D0–D7 |
| Common Cathode | PB0 | D8 |

---

## 🧩 Code Explanation
- `DDRD = 0xFF` → All pins of PORTD are outputs (segments)
- `DDRB = 0x01` → PB0 as output (enable signal)
- Display digits `0–9` using binary patterns
- `_delay_ms(1000)` gives 1-second delay between counts

---

## 🧰 Build and Upload
1. Compile using **AVR-GCC** or **Atmel Studio**.  
2. Flash the HEX file to your Arduino UNO.  
3. The display will count from 0 → 9 repeatedly.
