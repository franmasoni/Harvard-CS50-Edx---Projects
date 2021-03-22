#include <cs50.h>
#include <stdio.h>

int main (void)
{
    int n,m,y,b,d;

    // TODO: Prompt for start size
    do
    {
        n = get_int ("Start Size: ");
    }
    while (n < 9);

    // TODO: Prompt for end size
    do
    {
        m = get_int ("End Size: ");
    }
    while (m < n);

    // TODO: Calculate number of years until we reach threshold

    for (y = 0; n < m; y++)

  {
    b = n/3;
    d = n/4;
    n = n + b - d;
  }

    // TODO: Print number of years
    {
        printf("Years: %i\n", y);
    }
}