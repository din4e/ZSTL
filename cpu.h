#pragma once
#include <iostream>
#include <ctime>
#include <cmath>
#include <cstdlib>
#include <windows.h>
using namespace std;

int cpu()
{
	const float PI = 3.1416;
	const int count = 180; //时间数组的个数     
	int idle[count];
	int busy[count];
	float delta = 2 * PI / count;
	float alpha = 0;
	/*
	   给循环和sleep各生成一列时间数组
	   busy按照正弦规律变化，busy和对应的sleep的和不变
	 */
	for (int i = 0; i < count; i++)
	{
		busy[i] = count * (sin(alpha) + 1) / 2;
		idle[i] = count - busy[i];
		alpha = alpha + delta;
		cout << busy[i] << "---" << idle[i] << endl;
	}

	int j = 0;
	while (true)
	{
		j = j % count;
		const int st_time = clock(); //起始时间     
		while ((clock() - st_time) < busy[j]);
		Sleep(idle[j]);
		j++;
	}
	system("PAUSE");
	return 0;
}
