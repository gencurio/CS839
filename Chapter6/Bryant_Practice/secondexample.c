#include <stdio.h>

float average(float a, b)
{
return (a + b) / 2;
}

main()
{
float x, y, z;

printf("Enter three number: ");
scanf("%f%f%f", &x, &y, &z);
printf("Average of %g and %g: %g\n", x, y, average(x, y));
printf("Average of %g and %g: %g\n", y, z, average(y, z));
printf("Average of %g and %g: %g\n", x, z, average(x, z));

return 0;
}
