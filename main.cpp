/* ZSTL */
#include <iostream>
#include <vector>
#include "test.h"

int main()
{
    ZTIME
        //testTemplate();
        for (int i = 0; i < 10000; i++) std::cout << i << "\n";
    testAB();
    //testIsPossbile();
    std::cout <<"Finish with " <<time.data() << "s\n";
	getchar();
}
