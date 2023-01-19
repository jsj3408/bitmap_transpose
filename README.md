# bitmap_transpose
A C code that can transpose a uint8_t array
## AIM
AIM: The goal of this function is to be able to transpose an 8bit array of any number of elements. This means that the first bits of all the elements will actually be the contents of the output's first element, the second bits of all the input elements will be the contents of the output's second element, etc.

## VISUAL EXAMPLE:
Take an bitmap array of the letter "H"
```
	/* 'H'  */
	0b00000000, //
	0b10010000, // #  #
	0b10010000, // #  #
	0b11110000, // ####
	0b10010000, // #  #
	0b10010000, // #  #
	0b10010000, // #  #
	0b00000000, //
	0b00000000, //

```
When transposed, the elements of the output array would be:
```
	/* 'H'  */
    0b011111100 //  ######
    0b000100000 //    #
    0b000100000 //    #
    0b000100000 //    #
    0b011111100 //  ######
    0b000000000 //
    0b000000000 //
    0b000000000 //
```
You get the idea :) . The array is now shifted clockwise

Have fun!
PS: This is my first ever commit. I hope to update this function to make the input and output more flexible