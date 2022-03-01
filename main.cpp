/* A simple nested if-else horror game similar to
* a choose your own adventure book
*/
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
// Functions to hold if-else choice loops
// to keep the main function from being too cluttered
#include "Route1.h"
#include "Route2.h"
#include "Route3.h"
// Function to pause instruction screen
void Continue(){
  int c;
  std::cout <<"Now let's begin! Press any key to continue.\n";
  fflush(stdout);
  do c = getchar();
    while ((c!='\n')&&(c!=EOF));
}

int main() {
// Variables to help the game loop if they player
// wants to try a different route
  int yn;
  bool restart = true;
// While loop only activates if player wants to try again
  while(restart){
  std::cout << "Hello and welcome to the Haunted House!\n";
  std::cout << "This is simple horror text adventure in the style\nof a Choose Your Own Adventure book.\n";
  std::cout << "\n";
  std::cout << "Options will be presented as:\n";
  std::cout << "  1. Choose to go through the Yellow Door.\n";
  std::cout << "Just enter the number of your choosing and see what happens!\n";
  std::cout << "\n";
  Continue();
  
  std::cout << "~~~~~~~~~~Entering the House~~~~~~~~~~\n";
  int routeChoice;
  std::cout << "There's a chill in the air as you walk along the sidewalk towards the old house at the end of the street. You start to wonder why you're doing this again; what do you have to gain from this?\nAs you reach the rust covered gate, it slowly creaks open from a gust of wind that causes the house to shudder. Taking a deep breath, you decide to enter the house...\n";
  std::cout << "Standing in the doorway you can see, a stairway to upstairs, a hall leading into the kitchen, and the entryway to the living room.\n";
  std::cout << "  Where will you go?\n";
  std::cout << "    1. Go Upstairs.\n";
  std::cout << "    2. Go to the kitchen.\n";
  std::cout << "    3. Go to the living room.\n";
  std::cout << "    4. On second thought, I'm leaving!\n";
  std::cin >> routeChoice;
  std::cout << "\n";
// Choices 1,2,and 3 lead to a Route function
  if(routeChoice==1){
    routeOne();
  }
  else if(routeChoice==2){
    routeTwo();
  }
  else if(routeChoice==3){
    routeThree();
  }
  else{
    std::cout << "You decide this was dumb to begin with and immediately leave. It was a nice walk, but you decide exploring a potential architectural disaster isnt worth it. Who needs broken bones, right? You manage to make it home, but you can't seem to shake that chill from outside. Grabbing what blanket you can, you settle down with a warm cup of cocoa after an uneventful day.\n";
  std::cout << "   That's when you see it.\n";
  std::cout << "A tall inky figure is being reflected in the mirror above your fireplace. Its long fingers trace against your skin before it begins to play with your hair. You're definetly calling a preist or whatever in the morning.\n";
  std::cout << "~~~~~~~~~~END: Hitch-hicking Ghost~~~~~~~~~~\n";
    std::cout << "\n";
  }
    
  std::cout << "Would you like to play again? Enter 1 for Yes or 2 for No.\n";
  std::cin >> yn;
  std::cout << "\n";
// While loop will stop if restart is changed to false
    if (yn==2){
      std::cout << "Thanks for playing!\n";
      restart = false;
    }
  }
  
  return 0; 
}
