Assignment name  : reverse_bits
Expected files   : reverse_bits.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function that takes a byte, reverses it, bit by bit (like the
example) and returns the result.

Your function must be declared as follows:

unsigned char	reverse_bits(unsigned char octet);

Example:

  1 byte
_____________
 0100  0001
     ||
     \/
 1000  0010




unsigned char	reverse_bits(unsigned char octet)
{
	octet = ((octet & 0xF0) >> 4 | (octet & 0x0F) << 4);
	octet = ((octet & 0xCC) >> 2 | (octet & 0x33) << 2);
	octet = ((octet & 0xAA) >> 1 | (octet & 0x55) << 1);
	return (octet);
}
