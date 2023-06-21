#include "draw.h"		/* for font */
#include "stdio.h"		/* for putchar */

void print_char_11x16(char c)
{
  c -= 0x20;
  for (char row = 0; row < 11; row++) {
    unsigned short rowBits = font_11x16[c][row];
    for (char col = 0; col < 16; col++) {
      unsigned short colMask = 1 << (15-col); /* mask to select bit associated with bit */
      putchar( (rowBits & colMask) ? '*' : ' ');
    }
    putchar('\n');
  }
}

void print_char_5x7(char c)
{
 // c-= 0x20; //this is to skip the first 20 characters in ascii which don't actually display a character. since it doesn't show an offset in the 5x7 font i took this part out
  for (char row=0;row<5;row++){ //The number five indicates the amount of data that makes up a single character in the 5x7 font
    unsigned short rowBits= font_5x7[c][row]; //this is to help print out every row of bits from the font
    for (char col=0;col<7;col++){
      unsigned short colMask= 1<<(6-col);
      putchar((rowBits&colMask)? '*':' ');
    }
    putchar('\n');
  }
}
