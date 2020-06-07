/* Noel S Cruz  June 7, 2020
   ex_pointer_addresses.c  Illustrates the concept of:
   ptr++ is equivalent to ptr + (sizeof(pointer_data_type)). */

#include<stdio.h>

int main(){
	int int_var = 10, *int_ptr;			// create integer pointer int_ptr
	char char_var = 'A', *char_ptr;		// two other pointers using the
	float float_var = 4.65, *float_ptr; 	// '*' operator

	/* Initialize pointers */
	int_ptr = &int_var;					// point the pointers to datatype
	char_ptr = &char_var;					// addresses using '&' reference
	float_ptr = &float_var;				// operator. '*' is dereference

	printf("Address of int_var = %u\n", int_ptr);
	printf("Address of char_var = %u\n", char_ptr);
	printf("Address of float_var = %u\n\n", float_ptr);

	/* Incrementing pointers */
	int_ptr++;
	char_ptr++;
	float_ptr++;

	printf("After increment address in int_ptr = %u\n", int_ptr);
	printf("After increment address in char_ptr = %u\n", char_ptr);
	printf("After increment address in float_ptr = %u\n\n", float_ptr);

	/* Adding 2 to pointers */
	int_ptr = int_ptr + 2;
	char_ptr = char_ptr + 2;
	float_ptr = float_ptr + 2;

	printf("After addition address in int_ptr = %u\n", int_ptr);
	printf("After addition address in char_ptr = %u\n", char_ptr);
	printf("After addition address in float_ptr = %u\n\n", float_ptr);

	return 0;
}