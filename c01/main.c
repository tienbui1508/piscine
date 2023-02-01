#include <stdio.h>

// void	ft_ft(int *nbr); //ex00
// void	ft_ultimate_ft(int *********nbr); //ex01
// void	ft_swap(int *a, int *b); //ex02
// void	ft_div_mod(int a, int b, int *div, int *mod); //ex03
// void	ft_ultimate_div_mod(int *a, int *b); //ex04
void	ft_putstr(char *str); //ex05
// int	ft_strlen(char *str); //ex06
// void	 ft_rev_int_tab(int *tab, int size); //ex07
// void	ft_sort_int_tab(int *tab, int size); //ex08

int main(void)
{
    //test ex00 ft_ft(int *nbr)
    // printf("Testing ex00 ft_ft(int *nbr)\n");
    // int *p;
    // int number;

    // number = 24;
    // printf("number = %i\n", number);
    // p = &number;
    // ft_ft(p);
    // printf("Expected output:\nnumber = 42\nOutput:\nnumber = %i", number);

    // //test ex01 ft_ultimate_ft(int********* nbr)
    // printf("Testing ex01 ft_ultimate_ft(int********* nbr)\n");
    // int *p1;
    // int **p2;
    // int ***p3;
    // int ****p4;
    // int *****p5;
    // int ******p6;
    // int *******p7;
    // int ********p8;
    // int *********p9;
    // int number;

    // number = 24;
    // printf("number = %i. Running ft_ultimate_ft(p9)\n", number);
    // p1 = &number;
    // p2 = &p1;
    // p3 = &p2;
    // p4 = &p3;
    // p5 = &p4;
    // p6 = &p5;
    // p7 = &p6;
    // p8 = &p7;
    // p9 = &p8;
    // ft_ultimate_ft(p9);
    // printf("Expected output:\nnumber = 42\nOutput:\nnumber = %i", number);

    // //test ex02 ft_swap(int *a, int *b)
    // printf("Testing ex02 ft_swap(int *a, int *b)\n");
    // int num1;
    // int num2;
    // int *a;
    // int *b;

    // num1 = 24;
    // num2 = 42;
    // a = &num1;
    // b = &num2;
    // ft_swap(a, b);
    // printf("Expected output:\nnum1 = 42, num2 = 24\nOutput:\nnum1 = %i, num2 = %i", num1, num2);

    // //test ex03 ft_div_mod(int a, int b, int *div, int *mod)
    // printf("Testing ex03 ft_div_mod(int a, int b, int *div, int *mod)\n");
    // int a;
    // int b;
    // int *div;
    // int *mod;

    // a = 42;
    // b = 10;
    // div = &a;
    // mod = &b;
    // ft_div_mod(a, b, div, mod);
    // printf("Expected output:\n*div = 4, *mod = 2\nOutput:\n*div = %i, *mod = %i", *div, *mod);

    // //test ex04 ft_ultimate_div_mod(int *a, int *b)
    // printf("Testing ex04 ft_ultimate_div_mod(int *a, int *b)\n");
    // int *a;
    // int *b;
    // int num1;
    // int num2;

    // num1 = 42;
    // num2 = 10;
    // a = &num1;
    // b = &num2;
    // ft_ultimate_div_mod(a, b);
    // printf("Expected output:\nnum1 = 4, num2 = 2\nOutput:\nnum1 = %i, num2 = %i", num1, num2);

    //test ex05 ft_putstr(char *str)
    printf("Testing ex05 ft_putstr(char *str)\n");
    char *str;
    
    str = "Hello world!";
    printf("Expected output:\n%s\n", str);
    printf("Output:\n");
    ft_putstr(str);

    // //test ex06 int	ft_strlen(char *str)
    // printf("Testing ex06 int	ft_strlen(char *str)\n");
    // char *str;
    // int len;

    // str = "123456789";
    // len = ft_strlen(str);
    // printf("Expected output:\nlen = 9\nOutput:\nlen = %i", len);

    // //test ex07 void	 ft_rev_int_tab(int *tab, int size)
    // printf("Testing ex07 void	 ft_rev_int_tab(int *tab, int size)\n");
    // printf("Expected output:\n87654321\nOutput:\n");

    // int *tab;
    // int numbers[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    // tab = &numbers[0];
    // ft_rev_int_tab(tab, 8);
    // for (int i = 0; i < 8; i++)
    //     printf("%i", numbers[i]);

    // //test ex08 void	ft_sort_int_tab(int *tab, int size)
    // printf("Testing ex08 void	ft_sort_int_tab(int *tab, int size)\n");
   
    // int numbers[]  = {1, 3, 2, 4, 8, 5, 7, 6};
    // int *tab = &numbers[0];
    // printf("Original:\n");
    // for(int i = 0; i < 8; i++)
    //     printf("%i", tab[i]);
    // printf("\nExpected output:\n12345678");
    // ft_sort_int_tab(tab, 8);
    // printf("\nOutput:\n");
    // for(int i = 0; i < 8; i++)
    //     printf("%i", tab[i]);

    return 0;
}
