#include <stdio.h>

int main() {
    int n,i,even=0,odd=0;
    scanf("%d",&n);
    for(i=5;i<=n;i+6)
    {
        if (i%2==0)
        even=even+i;
        else
        odd = odd+i;
    }
    print("sum = %d\n",odd-even);
    
    
    return 0;
}