#include <stdio.h>
#include <assert.h>
 
float Plus(float a, float b); 
float Minus(float a, float b);
float Multiply(float a, float b);
float Divide(float a, float b);
void Switch(float a, float b, float (*p2Func)(float, float));
 
int main()
{
    Switch(4, 5.6, &Plus);
    Switch(4, 6, &Minus);
    Switch(4, 0, &Divide);
    return 0;
}
 
void Switch(float a, float b, float (*p2Func)(float, float))
{
    float result = p2Func(a, b);
    printf("result = %f\n", result);
}
 
float Plus(float a, float b) 
{ 
    return a+b; 
}
 
float Minus(float a, float b) 
{ 
    return a-b; 
}
 
float Multiply(float a, float b) 
{ 
    return a*b; 
}
 
float Divide(float a, float b) 
{ 
    assert(b != 0); 
    return a/b;
}