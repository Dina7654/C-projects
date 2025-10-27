#include <stdio.h>

int main(void){
int n;
if(scanf("%d", &n) != 1 || n<=0) return 0;

for (int i=1; i<=n; i++){
for (int j=1; j<=n; j++){
if (i==j) printf("%d", i);
else printf("*");
if (j<n) printf(" ");
}
printf("\n");
}
printf("\n");

for (int i=1; i<=n; i++){
int val = n-i+1;
for (int j=1; j<=n; j++){
if (i==j)printf("%d", val);
else printf("*");
if (j<n) printf(" ");
}
printf("\n");
}
printf("\n");

for (int i=1; i<=n; i++){
for (int j=1; j<= n; j++){
if (j==n-i+1) printf("%d", i);
else printf("*");
if (j<n) printf(" ");
}
printf("\n");
}
printf("\n");

for (int i=1; i<=n; i++){
int val=n-i+1;
for (int j=1; j<=n; j++){
if (j==n-i+1) printf("%d", val);
else printf("*");
if (j<n) printf(" ");
}
printf("\n");
}
return 0;
}
