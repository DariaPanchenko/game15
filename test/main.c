#define CTEST_MAIN

#include <func.h>
#include <ctest.h>

CTEST(printmass, Correct_printmass)
{
    int a[16], i;
    for (i = 0; i <= 15; i++)
    {
        a[i] = (i + 1) % 16;
    }
    int result = printmass(a, 4, 0);
    int expect = 1;
    ASSERT_EQUAL(expect, result);
}

CTEST(printmass, Incorrect_printmass)
{
    int a[16], i;
    for (i = 0; i <= 15; i++)
    {
        a[i] = (i + 1) % 16;
    }
    a[9] = 7;
    int result = printmass(a, 4, 0);
    int expect = 0;
    ASSERT_EQUAL(expect, result);
}

CTEST(victory, Correct_victory)
{
    int a[16], i;
    for (i = 0; i <= 15; i++)
    {
        a[i] = (i + 1) % 16;
    }

    int result = victory(a, 0);
    int expect = 1;
    ASSERT_EQUAL(expect, result);
}

CTEST(victory, Incorrect_victory)
{
    int a[16], i;
    for (i = 0; i <= 15; i++)
    {
        a[i] = (i + 1) % 16;
    }

    a[15] = 0;
    a[11] = 7;
    a[12] = 9;
    int result = victory(a, 0);
    int expect = 0;
    ASSERT_EQUAL(expect, result);
}

int main(int argc, const char **argv)
{
    int test_res = ctest_main(argc, argv);
    return test_res;
}
