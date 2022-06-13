/*  NAME - RATAN BHOWMICK
  ROLL NO - 35000121072
  PROBLEM - */

#include <stdio.h>
#include <math.h>
typedef struct
{
  double real;
  double imag;
} complex;
int main()
{
  complex a1, a2;
  printf("++ Enter the complex number-1 ++ \n");
  printf("-- Real Part: ");
  scanf("%lf", &a1.real);
  printf("-- Imginary Part: ");
  scanf("%lf", &a1.imag);

  printf("++ Enter the complex number-2 ++ \n");
  printf("-- Real Part: ");
  scanf("%lf", &a2.real);
  printf("-- Imginary Part: ");
  scanf("%lf", &a2.imag);

  double c1, c2;
  printf("** Complex Number-1: c1 =(%lf)+(%lf)i\n", a1.real, a1.imag);
  printf("** Complex Number-2: c2 =(%lf)+(%lf)i\n", a2.real, a2.imag);

  double m1, m2;

  m1 = sqrt(pow(a1.real, 2) + pow(a1.imag, 2));
  m2 = sqrt(pow(a2.real, 2) + pow(a2.imag, 2));

  printf("** MODULUS Of Complex Number-1: |C1|=%lf\n", m1);
  printf("** MODULUS Of Complex Number-2: |C2|=%lf\n", m2);

  printf("** CONJUGATE Of Complex Number-1: ~C1 =(%lf)+(-%lf)i\n", a1.real, a1.imag);
  printf("** CONJUGATE Of Complex Number-2: ~C2 =(-%lf)+(%lf)i\n", a2.real, a2.imag);

  printf("** ARGUMENT Of Complex Number-1: ARG(C1)=%lf\n", atan(a1.imag / a1.real));
  printf("** ARGUMENT Of Complex Number-2: ARG(C2)=%lf\n", atan(a2.imag / a2.real));

  printf("** Complex Number after ADDITION: (C1+C2)=(%lf)+(%lf)i\n", a1.real + a2.real, a1.imag + a2.imag);
  printf("** Complex Number after SUBTRACTION: (C1-C2)=(%lf)-(%lf)i\n", a1.real - a2.real, a1.imag - a2.imag);
  printf("** Complex Number after MULTIPLICATION: (C1XC2)=(%lf)+(%lf)i\n", (a1.real * a2.real - a1.imag * a2.imag), (a1.real * a2.imag + a2.real * a1.imag));

  double d1, d2;
  d1 = (a1.real * a2.real + a1.imag * a2.imag) / ((a2.real * a2.real) + (a2.imag * a2.imag));
  d2 = (a1.imag * a2.real - a1.real * a2.imag) / ((a2.real * a2.real) + (a2.imag * a2.imag));
  printf("** Complex Number after DIVISION: (C1/C2)=(%lf)+(%lf)i\n", d1, d2);
  printf("** SQUARE Of Complex Number-1: C1^1 =(%lf)+(%lf)i\n", pow(a1.real, 2) - pow(a1.imag, 2), 2 * a1.real * a1.imag);
  printf("** SQUARE Of Complex Number-2: C1^2 =(%lf)+(%lf)i\n", pow(a2.real, 2) - pow(a2.imag, 2), 2 * a2.real * a2.imag);
  printf("** CUBE Of Complex Number-1: C1^3 =(%lf)+(%lf)i\n", (pow(a1.real, 3) - 3 * a1.real * pow(a1.imag, 2)), 3 * pow(a1.real, 2) * a1.imag - pow(a1.imag, 3));
  printf("** CUBE Of Complex Number-2: C1^3 =(%lf)+(%lf)i\n", (pow(a2.real, 3) - 3 * a2.real * pow(a2.imag, 2)), 3 * pow(a2.real, 2) * a2.imag - pow(a2.imag, 3));

  if (a1.imag < 0)
    printf("** SQUARE ROOT Of Complex Number-1: SQRT(C1) = (+/-) [(%lf)+ -(%lf)]i\n", sqrt((a1.real + sqrt(pow(a1.real, 2) + pow(a1.imag, 2))) / 2), sqrt((-a1.real + sqrt(pow(a1.real, 2) + pow(a1.imag, 2))) / 2));
  else
    printf("** SQUARE ROOT Of Complex Number-1: SQRT(C1) = (+/-) [(%lf)+ (%lf)]i\n", sqrt((a1.real + sqrt(pow(a1.real, 2) + pow(a1.imag, 2))) / 2), sqrt((-a1.real + sqrt(pow(a1.real, 2) + pow(a1.imag, 2))) / 2));
  if (a2.imag < 0)
    printf("** SQUARE ROOT Of Complex Number-2: SQRT(C2) = (+/-) [(%lf)+ -(%lf)]i\n", sqrt((a2.real + sqrt(pow(a2.real, 2) + pow(a2.imag, 2))) / 2), sqrt((-a2.real + sqrt(pow(a2.real, 2) + pow(a2.imag, 2))) / 2));
  else
    printf("** SQUARE ROOT Of Complex Number-2: SQRT(C2) = (+/-) [(%lf)+ (%lf)]i\n", sqrt((a2.real + sqrt(pow(a2.real, 2) + pow(a2.imag, 2))) / 2), sqrt((-a2.real + sqrt(pow(a2.real, 2) + pow(a2.imag, 2))) / 2));

  printf("** RCIPROCAL ROOT Of Complex Number-1 :1/C1 =(%f) +(%f)i\n", a1.real / (pow(a1.real, 2) + pow(a1.imag, 2)), -a1.imag / (pow(a1.real, 2) + pow(a1.imag, 2)));
  printf("** RCIPROCAL ROOT Of Complex Number-1 :1/C2 =(%f) +(%f)i\n", a2.real / (pow(a2.real, 2) + pow(a2.imag, 2)), -a2.imag / (pow(a2.real, 2) + pow(a2.imag, 2)));

  printf("** EXPONENTIATION of Complex Number-1: e^C1= (%f)+(%f)i\n", exp(a1.real) * cos(a1.imag), exp(a1.real) * sin(a1.imag));
  printf("** EXPONENTIATION of Complex Number-2: e^C2= (%f)+(%f)i\n", exp(a2.real) * cos(a2.imag), exp(a2.real) * sin(a2.imag));

  return 0;
}