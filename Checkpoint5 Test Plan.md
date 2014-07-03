2048 Test Plan
==============

Introduction
------------
Given the scale (small) and scope (limited) of the 2048 program, a simple testing paradigm was chosen. The key testing types which are used in the test plan:
-unit testing
-whitebox testing
-integration testing

For the checkpoints, the first 2 were completed. The full steps, if the game was to be produced in full, are described in the following sections.


Unit Testing
------------
A bottom up approach is recomended- starting with individual lines before going on to a whole board.
The start of this is writing test cases, in a blackbox testing environment (the unit tests). This allows us to write the tests before the code and thus test our code as it goes. As we progress we can then test tilting a whole board left and right, rotating clockwise and counter clockwise, before finally testing (and then writing) the up and down tilting functions for the board. This approach means that any challenges encountered can be worked around without needing to change other functions that depend on the bottom level. This way, if it was discovered that the initial method of rotating the board was going to be impractical and that a different function return would be given instead, the rest of the program could be written to the new, not the old, specefication. 


Whitebox Testing
----------------
This tests in that as much of the code as we can actually works. These tests can only be written once the functions themselves are written. This way every if statement can be given parameters that execute both a positive and negative branches. For example, a board size of 0 could be submitted and a board size of 1 to test to see if the initial if statement in the line tilt functions was working.


Integration Testing
--------------------
Were the game to be fully completed, tests would have to be written to ensure the different functions worked together. While the earlier testing phases tested each function indipendantly, this section focuses on ensuring that in the final product all of the functions can be used together. This staage involves testing simulated user input to ensure that the functions work with the tile spawning and that invalid input is correctly handled (input that does not corrospond with a command to any existing function). 


Not Being Tested
----------------
User interaction
Any form of ingame help
Multiple platforms


Dependencies
-------------
C standard libraries
Testing Environment
Occasional internet connection- for interaction with github (pushing commits and pulling changes)


Risks
-----
Unclear game instructions
Undiscovered bugs
Missed functionality tests


Conclusion
----------
The above tests should produce a functioning 2048 game. For the purpose of this semester, whitebox testing will be the last completed phase. This means that all of the basic functions will be tested (and functional) but will not neccesarily exist in a final game. However, were a basic game function to be written, they should operate fully. 










