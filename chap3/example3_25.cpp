#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
    // 该vector对象记录各分数段的人数，初始值均为0
    vector<unsigned> vUS(11);
    auto it = vUS.begin();
    int iVal;
    cout << "请输入一组成绩(0~100): " << endl;
    while (cin >> iVal) {
        if (iVal < 101) {
            ++*(it + iVal / 10);
        }
    }
    cout << "您总计输入了 " << vUS.size() << " 个成绩" << endl;
    cout << "各分数段的人数分布是（成绩从低到高）：" << endl;
    // 利用迭代器遍历vUS的元素并逐个输出
    for (it = vUS.begin(); it != vUS.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
    
    return 0;
}

