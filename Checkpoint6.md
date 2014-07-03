Test Plan for a VOLVO self Driving Car
======================================

Introduction
------------
The inspiration for this test plan was a 'TWiT: This week in Law' commentry on the advancement in legal agreements for self driving cars in Europe that are happening. An example of a near future project that outlines this is:
http://www.techhive.com/article/2068180/selfdriving-cars-to-hit-swedish-public-roads.html

The first step of thsi test plan was identifying system components and ranking them in order of importance. The order below is most important :
-Breaking System
-Kill switch (required by common sense and European Law)
-Hazard Detection System (LIDAR)
-Navigation System (including GPS integration)
-'Driver' controls
-Vehicle Control System (Integrating the breaking System)


Justification for Risk and Testing Order
----------------------------------------
Before anything else is done, it is important that the car can be stopped properly. This is why both of the first two points are to do with arresting the movement of the vehicle. Of special note is breaking under different conditions, such as wet, snowy or icey roads (especially for Europe). 

Next it is important that the car is capable of detecting hazards in its environment before it starts driving. This keeps in with the theme of avoiding damage and danger before getting the car moving. Further, the navigation system is almost as high as the hazard detection, because it is important the car not only know where it is (the GPS) but also how to get between points A and B as well as how to deal with changing road conditions (road closures) or underground carparks (where GPS often stops working). 

Next the 'driver' controls are developed and tested. These should not be developed until the navigation system and kill switch components are well underway, as it will need to interact with the two and thus should use the formats for input and output that those systems are capable of interpretting as well as know the limites of those components. This was placed above the vehicle control system because it was determined that being able to instruct the vehicle of what the driver wishes to do was a higher risk, and more important operation than the autonomy of the car. As laws are very strict as to the minimal level of control allowed over a vehicle, it is important that this step.

Finally, now that the devlopment team has a car that is very good at stopping, navigating and can accept user control the autonomous side of the vehicle can be added. This may seem the reverse of the concept of a self driving car, however I believe that it is more important to make sure the car is safe, and capable of minimising damage to itself and its environment before it is capable of moving itself to both encourage investmenet in the vehicle, to highlight to the market that the company is taking safety first (as a large portion of society will be incredibly warey of the vehicle when they are released) and to avoid any nasty legal and/or financial repercusions of any incident that may occur. Further, this is consistant with a bottom up approach, as this component will need to make use of all of the other systems. If, during development, they are changed in terms of how they behave/ function and interact with other systems then it is easier, and cheaper, to adapt the control system before it is built than after. 


Testing Stages
---------------
As a result, the first stage is unit testing. This will involved ensuring that the individual components all exhibit the desired, and expected, behavior before implementation. Noting that the earlier bugs are found the cheaper they are to fix, it is important that this stage involve intensive testing of components. 

Next, integration. Using the outline in the previous section, as systems are completed they can be tested in an isolated environment with other systems that they interact with, before all of the systems are complete. This includes the control system, which should be built last but, if this is not done, can still be tested with each system in turn before being tested with them all as a whole. This leads to the next stage.

Finally, a prototype would be developed so that a full system integration test could be run. By this stage, most major bugs should definitely have been found and fixed. Instead, the prototypes can be used to work with policy makers and city planners. as is being done in Sweden, to make the roads as friendly as possible for self driving cars. 


Not Mentioned
--------------
Compatability Testing: simply put, the software is being designed to interact directly with the hardware, and while much of it may be reused on other vehicles that is outside of the desired scope for what is already an ambitious project.


