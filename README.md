# R.O.V.E.R - Remote Ohioan Vehicle and Electric Rover

The R.O.V.E.R is a two-wheeled RC Car powered by an Arduino Uno

# Materials

You will need:
1. Arduino Uno
2. 2 Gear Motors
3. HC-05 Bluetooth Module
4. L298N Motor Driver
5. 2 Wheels
6. 7.4V - 8v Power supply
7. Slide Switch
8. Jumper Wires
9. Resistors (1k)
10. Breadboard
11. Other (tape, glue gun, cardboard, etc)

# Tutorial

- Firstly, connect the negative side of the power supply to GND of the Arduino
- Connect the positive side of the power supply to the +12V or VCC pin of the L298N
- Connect the +5V pin of the L298N to the 5V pin of the Arduino via a slide switch

- Next, connect the VCC and GND pins of the HC-05 to the 5V and GND pins of the Arduino respectively
- Connect the TX pin of the HC-05 to the RX pin, or pin 0, of the Arduino.
- As the RX pin runs on 3.3V, we need to make use of a voltage divider circuit. Connect the RX pin of the HC-05 to the Arduino via a 1k Ohm resistor
- Connect a 2k Ohm resistor, or two 1k Ohm resistors, from the RX pin of the HC-05 to GND

- Then, Connect the two gear motos to the OUT1, OU2, OUT3, and OUT4 pins of the L298N
- Connect the IN1 of the L298N to pin 2
- Connect IN2 to pin 4
- Connect IN3 to pin 7
- Connect IN4 to pin 8
- Make sure that there's a jumper on the ENA and ENB pins of the L298N, which connects to to 5V
- Make sure there's a jumper behind the VCC pin, which connects it to 5V
- Attach the two wheels to the two motors

- Finally, make a chassis for the car out of cardboard, or buy a pre-made chassis
- Attach the motors to it with glue
- Upload the code from the "Control Code" folder of this repository to the Arduino
- Downlaod the app on your android device from the "releases" section or the "Control App" folder
- Enjoy your RC Car!
