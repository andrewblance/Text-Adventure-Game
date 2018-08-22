# Text Adventure Game

## Introduction
This repository contains code for a simple text adventure game. The game will output a scenario, give the player a selection of options to choose from, and then send the player to the next level. It's a simple program but can be a lot of fun. 

## To Begin
To clone this repository:
```
git clone https://github.com/andrewblance/Text-Adventure-Game
```

The program is made from a few seperate files. Firstly, ```main.cpp``` includes the introductory text of the game, the ability to choose your characters name, and the mechanism for selecting and moving onto the next level. ```plot.cpp``` is where where all the levels will be stored. Finally, '''replace.cpp''' will replace instances of the phrase 'YourName' in ```plot.cpp``` with the characters actual name. Also, included is a makefile and header.

Now, there is also a Intro file which will deal with a splash screen and instructions. Also, there are 3 files that are early work on allowing to to pick up and carry objects. You can now add objects to pick up in  ```plot.cpp``` but they will not currently effect gameplay.

## Preparing and Running Files
The command ```make``` should compile the files and allow the game to be run. However, if you want to customise the game for yourself text will need to be edited in a few files:
1. The name of the game can be chosen in ```makefile```
2. In ```Intro.cpp``` the openning text of the game is set. Here is also where you have to ask the character or their name.
3. The file ```plot.cpp``` contains the bulk of the game itself. Each level is a 'block' which needs four things to be set. First, the name of the level and then the text that will describe that level. Here, if you want the players chosen name to be outputted use the string YourName. Next, what will happen if the user types something that is not an option needs to be chosen. Finally, the options and the level this will send you needs to be set - the number of options is entirely up to you.

Then, all that should be left to do is run the ```make``` command and you should have a game!

## Other Notes
The file ```replace.cpp``` needs to be included otherwise instances of YourName in ```plot.cpp``` will not actually change to the players name. The code searches ```plot.cpp``` for YourName and replaces it. However, this is not the case for if you type YourName in ```Intro.cpp``` - here the change happens automatically. It is realised that this is not the most elegant solution and we are currently working to find a better way to do it.

You can now pick up items and this will influence what choices you can make in the game. However, this meant using a goto function, maybe theres a more elegant way to do this? Also, it is a goal to add a system where the choices you make have an associated morality. So, making lots of ''evil'' choices will result in your character only being able to do the ''evil'' levels. I also want to add a feature where you can restart the game (this is harder than it looks!).

Finally, this is just a skeleton for the game, if anyones interested to see it I have a version with a "story". 
