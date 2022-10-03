#include <stdio.h>
#include <string.h>

void swap(char str[], int i, int j)
{
    char temp;

    while (i <= j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}

int main()
{
    // code
    char str[500];

    int i = 0, start = 0, end = 0, flag = 0;

    printf("enter the string: ");

    fgets(str, 500, stdin);

    while (str[i] != '\0')
    {
        while (str[i] != ' ')
        {

            if (str[i] == '\0')
            {
                flag = 1;
                break;
            }

            end++, i++;
        }
        swap(str, start, end - 1);

        if (flag == 1)
            break;

        start = end++;
        i++;
    }

    swap(str, 0, i - 1);

    printf("%s ", str);

    return 0;
}
