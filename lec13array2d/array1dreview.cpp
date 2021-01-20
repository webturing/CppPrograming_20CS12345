#include <bits/stdc++.h>

using namespace std;

int main() {
    int a[] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 0};
    int n = sizeof(a) / sizeof(a[0]);  //这种计算数组长度方法不能用在函数参数中
    int Sum = 0;                       //数组求和
    for (int i = 0; i < n; i++) {
        Sum += a[i];
    }
    cout << "Sum=" << Sum << endl;
    int Max = INT_MIN;  // Min=INT_MAX, //数组求最大（小）值，注意初值
    for (int i = 0; i < n; i++) {
        if (a[i] > Max) Max = a[i];
    }
    cout << "Max=" << Max << endl;
    int key = 7;   //数组线性查找第一个出现关键词的位置
    int pos = -1;  // 先假设没有找到，
    for (int i = 0; i < n; i++) {
        if (a[i] == key) {  //找到则更新pos后退出循环
            pos = i;
            break;
        }
    }
    if (pos >= 0) {
        cout << key << " was found at first position:" << pos << endl;
    } else {
        cout << "NOT Found!" << endl;
    }
    sort(a, a + n);  //数组排序（默认是非降序），调用标注库
    // sort(a, a + n, greater<int>());  //排降序
    // sort(a, a + n, less<int>());  //这个和29行完全等价，29行省略了默认参数
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    //其他API
    memset(a, 0, sizeof(a));  //按字节工作，对于非字节（符）数组 只能置0和-1
    fill(a, a + n, 1);  //非常推荐，可以把a[0]~a[n-1]都置为val
    reverse(a, a + n);  //数组反转

    return 0;
}