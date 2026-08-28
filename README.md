# QuizSmart – ARM7 Embedded Interactive Quiz System

An interactive embedded quiz application developed using the **ARM7 LPC21xx microcontroller**. The system allows users to select quiz questions through **UART**, view questions and options through a serial terminal, and select answers using **GPIO-connected push buttons**.

The project demonstrates the practical integration of UART communication, LCD interfacing, GPIO input handling, LED indication, and embedded C programming on an ARM7 microcontroller.

---

## 📌 Project Overview

**QuizSmart** is a microcontroller-based interactive quiz system designed using the **LPC21xx ARM7 microcontroller**.

The user selects a question through the UART terminal. The corresponding question and multiple-choice options are displayed through UART, while the LCD prompts the user to select an option using four push buttons.

The selected option is processed by the microcontroller and the answer is classified as either:

- ✅ Correct
- ❌ Incorrect

The project demonstrates how multiple embedded peripherals can be integrated into a single real-time application.

---

##  Objectives

The main objectives of this project are:

- To develop an interactive quiz application using ARM7.
- To understand GPIO input and output programming.
- To interface push buttons with the LPC21xx microcontroller.
- To implement UART communication.
- To interface an LCD with the microcontroller.
- To implement menu-driven embedded applications.
- To understand polling-based switch detection.
- To provide correct/incorrect answer indication.
- To demonstrate modular embedded C programming.

---

##  Hardware Requirements

- ARM7 LPC21xx Development Board
- LPC21xx Microcontroller
- 16x2 LCD
- Four Push Buttons / Switches
- LEDs
- UART interface
- USB-to-UART / Serial communication interface
- Power supply
- Connecting wires

---

##  Software Requirements

- Embedded C
- Keil µVision / ARM7-compatible IDE
- LPC21xx device support package
- UART terminal software
- Flash Magic / compatible programming tool
- LPC21xx header files and peripheral libraries

---

##  Peripherals Used

| Peripheral | Purpose |
|------------|---------|
| UART0 | Question selection and displaying quiz information |
| GPIO | Reading push-button inputs |
| LCD | Displaying user instructions |
| LEDs | Correct/incorrect indication |
| ARM7 LPC21xx | Main controller |

---

##  Working Principle

The system operates in the following sequence:

1. The LPC21xx microcontroller initializes the required peripherals.
2. UART0 is initialized with a baud rate of **9600**.
3. LCD initialization is performed.
4. The user is presented with a list of available questions through UART.
5. The user enters the question number through the UART terminal.
6. The selected question and its four options are displayed through UART.
7. The LCD displays a message asking the user to select an option.
8. Four GPIO-connected switches represent options:
   - Switch 1 → Option A
   - Switch 2 → Option B
   - Switch 3 → Option C
   - Switch 4 → Option D
9. The microcontroller continuously polls the switches.
10. When a switch is pressed, the corresponding option number is returned.
11. The selected option is compared with the predefined correct answer.
12. UART displays either:
   - `correct`
   - `incorrect`
13. The system returns to the question-selection menu.

---

## 🧩 GPIO Configuration

The project uses four switches connected to GPIO pins.

| Input | GPIO Pin | Function |
|------|----------|----------|
| SW1 | P0.15 | Option A |
| SW2 | P0.2 | Option B |
| SW3 | P0.3 | Option C |
| SW4 | P0.4 | Option D |

LED outputs:

| LED | GPIO Pin | Function |
|-----|----------|----------|
| Wrong LED | P0.5 | Incorrect answer indication |
| Correct LED | P0.6 | Correct answer indication |

The switches are treated as active-low inputs, meaning a pressed switch produces a logic `0`.

---

## 📡 UART Configuration

UART0 is used for communication between the LPC21xx board and the serial terminal.

# Author

Madiha Kandukuru 
B.Tech - Electronics and Communication Engineering (ECE). 
