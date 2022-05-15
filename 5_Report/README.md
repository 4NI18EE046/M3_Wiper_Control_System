# WIPER CONTROL SYSTEM

* Windscreen wiper is a device that cleans water, snow or mud from the windscreen of vehicle. Thus, it ensures proper visibility of the road ahead. Windshield wipers are operated by an electric motor. The electric motor is attached to a worm gear, which transmits the necessary force to a long rod that sets the wiper arms in motion. The worm gear is able to generate the force required to move the wipers as fast as they need to move.
* Here in this project our aim is to build a wiper control system using STM32F4-Discovery board. The whole concept of Wiper system is done using leds ie.,(RED, ORANGE, GREEN, BLUE) and a switch button.
*  The following approach is considered in building this project (wiper control system)
   1. Ignition Key Position at ACC: The Red LED is ON, if the user button is pressed and held for 2 secs
   2. Wiper ON: Wiper is OFF: On press of the user input, Blue, Green and Orange LEDs come ON one at a time with the set frequency, The frequency changes on every         alternate key press, 3 frequency levels with 1, 4 and 8 Hz
   3. Wiper OFF: Wiper is ON: The LED glow pattern stops on the 4th press; the wiper action starts next press onwards as mentioned in step 2
   4. Ignition Key Position at Lock: The Red LED is OFF, if the user button is pressed and held for 2 secs

# REQUIREMENTS
## High level requirements

| Sl.No |       High level requirements	|	Description		|  Category  |
|:-----:|		   :---------:		|	:---------:		| :-------: |
|   1   |			HLR1			|		When switch is flicked once engine turns on		          |   Technical	|
|   2   |			HLR2			|		When switch is flicked twice wiper turns on with 1Hz		  |   Technical	|
|   3   |			HLR3			|		When switch is flicked thrice wiper turns on with 4Hz		|   Technical	|
|   4   |     HLR4      |   When switch is flicked 4 times wiper turns on with 8Hz   |   Technical |
|   5   |     HLR5      |   When switch is flicked 5 times wiper turns off           |   Technical |
|   6   |     HLR6      |   When switch is flicked 6 times engine turns off          |   Technical |

## Low level requirements

| Sl.No |       Low level requirements	|	Description		|  Category   |
|:-----:|		   :---------:		|	:---------:		| :-------: |
|   1   |			LLR1			|	RED Led turns on when switch is flicked once			                                      |   Technical	|
|   2   |			LLR2			|	BLUE ORANGE GREEN Led turns on alternatively with 1Hz when switch is flicked twice			|   Technical	|
|   3   |			LLR3			|	BLUE ORANGE GREEN Led turns on alternatively with 4Hz when switch is flicked thrice			|   Technical	|
|   4   |     LLR4      | BLUE ORANGE GREEN Led turns on alternatively with 8Hz when switch is flicked 4 times    |   Technical |
|   5   |     LLR5      | BLUE ORANGE GREEN Led turns off when switch is flicked 5 times                          |   Technical |
|   6   |     LLR6      | RED Led turns off when switch is flicked 6 times                                        |   Technical |


# DESIGN
## Structural Diagram

![structural dia](https://user-images.githubusercontent.com/101051555/168416280-9b79da43-0bb0-4c5d-9c3b-c9b5a468240d.PNG)


## Behavioural Diagram


![behav dia](https://user-images.githubusercontent.com/101051555/168416643-d0f60cf2-f9f4-4634-8f83-f06e28444cf0.PNG)


