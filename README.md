# Arduino LCD Greeting Toggle

This project uses an Arduino Uno, a 16x2 LCD display, and a single push button to toggle between two greeting messages. Each press of the button switches the message shown on the LCD.

---

## Components Required

- Arduino Uno (or compatible board)
- 16x2 LCD Display (HD44780-compatible)
- Push button
- Breadboard and jumper wires
- Potentiometer for LCD contrast
- USB cable for uploading code

---
## Wiring Diagram

![picture](https://github.com/user-attachments/assets/4d2bec95-6879-4221-a143-bcc06766b31a)



> The code uses `INPUT_PULLUP`, so no external resistor is needed.


## 🧑‍💻 Code Behavior Summary

- On boot:
  - LCD shows:
    ```
    Hi Hannah!
    Hi Keith!
    ```

- On button press:
  - LCD switches to:
    ```
    Good to see you!
           :)
    ```

- Pressing the button again toggles it back. 



