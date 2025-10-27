#include <stdio.h>

int main(void) {
long long n;
long long original;

if (scanf("%lld", &n) != 1) return 0;
original = n;

if (n <= 1){
printf ("%lld=%lld\n", n, n);
return 0;
}

int first = 1;
for (long long p=2; p*p <=n; p++){
while (n% p ==0){
if (!first) printf("*");
printf("%lld" , p);
first = 0;
n/=p;
}
}

if (n>1) {
if(!first) printf("*");
printf("%lld" ,n);
}

printf("=%lld\n", original);
return 0;
}

