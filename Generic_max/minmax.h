#pragma once

class minMax
{
private:
	bool action;

public:
	minMax(bool min)
	{
		action = min ? true : false;
	}

	template<typename T>
	T operator() (T& item1, T& item2, T& item3)
	{
		return action ? min(item1, item2, item3) : max(item1, item2, item3);
	}
};

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

template <typename T>
T min(T& item1, T& item2, T& item3)
{
	T smallest;
	if (item1 > item2)
	{
		smallest = item2 < item3 ? item2 : item3;
	}
	else
	{
		smallest = item1 < item3 ? item1 : item3;
	}
	return smallest;
}
template <typename T, typename compare>
T findMinMax(T& item1, T& item2, T& item3, compare func)
{
	return func(item1, item2, item3);
}
