#include "stdbool.h"

/**this function takes an array of uint8_t data and then transposes bits of the rows with columns.
 * INPUT: In this case the column bits are 8bits in total. The rows are the number of uint8_t data in the array.
 * OUTPUT: Rows are 8 in number, Column is variable)
 */
bool transpose(unsigned char * input, int rows,unsigned char * output)
{
	bool ret = true;
	if ((input != NULL) || (output != NULL))
	{
		int i, j, k;
		i = 7;
		//this loops through the 8bits
		for(j = 0; j < 8 ; j++)
		{	
			//starts at the very last row
			for (k = rows-1; k >= 0; k--)
			{
				output[j] = output[j] << 1 ;
				output[j] |= (input[k] >> i) & 0b01;
			}
			i-- ;
		}
	}
	else
	{
		ret = false;
	}
	return ret;
}


void main(void)
{
    //use any character as an example. This below array shows the letter "A"
    unsigned char A_letter [] = {
			0b00010000,
			0b00101000,
			0b01000100,
			0b11111100,
			0b10000100,
			0b10000100
	};
    unsigned char transposed_letter[8] = {0};
    transpose (A_letter, 8, transposed_letter);
}

bool transpose(unsigned char * input, int rows,unsigned char * output);