#include <iostream>
#include "NumberList.h"

int main()
{
    NumberList list1;
    list1.Init();

    list1.Add(9);
    list1.Add(8);
    list1.Add(3);
    list1.Add(5);

    list1.Print();

    list1.Sort();

    list1.Print();
    return 0;
}

