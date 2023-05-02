# include <cs50.h>
# include <stdio.h>
# include <string.h>

typedef struct
{
    string name;
    string number;
}
int main(void)
{
    person people[2];

    people[0].name = "Carter";
    people[0].number = "+1-613-231-3222"

    people[1].name = "David";
    people[1].number = "1-223-351-2590";

    for (int i = 0; i < 2; i++)
    {
        if (strcnp(people[i].name, "David") == 0)
        { 
            printf("Found %s\n", people[i].number);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}