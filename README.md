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

<img src="https://github.com/user-attachments/assets/4d2bec95-6879-4221-a143-bcc06766b31a" width="400"/>

<img src="https://github.com/user-attachments/assets/7395c050-500b-4bca-9340-3b7143dc2d53" width="400"/>



> The code uses `INPUT_PULLUP`, so no external resistor is needed.

> I followed [Lesson 14 of the ELEGOO UNO Project Guide](https://www.elegoo.com/blogs/arduino-projects/elegoo-uno-project-super-starter-kit-tutorial?srsltid=AfmBOopGCiOi5mwlfzS42JY0FJHKfVvcF-TU_g2O6mA4O-12nJ2bwIF7) to wire up the LCD. I was able to wire up the button and write the code myself. What's next for me is to learn and build more to this project, and learn how to create my own wiring diagram and schematic.



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



