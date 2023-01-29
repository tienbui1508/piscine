#include <stdio.h>

// void	ft_ft(int *nbr);
void	ft_ultimate_ft(int *********nbr);
// void	ft_swap(int *a, int *b);
// void	ft_div_mod(int a, int b, int *div, int *mod);
// void	ft_ultimate_div_mod(int *a, int *b);
// void	ft_putstr(char *str);
// int	ft_strlen(char *str);
// void	 ft_rev_int_tab(int *tab, int size);
// void	swap(int *a, int *b);

int main(void)
{
    //test ex00
    // int *p;
    // int number;

    
    // number = 24;
    // printf("number = %i\n", number);
    // p = &number;
    // ft_ft(p);
    // printf("Expected output:\nnumber = 42\nOutput: number = %i", number);

    //test ex01
    int *p1;
    int **p2;
    int ***p3;
    int ****p4;
    int *****p5;
    int ******p6;
    int *******p7;
    int ********p8;
    int *********p9;
    int number;

    number = 24;
    printf("number = %i\n", number);
    p1 = &number;
    p2 = &p1;
    p3 = &p2;
    p4 = &p3;
    p5 = &p4;
    p6 = &p5;
    p7 = &p6;
    p8 = &p7;
    p9 = &p8;
    ft_ultimate_ft(p9);
    printf("Expected output:\nnumber = 42\nOutput: number = %i", number);

    //test ex02

}