#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c, num, g1, g2, g3, g4, g5, g6, x, y;
    char d[][20] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "\0"};
    char e[][20] = {"", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Eighteen", "Nineteen"};
    char f[][20] = {"", "", "Twenty", "Thirty", "Fourty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};

    printf("++ Enter Student Roll Number: ");
    scanf("%d", &a);
    printf("++ Enter the Attendance Percentage: ");
    scanf("%d", &b);
    if (b <= 80)
    {
        printf("\n-- The Grade of %d is: F(Shortage in Attendance!)\n", a);
    }
    else
    {
        printf("++ Enter Subject Marks(out of 100): ");
        scanf("%d", &num);
        if (num > 100)
        {
            printf("\n-- Error: Mistake in Marks Record!");
        }
        else
        {
            printf("++ Is this marks for Supplementry/Backlog Examination? (Type '0' if Not): ");
            scanf("%d", &y);
            printf("++ Do you want Relative Grading? (Type '0' if Not): ");
            scanf("%d", &x);
            if (y == 1)
            {
                switch (y)
                {
                case 1:
                    if (num > 0 && num <= 10)
                        printf("\n-- the subject marks of %d is: %s\n", a, d[num]);
                    else if (num >= 11 && num <= 19)
                        printf("\n-- the subject marks of %d is: %s\n", a, e[num % 10]);
                    else if (num > 19 && num <= 99)
                        printf("\n-- the subject marks of %d is: %s %s\n", a, f[num / 10], d[num % 10]);
                    else if (num == 0)
                        printf("\n-- the subject marks of %d is: zero\n", a);
                    {
                        if (num <= 100 && num >= 90)
                            printf("-- The Absolute Grade of %d is: A", a);
                        else if (num <= 89 && num >= 80)
                            printf("-- The Absolute Grade of %d is: B", a);
                        else if (num <= 79 && num >= 70)
                            printf("-- The Absolute Grade of %d is: c", a);
                        else if (num <= 69 && num >= 60)
                            printf("-- The Absolute Grade of %d is: D", a);
                        else if (num <= 59 && num >= 50)
                            printf("-- The Absolute Grade of %d is: P", a);
                        else if (num <= 49 && num >= 40)
                            printf("-- The Absolute Grade of %d is: F", a);
                        else if (num < 40)
                            printf("-- The Absolute Grade of %d is: H", a);
                        break;
                    }
                }
            }
            else
            {

                if (x == 1)

                {
                    switch (x)
                    {
                    case 1:
                        printf("++ set cut off parameters:\n");
                        printf("\t++ Cut-off for EX= ");
                        scanf("%d", &g1);
                        printf("\t++ Cut-off for A = ");
                        scanf("%d", &g2);
                        printf("\t++ Cut-off for B = ");
                        scanf("%d", &g3);
                        printf("\t++ Cut-off for C = ");
                        scanf("%d", &g4);
                        printf("\t++ Cut-off for D = ");
                        scanf("%d", &g5);
                        printf("\t++ Cut-off for P = ");
                        scanf("%d", &g6);
                        if (g2 != g3)
                        {
                            if (num > 0 && num <= 10)
                                printf("\n-- The subject marks of %d is: %s\n", a, d[num]);
                            else if (num >= 11 && num <= 19)
                                printf("\n-- The subject marks of %d is: %s\n", a, e[num % 10]);
                            else if (num > 19 && num <= 99)
                                printf("\n-- The subject marks of %d is: %s %s\n", a, f[num / 10], d[num % 10]);
                            else if (num == 0)
                                printf("\n-- The subject marks of %d is: Zero\n", a);
                            if (num >= g1)
                                printf("-- The Relative Grade of %d is: EX", a);
                            else if (num >= g2)
                                printf("-- The Relative Grade of %d is: A", a);
                            else if (num >= g3)
                                printf("-- The Relative Grade of %d is: B", a);
                            else if (num >= g4)
                                printf("-- The Relative Grade of %d is: C", a);
                            else if (num >= g5)
                                printf("-- The Relative Grade of %d is: D", a);
                            else if (num < g6)
                                printf("-- The Relative Grade of %d is: F", a);
                            else
                                printf("sorry");
                        }
                        else
                        {
                            printf("\n-- Error: Cutt- off for 'B' is not less than Cut-off for 'A'!");
                            break;
                        }
                    }
                }
                else
                {
                    if (num > 0 && num <= 10)
                        printf("\n-- the subject marks of %d is: %s\n", a, d[num]);
                    else if (num >= 11 && num <= 19)
                        printf("\n-- the subject marks of %d is: %s\n", a, e[num % 10]);
                    else if (num > 19 && num <= 99)
                        printf("\n-- the subject marks of %d is: %s %s\n", a, f[num / 10], d[num % 10]);
                    else if (num == 0)
                        printf("\n-- the subject marks of %d is: zero\n", a);

                    if (num >= 90)
                        printf("-- The Absolute Grade of %d is: EX", a);
                    else if (num >= 80)
                        printf("-- The Absolute Grade of %d is: A", a);
                    else if (num >= 70)
                        printf("-- The Absolute Grade of %d is: B", a);
                    else if (num >= 60)
                        printf("-- The Absolute Grade of %d is: C", a);
                    else if (num >= 50)
                        printf("-- The Absolute Grade of %d is: D", a);
                    else if (num >= 40)
                        printf("-- The Absolute Grade of %d is: P", a);
                    else if (num < 40)
                        printf("-- The Absolute Grade of %d is: F", a);
                }
            }
        }
    }
}
