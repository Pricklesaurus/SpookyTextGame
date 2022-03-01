void routeTwo(){
   int door2;
  int choice3;
  int choice4;

  std::cout << "~~~~~~~~~~The Kitchen~~~~~~~~~~\n";
  std::cout << "You decide to walk down the little hallway leading to the kitchen. Each of the floorboards creak under your weight as you enter the small kitchen. There's not much to say about the room other than you image this is what your grandparents kitchen would look like if they decided to never clean it. The kitchen would probably be a bit roomier if there wasn't an island in the middle of it. You can also see a door leading to the backyard.\n";
  std::cout << "  What will you do?\n";
  std::cout << "    1. Check out the kitchen.\n";
  std::cout << "    2. Go out to the backyard.\n";
  std::cin >> door2;
  std::cout << "\n";

  if(door2 == 1){
    std::cout << "Well, you did come to check out the kitchen after all. No point in heading outside just yet. As you look around, you can tell whoever owned this place previously really enjoyed the whole 70's kitchen asthetic. Then again maybe that was just a normal kitchen back then. A few of the cupboards are hanging off their hinges and the island in the center has a few old cookbooks scattered on it. \n";
    std::cout << "  What will you do?\n";
    std::cout << "    1. Cupboard snooping time.\n";
    std::cout << "    2. Check out the old cookbooks.\n";
    std::cin >> choice3;
    std::cout << "\n";
    if(choice3 == 1){
      std::cout << "Time to go looking around the old cupboards. Who knows? Maybe there's some vintage food still in there? Most likely it'll be bugs or rats, but you're the adventurous sort! Opening the first and...!\n";
      std::cout << "There's nothing in there. Not even a rat.\n";
      std::cout << "You can't help but sighing as you look down at the old knife block on the counter, something catching your eye on one of the half-pulled out knives. Turning around quickly, you see a hooded masked figure brandishing a knife and easily jumping over the island to get to you. The cramped space causes you to falter, giving the figure enough time to make quick work you with its knife.\n";
      std::cout << "~~~~~~~~~~END: Guess This Place Wasn't Haunted~~~~~~~~~~\n";
      std::cout << "\n";
    }
    else{
      std::cout <<"Time to look at some old vintage cookbooks. Who knows what you might find. A jello monstrosity? Something that should never have been creamed? You start to flip through a book with the title 'Tuna, More Flexible Than You Think', but quickly grow bored of when you find a second recipe for jello tuna in its pages. Reaching for another, you notice its thick binding and cover. Your hand moves over the bumpy cover as you crack it open hesitantly. You can't really read any of it aside from some notes the previous owner must have written in it. Mumbling some of the writings to yourself, the whole house stills. You can hear something crashing through the house as the kitchen door bursts open and you're thrown backwards. Everything is going dark, but you can hear a voice in the back of your mind chanting join us\n";
      std::cout << "~~~~~~~~~~END: Klaatu Barada Nikto~~~~~~~~~~\n";
      std::cout << "\n";
    }
  }
  else{
    std::cout << "This kitchen is underwhelming to say the least. Might as well explore something a little less mundane or dangerous. At least you can get to the back door without falling through the floor. You don't know what you were expecting as you crack open the door and stare out over the overgrown lawn. There's an old willow tree towards the corner of the yard and a square area that's weedless for some reason.\n";
    std::cout << "  What will you do?\n";
    std::cout << "    1. Check out the willow tree\n";
    std::cout << "    2. What's up with that square?\n";
    std::cin >> choice4;
    std::cout << "\n";

    if(choice4 == 1){
      std::cout << "The huge willow tree seems pretty amazing. Shouldn't it be dead with all these weeds around it? Then again, who knows how trees work. Walking through the overgrown yard, you get to the tree and marvel at its size. It seems yo engulf this whole corner of the yard. You reach out and touch the bark, looking up as you marvel at the sight of the branches swaying above you. Being distracted, you don't notice the tendril slithering along the ground towards you. In a flash the tendril stabs into your leg, knocking you over as more of them slither up to you. All you can do is scream as you're pulled underground.\n";
      std::cout << "~~~~~~~~~~END: Discovring Your Roots~~~~~~~~~~\n";
      std::cout << "\n";
    }
    else{
      std::cout << "Square. It has to be sandbox or something, right? Trudging through the weeds and picking a few seed pods off of your clothes, you do make it to what was once a old sandbox. There are a few weeds in it, but somehow the sand has kept them at bay. Walking over to stand on the contents of the sandbox, you look around the yard and at the back of the house. Slowly, the sand beneath you rumbles and shifts. Once it gets to be too much you hope off, narrowly missing the open mouth of what looks like a large worm. You fumble and gape as it turns its attention to you, its teeth snapping wildly. It burrows again. Not waiting to find out where its going to resurface next, you put all the strength in your legs as you run towards the fence. Hopping over it in the nick of time, you hear a thud behind you as you continue to run all the way home.\n";
      std::cout << "~~~~~~~~~~END: Sandworms...I Hate Em Myself~~~~~~~~~~\n";
      std::cout << "\n";
    }
  }
}