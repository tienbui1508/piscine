
#include <unistd.h>

void    ft_print_comb(void){
    char    array[5];

    array[0] = '0';
    array[3] = ',';
    array[4] = ' ';
    while (array[0] <= '7')
    {
        array[1] = array[0] + 1;
        while (array[1] <= '8')
        {
            array[2] = array[1] + 1;
            while (array[2] <= '9')
            {
                if (!(array[0] == '7' && array[1] == '8' && array[2] == '9'))
                    write(1, array, 5);
                else
                    write(1, array, 3);
                array[2]++;
            }
        array[1]++;
        }
    array[0]++;
    }
}

int main(void)
{
	ft_print_comb();
    return 0;
}

