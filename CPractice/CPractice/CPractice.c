
#include <stdio.h>

void main()

{

	int cnt = 0, x = 0, y = 0, n = 1, s = 1;



	while (1)

	{

		n % 2 ? y++ : x++;



		if (n >= 10) break;



		for (int i = 0; i < n; i++)

		{

			x += s;

			y -= s;

		}

		s = -s;

		n++;

	}

	printf("%d, %d, %d, %d \n", x, y, s, n);

}﻿



