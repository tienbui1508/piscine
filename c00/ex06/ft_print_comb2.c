
#include <unistd.h>

void ft_print_num(int num){
    char    c1;
    char    c2;

    c1 = num / 10 + 48;
    c2 = num % 10 + 48;
    write(1, &c1, 1);
    write(1, &c2, 1);
}

void    ft_print_comb2(void)
{
    int num1;
    int num2;

    num1 = 0;
    while (num1 < 99)
    {
        num2 = num1 + 1;
        while (num2 < 100)
        {
            ft_print_num(num1);
            write(1, " ", 1);
            ft_print_num(num2);
            if (!(num1 == 98 && num2 == 99))
                write(1, ", ", 2);
            num2++;
        }
        num1++;
    }
}

int main(void)
{
	ft_print_comb2();
    return 0;
}

