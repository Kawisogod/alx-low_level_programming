#include "main.h"

/**
 * swap_int - takes two integer variable and swap them
 * @var1: first variable
 * @var2: second variable
 *
 * Created by: kawiso-godfrey
 * cc: 13th july, 2022
 */

void swap_int(*var1, int *var2)
{
	int tmp = *var1;
	*var1 = *var2;
	*var2 = tmp;
}
