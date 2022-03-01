void routeOne(){
  int door;
  int choice1;
  int choice2;

  std::cout << "~~~~~~~~~~The Second Floor~~~~~~~~~~\n";
  std::cout << "You decide to climb the old stairway to the upstairs. The boards underneath your feet creak with every step giving you pause every now and then. Somehow you manage to make it up the stairs without falling through them. The upstairs seems to consist of only two bedrooms and a large window overlooking the backyard. One door appears to have been painted a dark green at one point, the paint now peeling from the wood. The other seems to have shed its paint entirely as the old wood is exposed.\n";
  std::cout << "  What will you do?\n";
  std::cout << "    1. Go to the green door.\n";
  std::cout << "    2. Go to the old wood door.\n";
  std::cin >> door;
  std::cout << "\n";

  if(door == 1){
    std::cout << "Reaching the green door, you notice the hints of what must have been painted flowers decorating the edges of it. The door creaks as you open it, and what is revealed is enough to make anyone stop. Dolls. Every inch of the room is covered in porcelain dolls. Not even the bed, chair, or desk in the room is free from having a doll on it.\n";
    std::cout << "  What will you do?\n";
    std::cout << "    1. Close the door.\n";
    std::cout << "    2. Check out the room.\n";
    std::cin >> choice1;
    std::cout << "\n";
    if(choice1 == 1){
      std::cout << "You've seen too many scary movies to ever go into a room full of creepy old dolls! As you close the door, you can feel the floor underneath you give a tiny bit under your weight. You can't help but freeze in place. This is a decrepit house after all, maybe its just a creaky floor board. Relaxing, you take a step back only for the floor to crack beneath you. Next thing you know, you've crashed into the kitchen, head hitting one of the counters, and everything going black. When you come to, you're looking down at your own body laying on the floor with glazed over eyes. Guess you're the ghost now.\n";
      std::cout << "~~~~~~~~~~END: Boo Haunted House~~~~~~~~~~\n";
      std::cout << "\n";
    }
    else{
      std::cout <<"What's a few dolls gonna do anyway? You enter the room and look around at the collection that's made their home in this room. Surprisingly, they all seem to be in rather good shape despite the condition of the house around them. You pick up one of the dolls, marveling that moths haven't eaten the silk dress its wearing. As you go to put the doll back, you notice something underneath the pile you grabbed it from. Shoving the dolls away, you find some kind of incomplete doll underneath. It's DEFINITLY not made of porcelain. As you stare at the leather doll, you catch movement out of the corner of your eye and a sharp pain as something bites your ankle. Falling back, you can see the whole room moving, no the dolls moving. It doesn't take long for you to be swarmed by the dolls. Your screams echoing through the house until they stop.\n";
      std::cout << "~~~~~~~~~~END: Why Did It Have To Be Dolls~~~~~~~~~~\n";
      std::cout << "\n";
    }
  }
  else{
    std::cout << "You reach the old wooden door, and the paint has definitely peeled off of it. There's still flecks of blue paint hanging on despite their inevitable fate. The door almost comes off its hinges as you open it, but somehow you manage not to get squished by a door. The room appears to be an old sewing room with the only notable contents being a mannequin with an unfinished dress rotting off it and a large armoir.\n";
    std::cout << "  What will you do?\n";
    std::cout << "    1. Check out the Mannequin.\n";
    std::cout << "    2. Check out the armoir.\n";
    std::cin >> choice2;
    std::cout << "\n";

    if(choice2 == 1){
      std::cout << "You decide to go look at the mannequin and the pitiful dress its wearing. The fringed yellow fabric feels wet in your hands as you touch the remains of the fluffy skirt. As your hand goes to inspect the top of the dress, a white hand quickly grabs you by the wrist. No matter how hard you tug, you can't escape from the mannequin's grasp. Even struggling is starting to get harder as you watch in horror at the changes happening to you. Warm flesh begins to turn into cold plastic as your body stiffens. Soon there are two mannequins.\n";
      std::cout << "~~~~~~~~~~END: Life in Plastic~~~~~~~~~~\n";
      std::cout << "\n";
    }
    else{
      std::cout << "Walking over to the old armoir, you can tell the quality of this piece just by looking at it! Is that oak? Mahogany? Cherry wood? Maybe you can get this out of this place and into yours. It'd be a nice place to store some junk you have laying around. Hopefully, the inside is just as beautiful as the outside is. As you slowly open the doors to the armoir, it lets out a creak and the whole thing shudders like you've woken it up. It doesn't take long to see a large black mass attached to the back of the piece of furniture. It turns to look at you, its two large red eyes glowing as its mandibles move. In just a moment, it jumps upon you with its large wings spread. You've always wondered how moths eat, but why did you have to find out this way?\n";
      std::cout << "~~~~~~~~~~END: I Thought Mothman Lived In West Virginia~~~~~~~~~~\n";
      std::cout << "\n";
    }
  }
}