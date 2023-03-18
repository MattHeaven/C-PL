#include <stdio.h>

int addition(int num1, int num2)
{
    return num1 + num2;
}

int main() {
    int num1, num2, ans;
    char opp;
             printf("Please enter your numbers");

    scanf("%d %c %d", &num1, &opp, &num2);

    if (opp == '+')
        {
          ans = addition(num1, num2);
          printf("%d %c %d = %d", num1, opp, num2, ans);
        } else
           {
             printf("Please try again!");
             return 1;
           }

    ;
}
