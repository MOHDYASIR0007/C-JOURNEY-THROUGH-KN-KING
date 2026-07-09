#include <stdio.h>
//the programm ask user to input 4 digits and compare them internally to output largest and smallest among these 4.
int main()
{
    int a, b, c, d, largest, smallest;

    printf("Enter four integers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a > b) {
        largest = a;
        smallest = b;
    } else {
        largest = b;
        smallest = a;
    }

    if (c > largest)
        largest = c;
    else if (c < smallest)
        smallest = c;

    if (d > largest)
        largest = d;
    else if (d < smallest)
        smallest = d;

    printf("Largest: %d\n", largest);
    printf("Smallest: %d\n", smallest);
    return 0;
}