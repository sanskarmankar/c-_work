#include <iostream>
#include <string.h>
using namespace std;
void LCS(char *S1, char *S2, int m, int n)
{
int table[m + 1][n + 1];
for (int i = 0; i <= m; i++)
{
for (int j = 0; j <= n; j++)
{
if (i == 0 || j == 0)
table[i][j] = 0;
else if (S1[i - 1] == S2[j - 1])
table[i][j] = table[i - 1][j - 1] + 1;
else
table[i][j] = max(table[i - 1][j], table[i][j - 1]);
}
}
int index = table[m][n];
char LCS[index + 1];
LCS[index] = '\0';
int i = m, j = n;
while (i > 0 && j > 0)
{
if (S1[i - 1] == S2[j - 1])
{
LCS[index - 1] = S1[i - 1];
i--;
j--;
index--;
}
else if (table[i - 1][j] > table[i][j - 1])
i--;
else
j--;
}
cout << "S1 : " << S1 << "\nS2 : " << S2 << "\nLCS: " << LCS << "\n";
}
int main()
{
char S1[] = "XYYZ";
char S2[] = "YTSX";
int m = strlen(S1);
int n = strlen(S2);
LCS(S1, S2, m, n);
}
