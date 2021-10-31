#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0, min = 0, max = 0, l = 0;
    double a = 0, s = 0, b = 0;
    
    scanf("%d", &n);
    scanf("%d", &min);
    scanf("%d", &max);
    
    for (int i = 0; i < n; i++)
    {
        a = (((float)rand()) / RAND_MAX) * (max - min) + min;
        
        b = a - (int)a;
        l = i + 1;
        
        while (l > 0)
        {
            l = l / 10;
            b = b * 10.0;
        }
        
        if (((b - i - 1) > 0.0) && ((b - i - 1) < 1.0))
        {
            s = s - a;
        }
        else
        {
            s = s + a;
        }
    }
    
    printf("%lf", s);
    
    return 0;
}