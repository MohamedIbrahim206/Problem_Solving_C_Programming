#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main() {
	int xa, ya, xb, yb,c,high,low,y=0;
	scanf_s("%d %d %d %d", &xa, &ya, &xb, &yb);
	if (ya > yb) {
		c = yb;
	}
	else {
		c = ya;
	}
	//printf("c= %d \n ", c);
	if (xa > xb) {
		high = xa;
		low = xb;
	}
	else {
		high = xb;
		low = xa;
	}
	//printf("high= %d low= %d \n ", high,low);

	int n=0; // The numbers of radiator
	scanf_s("%d", &n);
	int xi=0, yi=0, ri=0;
	int result = 0;
	int arr_size = (2 * (abs(ya - yb) + 1)) + (2 * (abs(xa - xb) - 1));
	int arr_size2 = (abs(xa - xb) + 1);
	//printf("arr_size= %d \n ", arr_size2);
	int count = 0;
	int arr[1000][3];
	int h = low;//2
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			scanf_s("%d", &arr[i][j]);

		}

	}
		int r = c;
		int flag = 0;
		for (int j = 0; j < arr_size2; j++) //0
		{
			if (count == 0) {
				for (int k = 0; k < (abs(ya - yb) + 1); k++)
				{
					for (int i = 0; i < n; i++)
					{
							double a = (double)sqrt(pow(low - arr[i][0], 2) + pow(arr[i][1] - c, 2));
							int b= (ceil)(a);
							//printf("b= %d \n", b);
							if (b<=arr[i][2]) {
								break;

						}
							else {
								flag++;
							}

					}
					//printf("flag = %d \n", flag);
					//printf("(%d,%d) \n", low, c);
					if (flag == n) {
						result++;
					}
					flag = 0;
					c++;
				}
				//printf("result1 = %d \n", result);

			}
			else if (count == (abs(xa - xb))) {
				flag = 0;
				for (int k = 0; k < (abs(ya - yb) + 1); k++)
				{
					for (int i = 0; i < n; i++)
					{
						double a = (double)sqrt(pow(high- arr[i][0], 2) + pow(arr[i][1] - c, 2));
						int b = (ceil)(a);
						//printf("b= %d \n", b);
						if (b <= arr[i][2]) {
							break;
						}
						else {
							flag++;
						}

					}
					//printf("flag = %d \n", flag);
					//printf("(%d,%d) \n", high, c);
					if (flag == n) {
						result++;
					}
					flag = 0;
					c++;
				}
				//printf("result2 = %d \n", result);

			}
			else {
				h = h + 1;//3
				flag = 0;
				//printf("%d \n", abs(xa - xb) - 1);
				//for (int m = 0; m < (abs(xa - xb) - 1); m++)
				//{
					y++;
					for (int j = 0; j < 2; j++)
					{
						if (j == 0) {
							for (int i = 0; i < n; i++)
							{
								double a = (double)sqrt(pow(h - arr[i][0], 2) + pow(arr[i][1] - ya, 2));
								int b = (ceil)(a);
								//printf("b= %d \n", b);
								if (b <= arr[i][2]) {
									break;
								}
								else {
									flag++;
								}
							}
							//printf("flag1 = %d \n", flag);
							//printf("(%d,%d) \n", h, ya);
							if (flag == n) {
								result++;
							}
							flag = 0;
						}
						else {
							for (int i = 0; i < n; i++)
							{
								double a =(double) sqrt(pow(h - arr[i][0], 2) + pow(arr[i][1] - yb, 2));
								int b = (ceil)(a);
								//printf("b= %d \n", b);
								if (b <= arr[i][2]) {
									break;
								}
								else {
									flag++;
								}
							}
							if (flag == n) {
								result++;
							}
							//printf("flag2 = %d \n", flag);
							//printf("(%d,%d) \n", h, yb);
							flag = 0;
						}
					}
					//printf("h= %d \n", h);
					//h++;
				//}
			}
			count++;
			c = r;

		}

	printf("%d", result);

	return 0;
}
