# include <cs50.h>
# include <stdio.h> 

void draw(int n);

int main(void)
{
    int height = get_int("Height: ");

    draw(height);
}

void draw(int n)
{
    for (int 1 = 0; 1 < n; i++)
    {
        for (int j = 0; j < 1; j++)
        {
            printf("0");
        }
        printf("\n");
    }
}