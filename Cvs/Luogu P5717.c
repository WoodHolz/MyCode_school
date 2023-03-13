#include<stdio.h>
#include<math.h>
int main()
    {
        float a[3];
        scanf("%f %f %f", &a[0], &a[1], &a[2]);
        for(int i = 0; i < 3 - 1; ++i){//sort
            for(int ii = 0; ii < 3 - 1 - i; ++ii){
                if(a[ii] > a[ii + 1]){
                    float temp = a[ii];
                    a[ii] = a[ii + 1];
                    a[ii + 1] = temp;
                }
            }
        }
        if(a[0] + a[1] > a[2]){ //judge if it's triangle
            float cf = pow(a[0], 2) + pow(a[1], 2);
            float re = pow(a[2], 2);
            if(cf == re) printf("Right triangle\n");
            if(cf > re) printf("Acute triangle\n");
            if(cf < re) printf("Obtuse triangle\n");
            if(a[0] == a[1] || a[1] == a[2]) printf("Isosceles triangle\n");
            if(a[0] == a[1] && a[1] == a[2]) printf("Equilateral triangle\n");
        }
        else printf("Not triangle\n");
        return 0;
    }