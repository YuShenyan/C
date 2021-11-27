#include <stdio.h>
int main() {
	int n, i, a[100], b[6] = {0, 0, 0, 0, 0, 0}, sum = 0;
	float ave;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
		sum += a[i];
	}
	printf("%.2f\n", (float)sum / n);
for(i=0;i<n;i++){
	if(a[i]>=0&&a[i]<=50)
	b[0]++;
	else if(a[i]>=51&&a[i]<=100)
	b[1]++;
	else if(a[i]>=101&&a[i]<=150)
	b[2]++;
	else if(a[i]>=151&&a[i]<=200)
	b[3]++;
	else if(a[i]>=201&&a[i]<=300)
	b[4]++;
	else
	b[5]++;}
	printf("%d %d %d %d %d %d ",b[0],b[1],b[2],b[3],b[4],b[5]);
	return 0;
}