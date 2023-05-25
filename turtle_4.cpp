////////// DO NOT EDIT HEADER! //////////
#include <iostream>                    //
#include "CTurtle.hpp"                 //
#include "CImg.h"                      //
using namespace cturtle;               //
using namespace std;                   //
/////////////////////////////////////////

int main(int argc, char** argv) {
  
TurtleScreen screen(900, 800); //You may edit the dimensions to fit your window
Turtle tina(screen);
  
  //add code below this line
int i = 0;
tina.pencolor({"red"});
tina.width(3);
tina.speed(TS_NORMAL);
while(i < 4){
  tina.forward(200);
  tina.right(90);
  tina.forward(50);
  tina.right(90);
  tina.forward(50);
  tina.right(90);
  i++;
}

// tina.shape("triangle");



  //add code above this line
  
screen.exitonclick();
return 0;
  
}
