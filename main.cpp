#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    int i, j, m, n, **A, **B, i_min=0;
    cout << "m= n=";
    cin >> m >> n;

    A = new int *[m];
    for (i=0; i<m; i++)
        A[i] = new int[n];

    cout << "Matrica A:" << endl;
    for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
        {
        A[i][j] = rand()%10 - 3;
        cout << A[i][j] << "\t";
        }
        cout << endl;
    }
cout << "\v" << endl;

  for (i=0; i<m; i++)
  {
     for (j=0; j<n; j++)
     {
            if (A[i][j] < i_min)
{
                i_min = A[i][j];
     for (j=0; j<n; j++)
     {
               A[i][j] = i_min * A[i][j];
     }
  }
                i_min=0;
}
  }
 for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
        {
 cout << A[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}
