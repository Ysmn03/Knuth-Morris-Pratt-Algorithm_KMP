#include <iostream>
#include <vector>
#include<cstring>
#include<cstdio>
using namespace std;
#define ll long long
#define YES printf("YES\n")
#define NO printf("NO\n")

const int N = 100001;
char str[N],ans[N];

int main()
{
	scanf("%s", str);
	int len = strlen(str);
	vector<int>v(len,0);

	int i = 0, j = 1;
	while (j < len)
	{
		if (str[j] == str[i])
		{
			++i;
			v[j]=i;
			++j;
		}
		else
		{
			if (i > 0)
				i = v[i - 1];
			else
				++j;
		}
	}

	/*for (int i = 0; i < len; ++i)
		printf("%d\n", v[i]);*/

	if (v[len - 1] == 0)
		printf("");
	else
	{
		for (int i = 0; i < v[len-1]; ++i)
			ans[i] = str[i];

		printf("%s", ans);
	}
}
