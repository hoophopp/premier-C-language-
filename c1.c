#include <stdio.h>
#include <string.h>
int sommeDiviseurs(int n) {
    int sum = 0;
    int i;

    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }

    return sum;
}
int  EstPremier(int n){
if(sommeDiviseurs(n) == 2){
    return 0;
}else{
    return 1;
}
}
int main() {
int n;
do{
    printf("enter n positive please");
    scanf("%d",&n);
}while(n <= 0);
if(n == 1){
   printf("no premier") ;
}else{
if(EstPremier == 0){
    printf("no premier");
}else{
    printf("est premier");
}
}
}