#include "graphics.h"
#include <math.h>
//this is 500x300
int main(void)
{
 drawLine(0, 149, 499, 149);
 drawLine(249, 0, 249, 299);
 int idx = 0;
 double x = idx - 250;
 double y = 50 * sin(x);
 fillRect(250 - x, 149+y, 1, 1);
 double xold = 0.0;
 double yold = 0.0;
 setColour(red);
 while (idx < 500) {
    idx++; idx++; idx++; idx++;
    xold = x;
    yold = y;
    x = idx - 250;
    y = 50 * sin(x);
    fillRect(250 - x, 149+y, 1, 1);
    drawLine(250-xold, 149+yold, 250-x, 149+y);
 }
}
//compile using  ./house | java -jar drawapp-5.0.jar
