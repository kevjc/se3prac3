Pair Programming
=================
Introduction
-------------
For this task I partnered with 2 of the American students who I had worked with in the morning lecture for story writing, giving us a total of 3 Americans in the group (including myself). This shortened the introduction phase, as we already knew names and respective degrees (one was a mechanical engineering student and the other electrical). 

Proceedure
-----------
First we agreed upon a programming language. The only language we had all used before was c++. None of us had used it recently, however we all thought that we remembered enough to be helpful to the group.

Secondly we agreed that I would be the first driver, setting up the project as I had the most programming experience of the 3 of us. During the initial program building, we discussed which dates to tackle first. It was decided that the d m y dates where the month was spelled out was probably the easiest to tackle. While driving, I put together a program to count the number of days since 1970 (including leap years) to a given date.

We then swapped around, and across the next two drivers we gradually put together methods for converting this to seconds, and then reading in basic input.

This took longer than expected, as we were all stumped on a particular bug, however eventually we got the program reading in the day part and, with hard coded dates, outputting the correct number of seconds (the key word being eventually). Next I created a method that read in the month and converted that to days in that year to the 1st of that month. The next driver then completed the years to days, making use of our earlier function. This way, all of the input was readable as days since (or until) the beginning of UTC. Again, it was then trivial to call our earlier function to put it into seconds.

This brought us to near the end of the 2 hours, and gave us one complete date successfully read in.

Advantages
-----------
In the past, for Computer Programming 2, I have done an assignment in a very similar (read- identical) method where me and my partner for that assignment met up on two separate days in the mid semester break and pair programmed without realising that there was a technical term for it. I will use both this practical, and the CP2 experiences for the reflection as they each highlighted different advantages and disadvantages of pair programming. 

The first advantage was typo spotting. Missing commas, semicolons and braces were all spotted much quicker. This may be because I find these particularly hard to identify, if the compiler doesn’t highlight the line the error is occurring in accurately, as my focus when typing is on getting the concepts from brain to terminal. When watching someone else type, or someone else watching me type, though, the goal is different. The goal is instead one of close review. Further, because reading is much quicker than typing it is much more difficult to fall into the trap of skim reading the code than when reviewing your own code after you have ‘completed’ it. 

The second advantage was in brainstorming the algorithm to solve the problem. By the power of pen and paper, both times I found that we would complement each other’s ideas. 

Disadvantages
--------------
However, this leads me to the disadvantages. By nutting through the ideas together, it was very easy to mislead each other when searching for bugs. For example, in the dates practical I was convinced that one of our bugs was in a the leap year counting function. I found a minor thing, that was wrong but not causing our overall problem. However, this convinced the other 2 to also look at this section with me. After 20 mins we then realised that we had forgot an include in the main function. 

Further, because I had more experience with programming (by virtue of degree), for the se3 task, I often found myself dictating code when not typing. This also meant that I started missing a lot of the smaller things that the navigator is generally more likely to pick up. It also meant that my word was probably taken too seriously- that is if we were all unsure of how proceed my random guess would be the direction we took which often resulted in an incorrect decision. 


The Verdict
-----------
Like any development method we have explored this semester, there are times when pair programming will work and times when it will not. Firstly, when the scope of the project is narrow and well defined (like in the practical) it is very achievable to use pair programming. This lends itself more to ad hoc development or plan-as-you go style sessions. This could also fit into a sprint within an agile environment. 

From my two experiences, I also believe that it works best when the two (or 3) programmers are all of similar levels of knowledge but different types of experience. In the practical, having the differing backgrounds helped us find strategies quickly however the significantly differing levels of experience hindered the overall development. 

In contrast, in CP2 the similar backgrounds meant that we often had the same mental roadblocks when developing strategy and almost hindered each other’s ability to find a solution. However, the similar levels of experience meant that we both programmed very equally and were able to complement the other’s work very naturally. I do also feel that the more times you worked with a given partner the better you would get at working together. Further, I feel that the temperament of the group will also help/ or hinder the process. In both experiences I was fortunate enough to be partnered with people that I got along with very well. 

Finally, like any skill, I feel that with practice it would get better and, depending on the situation, I would be willing to use pair programming in the future in situations where it fit the goals of the project. 

