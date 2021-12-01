#include <avr/io.h>
#include"Heat1.h"
#include"Heat2.h"
#include"Heat3.h"
#include<util/delay.h>
int main(void)
{
    LCD_INITIALIZATION();
    while(1)
    {
        Heat1(); //Activity 1
        Heat2(); //Activity 2
        Heat3(); //Activity 3
    }
  return 0;
}
