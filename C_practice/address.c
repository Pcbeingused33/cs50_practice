# include <cs50.h>
# include <stdio.h>

int main(void)
{
    string s = "HI!";
    char *p = &s[0];
    printf("%p\n", p);
    printf("%p\n", s);
    printf("%p\n", &s[0]);
    printf("%p\n", &s[1]);
    printf("%p\n", &s[2]);

    // char c = s[0];
    // char *p = &c;
    // printf("%p\n", s);
    // printf("%p\n", p);
    // int n = 50;
    // int *p = &n;
    // printf("%p\n", p);
    // printf("%i\n", *p);
}