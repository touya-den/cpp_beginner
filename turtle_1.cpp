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
for(int i = 0; i <= 3; i++){
  tina.forward(200);
  tina.right(90);
  tina.forward(50);
  tina.right(90);
  tina.forward(50);
  tina.right(90);
}
tina.pencolor({"blue"});
tina.width(15);
// tina.shape("triangle");
tina.speed(TS_SLOWEST);


  //add code above this line
  
screen.exitonclick();
return 0;
  
}
