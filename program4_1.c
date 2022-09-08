#include <stdio.h>
int n,Prime = 0;
int isPrime(int);
int main()
{
    while(Prime == 0){
        scanf("%d",&n);
        isPrime(n);
    }
    return 0;
}
int isPrime(int n){
    if(n == 0 || n == 1){
        return Prime;
    }
    for(int i = 2;i<n;i++){
        if(n%i == 0){
            return Prime;
        }
    }
    Prime = 1;
    return Prime;
}