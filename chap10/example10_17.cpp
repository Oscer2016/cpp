/*************************************************************************
	> File Name: example10_17.cpp
	> Author: hp
	> Mail: hepan@xiyoulinux.org
	> Created Time: 2017年01月25日 星期三 14时57分41秒
 ************************************************************************/

#include <iostream>
#include <fstream>
#include <vector>
#include "Sales_data.h"
#include <algorithm>

using namespace std;

int main(int argc, char *argv[])
{
    ifstream in(argv[1]);
    if (!in) {
        cout << "打开输入文件失败!" << endl;
        exit(1);
    }

    vector<Sales_data> sds;
    Sales_data sd;
    while (read(in, sd)) {
        sds.push_back(sd);
    }

    sort(sds.begin(), sds.end(), [] (const Sales_data &lhs, const Sales_data &rhs) 
                                    { return lhs.isbn() < rhs.isbn(); });

    for (const auto &s : sds) {
        print(cout, s);
        cout << endl;
    }

    return 0;
}

