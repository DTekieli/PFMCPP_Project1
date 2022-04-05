#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1 #done

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates camelCase


//  1)
//  Noun:        cloud
//  action 1:    drops water
cloud.dropWater();
//  action 2:    disappears
cloud.disappear();
//  action 3:    turns violet
cloud.turnViolet();
//  2)
//  Noun:        water
//  action 1:    freezes
water.freeze();
//  action 2:    evaporates
water.evaporate();
//  action 3:    boils
water.boil();
//  3)            
//  Noun:        car
//  action 1:    is standing still
car.stand();
//  action 2:    is driving
car.drive();
//  action 3:    turns left
car.turnLeft():
//  4)
//  Noun:        Compressor
//  action 1:    squishes audio
compressor.squish();
//  action 2:    does not squish audio
compressor.noSquish();
//  action 3:    shows overload
compressor.overload();
//  5)
//  Noun:        lightbulb
//  action 1:    illuminates red
lightbulb.red();
//  action 2:    illuminates green
lightbulb.green();
//  action 3:    illuminates blue
lightbulb.blue();
//  6)            
//  Noun:        TV
//  action 1:    shows news
tv.news();
//  action 2:    shows snow
tv.snow():
//  action 3:    is on standby
tv.stby();
//  7)
//  Noun:        flatmate
//  action 1:    is sleeping
flatmate.sleep();
//  action 2:    walks throuh the flat
flatmate.walk();
//  action 3:    refuses to tidy up
flatmate.refuse():
//  8)
//  Noun:        Monk
//  action 1:    meditates
monk.meditate();
//  action 2:    does yoga
monk.yoga();
//  action 3:    walks
monk.walks();
//  9)
//  Noun:        phone
//  action 1:    rings
phone.ring();
//  action 2:    vibrates
phone.vibrate();
//  action 3:    explodes
phone.explode();
//  10)
//  Noun:        fly
//  action 1:    flies
fly.fly();
//  action 2:    sits on screen
fly.sitOnScreen();
//  action 3:    moves on screen
fly.moveOnScreen();


#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
