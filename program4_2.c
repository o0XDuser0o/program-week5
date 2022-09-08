#include <stdio.h>
int n,Prime,stopper = 0;
int loopStopper(int);
int main()
{
    while(stopper == 0){
        scanf("%d",&n);
        for(int i = 2;i <= n;i++){
            if((n%i == 0 || n == 0 || n == 1) && i != n){
                Prime = 0;
                break;
            }
            else{
                Prime = 1;
            }
        }
        loopStopper(Prime);
    }
    return 0;
}
int loopStopper(int Prime){
    if(Prime == 0){
        stopper = 0;
    }
    else{
        stopper = 1;
    }
    return stopper;
}