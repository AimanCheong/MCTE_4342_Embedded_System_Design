## ASSIGNMENT 1 

Question: Based on Arduino Name NIM (links: https://www.instructables.com/Arduino-Game-NIM/), draw the programming flowchart of the system.

Answer:

![Assignment 1 Answer](https://github.com/AimanCheong/MCTE_4342_Embedded_System_Design/blob/main/Assignments/Assignment%201/Assignment%201.png)

Explanation: 

The process starts with initilization of variables and parameters in programming code and also defining pin assessment for the buttons, servo, LEDs (indicator). 

Next, in void Setup(), each pin is assign to be INPUT or OUTPUT mode. Buttons as inputs, Servo and LEDs and output, etc.

In void loop (), first the system will read input from PVP button, play1 button, next1 button, play2 button, next2 button.

If gamestart is LOW, it will show indication of rebooting up sequence with blinking of indicators and set the gamestart to HIGH.

Once gamestart is HIGH, it will start up the starting sequence, and next depends on the PVP button, it will go to two modes:

        1. Player vs Player 
        1. Player vs Computer 
        
If PVP is LOW, then Player vs Player mode, whereby the system will read the play1 and next1 inputs (for Player 1). 

When play1 is HIGH, servo will move the marbles and reduce counter by 1. When Next1 is HIGH and the indicator is more than 1, then it will proceed to player 2; else it will wait for input of play1.

When its player 2 turn, the sequence remains the same as player 1.

If the counter is not equal to 0, then the process will loop back to player 1 until all 12 marbles is taken. 

If counter equal to 0, it will light indicator which player take the last piece and 1.

In PVP is HIGH, then Player vs Computer mode whereby the each will take only player 1 reading.

Based on remaining number of marbles, the computer will decide the best possible way of grabing the last marble.

In all scenario, the computer will win no matter the sequence on how the player 1 plays.

In both mode, if RESET button is HIGH (Pressed), the game will loop back to first line of void loop()



