void routeThree(){
   int choice5;
  
  std::cout << "~~~~~~~~~~The Living Room~~~~~~~~~~\n";
  std::cout << "With it being the closest, you decide to check out the living room first. Walking through the entry, the only thing taking residence in the room is an old couch, coffee table, and old television set. It's rather normal to be honest. Even the cheesy wallpaper adds to the mundane look of the room. A bit dusty, well, pretty dusty. You can practically see it flying around thanks to the moonlight filtering in an old window. \n";
  std::cout << "  What will you do?\n";
  std::cout << "    1. Check out the room.\n";
  std::cout << "    2. Go to the window.\n";
  std::cin >> choice5;
  std::cout << "\n";

  if(choice5 == 1){
    std::cout << "It's the reason you came here, might as well look around the room. The old coffee table is caked in dust and you assume at one point it had been a light blue color. No way you're touching to find out. The couch is a totally retro kind of paisely pattern. It's even covered in plastic. Not that it worked on keeping it from the effects of time. Lastly, you turn and look to the television. A lot bigger than what's around today, and would probably make a good blunt force weapon. As you go to look around more, the television flickers to life. Turning towards the soft glow of static, you can hear whispering all around you. It's hypnotising. You inch closer to the screen. Static hands reach out from the screen, grabbing your head and neck. Your kicking legs are the last thing seen as you're engulfed and the television flickers off.\n";
    std::cout << "~~~~~~~~~~END: I've Seen This Movie Before~~~~~~~~~~\n";
      std::cout << "\n";
  }
  else{
    std::cout << "You approach the old window. Might as well see what the side of the yard looks like, right? The curtains are in tatters as you move them out of the way, the light of the full moon shining through the cracked and shattered glass. There's really not much out there aside from a old heating unit and some weeds, but you can't seem to move away from the window. Your whole body is tingling as you stand in moonlight, and your body reacts. The sound of grunts and ripping cloth echoes through the empty house as your body changes. With a howl, a large wolf creature stands where you once stood. With a leap, you bust through the window and begin the hunt.\n";
    std::cout << "~~~~~~~~~~END: Bark At The Moon~~~~~~~~~~\n";
      std::cout << "\n";
  }
}