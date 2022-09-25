#include <stdio.h>
#include <stdbool.h>

void add(double *a, double *b);
void sub(double *a, double *b);
void mul(double *a, double *b);
void div(double *a, double *b);


int main(void)
{
    double ans =0 ;
    double nextnum;
    int op;
    while(1)
    {
        printf("Ans: %f\n\n", ans);

        do{
                puts("Choose an operation:\n");
        puts("1)Add\n2)Substract\n3)Multiply\n4)Divide\n5)Clear\n");
                scanf("%d", &op);
        } while(!(1<=op && op <=5));
        puts("Type the next number\n");
        scanf("%lf", &nextnum);

        switch(op)
        {
        case 1:
            add(&ans, &nextnum);
            break;
        case 2:
            sub(&ans, &nextnum);
            break;
        case 3:
            mul(&ans, &nextnum);
            break;
        case 4:
            if (nextnum==(float) 0)
            {
                puts("Invalid Request\n");
                continue;
            }
            div(&ans, &nextnum);
            break;
        }

    };

    return 0;
}

void add(double* a, double *b)
{
    *a += *b;
};

void sub(double *a, double *b)
{
    *a -= *b;
};

void mul(double *a, double *b)
{
    *a *= *b;
};

void div(double *a, double *b)
{
    *a /= *b;
};
