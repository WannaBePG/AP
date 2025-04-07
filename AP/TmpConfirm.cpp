// 簡単な疎通確認
#include <iostream>
#include "SetTheory.h"

int main()
{
    std::set<int> sets{ 1,2,3 };
    SetTheory setTheory{ sets };
    setTheory.displayPowerSet();
    setTheory.displayTrueSet();
}