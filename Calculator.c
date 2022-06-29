#include <stdio.h>
int add()
{
    int i, d = 0, j, p, n;
    int a[300];
    printf("Enter number of numbers you want to add(limit 300):");
    scanf("%d", &p);
    printf("Enter the numbers: \n");
    for (j = 0; j < p; j++)
    {
        scanf("%d", &a[j]);
    }
    for (j = 0; j < p; j++)
    {
        d += a[j];
    }
    return d;
}
int subtraction()
{
    int i, d = 0, j, p, n;
    int a[300];
    printf("(Plz enter the minus sign before number)\n");
    printf("Enter number of numbers you want to subtract(limit 300):");
    scanf("%d", &p);
    printf("Enter the numbers: \n");
    for (j = 0; j < p; j++)
    {
        scanf("%d", &a[j]);
    }
    for (i = 0; i < p; i++)
    {
        d += a[i];
    }
    return d;
}
int multiplication()
{
    int i, d = 1, j, p, n;
    int a[300];
    printf("Enter number of numbers you want to multiply(limit 300):");
    scanf("%d", &p);
    printf("Enter the numbers: \n");
    for (j = 0; j < p; j++)
    {
        scanf("%d", &a[j]);
    }
    for (i = 0; i < p; i++)
    {
        d *= a[i];
    }
    return d;
}
void division()
{

    float a, b, l;
    printf("Enter first number:");
    scanf("%f", &a);
    printf("Enter another number:");
    scanf("%f", &b);
    l = a / b;
    printf("Result:%f \n", l);
}
int main()
{
    int a, s, m;
    float d;
    char n;
    char b[100];
    printf("Hey welcome to the Calculator app \n");
    printf("Plz enter your name:");
    fgets(b, 100, stdin);
    printf("Hey ");
    puts(b);
    printf("Enter + for Addition \n");
    printf("Enter - for Subtraction \n");
    printf("Enter * for Multiplication \n");
    printf("Enter / for Division \n");
    printf("Enter your choice:");
    scanf("%c", &n);

    switch (n)
    {
    case '+':
    {
        a = add();
        printf("Result:%d \n", a);
        break;
    }
    case '-':
    {
        s = subtraction();
        printf("Result:%d \n", s);
        break;
    }
    case '*':
    {
        m = multiplication();
        printf("Result:%d \n", m);
        break;
    }
    case '/':
    {
        division();
        break;
    }
    default:
        printf("Sorry not found");
    }
    printf("\nThankYou for using Calculator App.");
    return 0;
}
