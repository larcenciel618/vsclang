#include <stdio.h>

/*int main(void)
{
    printf("hello gitworld\n");
    return 0;
}*/

int main(void)
{
    int i,b,ans=0;
    
     for(i = 1;i <= 9;i ++){
        for(b = 1;b <= 9;b ++){
           ans = i*b;
           printf("%2d*%d=%2d",i,b,ans); 
        }
      printf("\n");
    }
     return 0;
}
     


 /*int main(void)
{
    int i ,high=0 ;
    long org=600851475143;
    
    for(i = 2;i <= org;i ++){
        if(org % i == 0){
            do{
                org = org/i;
                high = i;
            }while(org%i == 0);
        }
    }
    printf("%d\n",high);
    return 0;
}*/