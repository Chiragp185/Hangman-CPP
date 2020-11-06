# Hangman-CPP
Hangman using C++
  
This is the code for the Hangman game created by me using C++. It was created for a project when I was in school. I used to play this game from my childhood and loved it. So when I got an opportunity to recreate a beautiful game like this by myself, I couldn't hold back. Hangman is one of my first projects which is close to my heart.

The HANGMANv7.cpp file is the one with the final code with which you can play/experiment.

There are multiple files .cpp showing different versions and how I improved the game, step by step. You can find these older versions in the folder named “OlderVersions”. A description of each of these versions can be found below if you want to read.

If you haven’t played HANGMAN before and if you want to understand the game better, I suggest you watch this video: https://www.youtube.com/watch?v=cGOeiQfjYPk

For running the code, you can use a free and open source software like Turbo C7 by Akki. My code has been written using this compiler and I assure you that it runs perfectly in this.

## HANGAMAN v7: -
Final code of the game. Works beautifully. Simple and plain graphics. Just compile, run and enjoy :)

# For older versions: -

## HANGMAN v1: - 
One of the first programs I created, very basic. This just takes a character from the player and checks if it is present in the word(the word is a string which is to be guessed). If it is present, then it converts that particular letter in the word to uppercase. If it is not present, it shows a TRY AGAIN error. A wrong guess is allowed for six or seven times, as is the case in HANGMAN.

While printing it prints only uppercase letters and prints a ‘_’ when it encounters a lowercase letter. 

*A small example: - *

*Assume the word “shiva” is stored in the array.*

*If the user enters ‘i’, then the word gets converted to “shIva”.*

*As mentioned above, while printing, it checks and prints only uppercase characters and ‘_’ in case of lowercase characters.*

*So, while printing, it gives the output: - _ _ I _ _*

*A wrong guess of an alphabet will increment a variable and the program will stop when it reaches six or seven.*

## HANGMAN v3: -
A huge leap from the first version. Basic graphics have been added which change the colour of the text every new screen. A menu was also added – start, how to play, settings , exit. A new category feature which allows user to select the category from where the word is – sportspersons/animals. User can also see the final score. Fixed some minor glitches too.

The start will take you directly to the game. It will then ask you to choose your category and you will get your word depending on the category you chose. After selecting the category, the game starts, logic of the game is same as version 1. But a new change in interface. Instead of only lines aligned to the left, I aligned the whole thing to the center of the screen and the whole part( Guessed and unguessed letters) is visible at the center every time the user wants to enter a character.

A major  change in code is that I have divided the whole game into different functions and main() contains only the calls to the functions necessary to start the game. All information about the functions is available in the documentation.

## HANGMAN v5:-
Added a new category- TV Series. More number of words in each category.

A big change in interface- the player can now see the whole unguessed word before entering the first character, which was not present in the previous versions. Also shows the number of chances remaining i.e the number of wrong guesses allowed which reduces as the player guesses wrong.

If the player guesses the word correctly, then there is the option of playing the game again. But if it is wrong, then game over and the final scores are displayed.
This version also shows the word finally, during scores, if the player couldn’t guess the word. 

Fun elements added in the settings and how to play part of the menu.

Removed feature- The player can no more see the letters he entered previously(correct or wrong). It has been removed due to major problems occuring in interface because of it and also it adds a bit of spice to the game :)

This version is as close as it comes to to the final game. Only minor bugs have been rectified or some changes have been made to the code.
