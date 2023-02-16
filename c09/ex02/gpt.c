#include <stdlib.h>

int check_separator(char c, char *charset)
{
    int i;

    i = 0;
    while (charset[i] != '\0')
    {
        if (c == charset[i])
            return (1);
        i++;
    }
    return (0);
}

int count_strings(char *str, char *charset)
{
    int i;
    int count;

    count = 0;
    i = 0;
    while (str[i] != '\0')
    {
        while (str[i] != '\0' && check_separator(str[i], charset))
            i++;
        if (str[i] != '\0')
            count++;
        while (str[i] != '\0' && !check_separator(str[i], charset))
            i++;
    }
    return (count);
}

int ft_strlen_sep(char *str, char *charset)
{
    int i;

    i = 0;
    while (str[i] && !check_separator(str[i], charset))
        i++;
    return (i);
}

char *ft_word(char *str, char *charset)
{
    int len_word;
    int i;
    char *word;

    i = 0;
    len_word = ft_strlen_sep(str, charset);
    word = (char *)malloc(sizeof(char) * (len_word + 1));
    while (i < len_word)
    {
        word[i] = str[i];
        i++;
    }
    word[i] = '\0';
    return (word);
}

char **ft_split(char *str, char *charset)
{
    char **strings;
    int i;
    int j;

    i = 0;
    j = 0;
    strings = (char **)malloc(sizeof(char *) * (count_strings(str, charset) + 1));
    while (*str != '\0')
    {
        while (*str != '\0' && check_separator(*str, charset))
            str++;
        if (*str != '\0')
        {
            strings[i] = ft_word(str, charset);
            i++;
        }
        while (*str && !check_separator(*str, charset))
            str++;
    }
    strings[i] = 0;
    return (strings);
}
#include <stdio.h>
#include <stdlib.h>

char **ft_split(char *str, char *charset);

int main(void)
{
    // char *str = "This3is2a1 2string21to1be12split";
    // char *charset = "12 3";
    char *str = "cCu2ggnOiODP3Zlborv    qpUuuWf MVynQ";
    char *charset = "qtN7k82r";
    char **result = ft_split(str, charset);

    int i = 0;
    while (result[i])
    {
        printf("|%s|\n", result[i]);
        i++;
    }

    free(result);
    return 0;
}
