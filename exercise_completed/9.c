/*������������
������
21/10/14
*/
#include <stdio.h>

int main() {
	//��������
	float a, b, PI, c, d;
	scanf("%f%f", & a, & b);
	PI = 3.1415926;
	c = PI * a * a * a  * 4 / 3 * 7.86  / 8000;
	d = b * b * b * PI * 4 / 3 * 19.3 / 8000;
	printf("%.3f %.3f", c, d);
	return 0;
}