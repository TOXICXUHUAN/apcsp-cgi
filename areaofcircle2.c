#include <stdio.h>
#include <math.h>
int main(int argc, char* argv[])
{
  if (argc != 3)
  {
    printf("%s : expected 2 args, please enter two integers\n", argv[0]);
    return 1;
  }
  int arg1;
  int found = sscanf(argv[1], "%d", &arg1);
  if (found != 1)
  {
    printf("first arg is not an integer, enter two ints\n");
    return 1;
  }
  int arg2;
  found = sscanf(argv[2], "%d", &arg2);
  if (found != 1)
  {
    printf("second arg is not an integer, enter two ints\n");
    return 1;
  }

	float areaOfCircle(float r)
{
		return 3.14*r*r;
}
	int i;
  if (arg1 > 0)
  {
    for (i = arg1; i <= arg2; i++)
    {
         printf("%f\n", areaOfCircle(i));
    }
  }
}

