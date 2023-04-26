#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
    int soLuong;
    cin >> soLuong;                         //nhập vào số lượng điểm cần xét
    float x, y;
    float a[soLuong][2];                    // tạo mảng 2 chiều gồm n hàng, 2 cột(x, y)
    for (int i = 0; i < soLuong; i++)       // nhập vào mảng 2 chiều
    {
        cin >> x;
        cin >> y;
        a[i][0] = x, a[i][1] = y;
    }
    float min_d = 1e10;
    for (int i = 0; i < soLuong; i++)       // tìm min
    {
        for (int j = i + 1; j < soLuong; j++)
        {
            x = pow((a[j][0] - a[i][0]), 2);
            y = pow((a[j][1] - a[i][1]), 2);
            float d = sqrt(x + y);
            if (d < min_d)                  // nếu bé hơn min thì gán min = d
                min_d = d;
        }
    }
    cout << setprecision(4) << fixed << min_d;  // lấy 4 số sau dấu phẩy
