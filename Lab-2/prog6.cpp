#include <iostream>
using namespace std;

int vowelCount(char *sptr)
{

    if ((*sptr) == '\0')
    {
        return 0;
    }
    int c = 0;
    if (*sptr == 'a' || *sptr == 'e' || *sptr == 'i' || *sptr == 'o' || *sptr == 'u')
        c += 1;

    return c + vowelCount(++sptr);
}

int main()
{
    char str[] = "iiit bhubaneshwar";

    cout << "Vowels in above string: " << vowelCount(str);

    return 0;
}