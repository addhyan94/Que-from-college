/* Wap to print sum of the series....
                                    x^1+x^4+x^9+x^16+...n terms .  */

    #include <stdio.h>
    #include <conio.h>
    #include<math.h>

    int main()
    {
        int i,n,a,p,x;
        float s;
        p=1;
        s=0;
        printf("\n enter a N value and  X value= ");
        scanf("%d%d",&n,&x);
        for(i=1; i<=n;i++)
        {
            p=p*p;
            a=pow(x,p);
            s=s+a;
        }
        printf("\n sum=%f",s);
    }