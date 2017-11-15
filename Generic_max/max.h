#pragma once
template <typename T>
T max(T& item1, T& item2, T& item3)
{
	T largest;
	if (item1 < item2)
	{
		largest = item2 > item3 ? item2 : item3;
	}
	else
	{
		largest = item1 > item3 ? item1 : item3;
	}
	return largest;
}
