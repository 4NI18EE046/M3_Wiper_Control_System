# WIPER CONTROL SYSTEM

* Windscreen wiper is a device that cleans water, snow or mud from the windscreen of vehicle. Thus, it ensures proper visibility of the road ahead. Windshield wipers are operated by an electric motor. The electric motor is attached to a worm gear, which transmits the necessary force to a long rod that sets the wiper arms in motion. The worm gear is able to generate the force required to move the wipers as fast as they need to move.
* Here in this project our aim is to build a wiper control system using STM32F4-Discovery board. The whole concept of Wiper system is done using leds ie.,(RED, ORANGE, GREEN, BLUE) and a switch button.
*  The following approach is considered in building this project (wiper control system)
   1. Ignition Key Position at ACC: The Red LED is ON, if the user button is pressed and held for 2 secs
   2. Wiper ON: Wiper is OFF: On press of the user input, Blue, Green and Orange LEDs come ON one at a time with the set frequency, The frequency changes on every         alternate key press, 3 frequency levels with 1, 4 and 8 Hz
   3. Wiper OFF: Wiper is ON: The LED glow pattern stops on the 4th press; the wiper action starts next press onwards as mentioned in step 2
   4. Ignition Key Position at Lock: The Red LED is OFF, if the user button is pressed and held for 2 secs
