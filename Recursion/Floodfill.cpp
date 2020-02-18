#include <iostream>
using namespace std;

const int M = 100, N = 100;
int arr[M][N] = {0};
int m, n;
int oldColor, newColor;

void draw(int x, int y)
{
if (x >= m || x < 0 || y >= n || y < 0)
return;
if (arr[x][y] == oldColor)
{
arr[x][y] = newColor;
draw(x, y + 1); // right
draw(x, y - 1); // left
draw(x + 1, y); // bottom
draw(x - 1, y); // top
}
}

int main()
{
int tc;
cin >> tc;
while (tc--)
{
int x, y;
cin >> m >> n;
for (int i = 0; i < m; i++)
for (int j = 0; j < n; j++)
cin >> arr[i][j];
cin >> x >> y >> newColor;
oldColor = arr[x][y];
draw(x, y);
for (int i = 0; i < m; i++)
for (int j = 0; j < n; j++)
cout << arr[i][j] << " ";
cout << endl;
}
return 0;
}