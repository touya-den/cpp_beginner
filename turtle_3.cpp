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
int a = 10;  
  //add code below this line
tina.width(5);
tina.shape("triangle");
tina.pencolor({"green"});
tina.speed(TS_FAST);
for(int i = 0; i <= 50; i++){
  tina.forward(a);
  tina.right(90);
  a = a + 5;
}

  //add code above this line
  
screen.exitonclick();
return 0;
  
}
