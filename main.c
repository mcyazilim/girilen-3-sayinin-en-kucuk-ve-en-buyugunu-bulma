#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,max,min;
    max=0,min=0;
    printf("Enter three numbers:");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b){
        if(b>c){
            max=a;
            min=c;
        }
        if(b<c){
            if(a>c){
                max=a;
                min=b;
            }else{
                max=c;
                min=b;
            }
        }
    }
    if(b>a){
        if(a>c){
            max=b;
            min=c;
        }
        if(a<c){
            if(b>c){
                max=b;
                min=a;
            }
            else{
                max=c;
                min=a;
            }
        }
    }

    printf("Max number is %d\n",max);
    printf("Min number is %d\n",min);

    return 0;
}
