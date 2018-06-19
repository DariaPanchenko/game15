#define CTEST_MAIN

#include <func.h>
#include <ctest.h>

CTEST(printmass, Correct_printmass)
{
    int a[16], i, j = 0;
    for (i = 1; i < 16; i++) {
        a[j] = i;
        j++;
    }	
    a[15] = 0;
    int result = printmass(a,4,0);
    int expect = 1;
    ASSERT_EQUAL(expect, result);
}

CTEST(printmass, Incorrect_printmass)
{
int a[16], i, j = 0;
    for (i = 1; i < 16; i++) {
        a[j] = i;
        j++;
    }	
    a[15] = 0;
    a[9] = 7;
    int result = printmass(a,4,0);
    int expect = 0;
    ASSERT_EQUAL(expect, result);

}

int main(int argc, const char** argv) 
{
    int test_res = ctest_main(argc, argv);
    return test_res;
}
