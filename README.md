Simple Switch-Controlled Motor using Arduino
This project demonstrates a basic motor control system using an Arduino, a MOSFET driver, and a push-button switch.
When the switch is pressed, the motor turns ON.
When the switch is released, the motor turns OFF.

🔹 Features
Push-button control: Turns the motor on/off instantly

MOSFET-based drive: Allows switching higher currents safely

Internal pull-up resistor: Eliminates the need for an external pull-up

Fail-safe startup: Motor is off when the Arduino boots

🔹 Hardware Requirements
Arduino board (e.g., Uno, Nano, Mega)

N-channel MOSFET (logic-level, e.g., IRFZ44N, IRL540N)

Push-button switch

Motor (DC)

Power source (appropriate for your motor)

Wires and breadboard

🔹 Circuit Connections
Arduino Pin	Component	Description
D7	MOSFET Gate	Motor control signal
D6	Switch	One side of push-button
GND	Switch & MOSFET Source	Common ground
MOSFET Drain	Motor (-) terminal	Motor connection
Motor (+) terminal	Power supply (+)	Motor power input

Note: Use a flyback diode across the motor terminals to protect against voltage spikes.

🔹 Code Explanation
MOTOR_PIN (D7) sends a HIGH/LOW signal to the MOSFET gate to control the motor.

SWITCH_PIN (D6) reads the push-button state with an internal pull-up resistor.

Logic:

Pressing the switch (LOW state) → Motor ON.

Releasing the switch (HIGH state) → Motor OFF.

🔹 How to Use
Wire the circuit as per the connection table.

Upload the code to your Arduino.

Press the push-button to run the motor; release to stop.
