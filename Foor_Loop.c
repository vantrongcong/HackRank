/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int
main ()
{
  unsigned int a, b;
  scanf ("%d\n %d", &a, &b);
  for (int n = 1; n <= b; n++)
    {
      if ((a <= n) && (n <= b))
	{
	  if (n == 1)
	    {
	      printf ("one\n");
	    }
	  if (n == 2)
	    {
	      printf ("two\n");
	    }
	  if (n == 3)
	    {
	      printf ("three\n");
	    }
	  if (n == 4)
	    {
	      printf ("four\n");
	    }
	  if (n == 5)
	    {
	      printf ("five\n");
	    }
	  if (n == 6)
	    {
	      printf ("six\n");
	    }
	  if (n == 7)
	    {
	      printf ("seven\n");
	    }
	  if (n == 8)
	    {
	      printf ("eight\n");
	    }
	  if (n == 9)
	    {
	      printf ("nine\n");
	    }
	}
      if (n > 9)
	{
	  if (n % 2 == 0)
	    {
	      printf ("even\n");
	    }
	  else
	    {
	      printf ("old\n");
	    }
	}
    }
  return 0;
}
