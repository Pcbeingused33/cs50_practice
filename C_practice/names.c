# include <cs50.h>
# include <stdio.h>
# include <string.h>

int main(void)
{
    string names[] = {"Bill", "Charlie", "Fred", "George", "Ginny", "Percy", "Ron"};

    for (int 1 = 0; 1 < 7; i++)
    {
        if (strcmp(names[i], "Ron") == 0 )
        {
            printf("Found\n"); 
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}