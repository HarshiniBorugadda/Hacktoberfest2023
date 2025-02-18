#include <stdio.h>
#include<math.h>
int smallPrimePalindrome(int N){    
    unsigned long long int dummy=0,i,j,s=0,rem=0,rev=0;    
    if(N==1) return 2;
    for(i=N;;i++){
        s=0;
        rev=0;
        rem=0;
        dummy=i;
        if(dummy<=11||dummy%2!=0 && dummy%3!=0 && dummy%5!=0 && dummy%7!=0 && dummy%11!=0){
            while(dummy>0){
                rem = dummy%10;
                s = s + rem;
                rev = rev*10 + rem;
                dummy = dummy/10;
            }
            if(rev == i){
                s=0;
                for(j=2;j<=sqrt(i);j++)
                {
                    if(i%j == 0)
                    {
                        ++s;
                        break;
                    }
                }  
                if(s == 0){
                    return i;
                }
            }
        }
    }
    return 0;
}
int main() {
    int n ;
    printf("Give the number: ");
    scanf("%d",&n);
    int res = smallPrimePalindrome(n);
    printf("Smallest Prime Palindrome of %d is %d",n,res);
    return 0;
}
