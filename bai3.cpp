// Bai 3
//  Suppose the marks obtained by all students are
// stored in a two-dimensional array. Each row records a student’s
// marks for five tests. For example, the following array stores the
// test marks for eight students. Write a program that displays
// students and the total marks they obtained in five tests, in
// decreasing order of the total marks.

#include <iostream>
using namespace std;
int main()
{
    int soLuong = 2;
    cin >> soLuong;

    int a[soLuong][6];
    for (int i = 0; i < soLuong; i++)
    {
        int sum = 0;
        for (int j = 0; j < 5; j++)
        {
            cin >> a[i][j];
            sum += a[i][j];
        }
        a[i][5] = sum;
    }

    for (int i = 0; i < soLuong; i++)
    {
        int max_value = 0, max_idx;
        for (int j = 0; j < soLuong; j++)
        {
            if (a[j][5] > max_value)
            {
                max_value = a[j][5];
                max_idx = j;
            }
        }
        cout << "Student " << max_idx << ": ";
        for (int j = 0; j < 6; j++)
            cout << a[max_idx][j] << "  ";
        cout << endl;
        a[max_idx][5] = 0;
    }
}