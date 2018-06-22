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

CTEST(generation, Correct_generation)
{  int a[16],i,result = 0;   
    for (i = 0; i <= 5; i++)
{     
     a[i] = (i + 1) % 16;
     result+=move(a, generater(i));  
}
   int expect =6;
   ASSERT_EQUAL(expect, result);
}

CTEST(umove, Correct_umove)
{   
    int a[16];	
    a[0] = 6; a[1] = 4; a[2] = 3; a[3] = 10;
    a[4] = 2; a[5] = 11; a[6] = 1; a[7] = 7;
    a[8] = 14; a[9] = 12; a[10] = 5; a[11] = 8;
    a[12] = 5; a[13] = 9; a[14] = 0; a[15] = 13;
    int result = umove(a,13);
    int expect = 1;
    ASSERT_EQUAL(expect, result);
}

CTEST(umove, Incorrect_umove)
{  int a[16];		
    a[0] = 6; a[1] = 4; a[2] = 3; a[3] = 10;
    a[4] = 2; a[5] = 11; a[6] = 1; a[7] = 7;
    a[8] = 14; a[9] = 12; a[10] = 5; a[11] = 8;
    a[12] = 5; a[13] = 0; a[14] = 13; a[15] = 9;
   
    int result = umove(a,9);
    int expect = 0;
    ASSERT_EQUAL(expect, result);
}

CTEST(umove, more)
{
    int a[16];	
    a[0] = 6; a[1] = 4; a[2] = 3; a[3] = 10;
    a[4] = 2; a[5] = 11; a[6] = 1; a[7] = 7;
    a[8] = 14; a[9] = 12; a[10] = 5; a[11] = 8;
    a[12] = 5; a[13] = 9; a[14] = 13; a[15] = 0;
    int result = umove(a,77);
    int expect = 0;
    ASSERT_EQUAL(expect, result);	
}

CTEST(umove,otriz)
{
    int a[16];	
    a[0] = 6; a[1] = 4; a[2] = 3; a[3] = 10;
    a[4] = 2; a[5] = 11; a[6] = 1; a[7] = 7;
    a[8] = 14; a[9] = 12; a[10] = 5; a[11] = 8;
    a[12] = 5; a[13] = 9; a[14] = 13; a[15] = 0;
    int result = umove(a,-1);
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
