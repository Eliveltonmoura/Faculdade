#include <stdio.h>
#include <math.h>

int main()
{
    double a = 0, b = 0, c = 0;
    double delta = 0, root1 = 0, root2 = 0, root = 0;

    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);

    delta = (b * b) - (4 * a * c);

    if (delta > 0)
    {
        root1 = ((-b) + (sqrt(delta))) / (2 * a);
        root2 = ((-b) - (sqrt(delta))) / (2 * a);
        printf("%.2lf\n%.2lf\n", root1, root2);
    }
    else if (delta == 0)
    {
        root = (-b) / (2 * a);
        root *= (-1);
        printf("%.2lf\n", root);

        if (root < 0)
        {
            root *= (-1);
            printf("%.2lf\n", root);
        }
    }
    else
    {
        printf("nao ha raiz real\n");
    }

    return 0;
}