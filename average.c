#include <stdio.h>

int main(void){
long long sum = 0;
long long count = 0;
int x;

while(scanf("%d", &x) == 1){
sum +=x;
count++;
}

double avg;
if (count > 0){
avg = sum / (double)count;
} else{
avg = 0.0;
}

printf("%lld\n", count);
printf("%.2f\n", avg);

return 0;
}
