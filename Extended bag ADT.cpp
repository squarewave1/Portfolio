

#include "pch.h"
#include<iostream>
#include<string>
using namespace std;
template<class B>
class ArrayBag
{
	B *array;
	int no_elements;
public:
	ArrayBag()
	{
		array = NULL;
		no_elements = 0;
	}
	ArrayBag(int size)
	{
		no_elements = 0;
		array = new B[size];
	}
	void add(B num)
	{
		array[no_elements++] = num;
	}
	int & operator[](int index)
	{
		return array[index];
	}
	ArrayBag<B> unionBag(ArrayBag & object1, ArrayBag & object2)
	{
		B *array1 = new B[object1.no_elements + object2.no_elements];
		int count = 0, equal;
		for (int i = 0; i < object1.get_no_elements(); i++)
		{
			array1[count++] = object1[i];
		}
		for (int i = 0; i < object2.get_no_elements(); i++)
		{
			for (int k = 0; k < object2.get_no_elements(); k++)
			{
				if (object2[i] == object1[k]) // skip adding to arr1 as already added
				{
					equal = 1;
					break;
				}
				else
				{
					equal = 0;
				}
			}
			//element of obj2[i] not equal to any other element in obj1 ,hence add to arr1
			if (!equal)
				array1[count++] = object2[i];
			equal = 0;
		}
		//now declare a object to return with new array arr1 copied
		ArrayBag<B> ret(count);
		ret.no_elements = count;
		for (int i = 0; i < count; i++)
		{
			ret[i] = array1[i];
		}
		return ret;
	}
	ArrayBag<B> intersectBag(ArrayBag & object1, ArrayBag & object2)
	{
		B *array1 = new B[object1.no_elements + object2.no_elements];
		int count = 0, equal = 0;
		for (int i = 0; i < object1.get_no_elements(); i++)
		{
			for (int k = 0; k < object2.get_no_elements(); k++)
			{
				if (object1[i] != object2[k])
				{
					continue;
				}
				else
				{
					equal = 1;
				}
			}
			if (equal)
				array1[count++] = object1[i];
			equal = 0;
		}
		ArrayBag<B> ret(count);
		ret.no_elements = count;
		for (int i = 0; i < count; i++)
		{
			ret[i] = array1[i];
		}
		return ret;
	}
	ArrayBag<B> differenceBag(ArrayBag & object1, ArrayBag & object2)
	{
		B *array1 = new B[object1.no_elements + object2.no_elements];
		int count = 0, equal = 0;
		for (int i = 0; i < object1.get_no_elements(); i++)
		{
			for (int k = 0; k < object2.get_no_elements(); k++)
			{
				if (object1[i] == object2[k])
				{
					equal = 1;
					continue;
				}
			}
			if (!equal)
				array1[count++] = object1[i];
			equal = 0;
		}
		ArrayBag<B> ret(count);
		ret.no_elements = count;
		for (int i = 0; i < count; i++)
		{
			ret[i] = array1[i];
		}
		return ret;
	}
	int get_no_elements()
	{
		return no_elements;
	}
};


int main()
{
	ArrayBag<int> bag1(4), bag2(5), bag3(6);
	//add elements to bag1 , bag2 and bag3
	for (int i = 0; i < 4; i++)
	{
		bag1.add(i + 2);
	}
	for (int i = 0; i < 5; i++)
	{
		bag2.add(i);
	}
	for (int i = 0; i < 6; i++)
	{
		bag3.add(i + 1);
	}
	cout << "Bag 1 contains: ";
	for (int i = 0; i < 4; i++)
	{
		cout << bag1[i] << " ";
	}
	cout << endl;
	cout << "Bag 2 contains: ";
	for (int i = 0; i < 5; i++)
	{
		cout << bag2[i] << " ";
	}
	cout << endl;
	cout << "Bag 3 contains: ";
	for (int i = 0; i < 6; i++)
	{
		cout << bag3[i] << " ";
	}
	cout << endl;
	cout << "Union of bag 1 and bag 2: " << endl;
	ArrayBag<int> result = result.unionBag(bag1, bag2);
	for (int i = 0; i < result.get_no_elements(); i++)
	{
		cout << result[i] << " ";
	}
	cout << endl;
	cout << "Union of bag 2 and bag 3 is: " << endl;
	result = result.unionBag(bag2, bag3);
	for (int i = 0; i < result.get_no_elements(); i++)
	{
		cout << result[i] << " ";
	}
	cout << endl;
	cout << "Intersect of bag 1 and bag 3 is: " << endl;
	result = result.intersectBag(bag1, bag3);
	for (int i = 0; i < result.get_no_elements(); i++)
	{
		cout << result[i] << " ";
	}
	cout << endl;
	cout << "Intersect of bag 2 and bag 3 is: " << endl;
	result = result.intersectBag(bag2, bag3);
	for (int i = 0; i < result.get_no_elements(); i++)
	{
		cout << result[i] << " ";
	}
	cout << endl;
	cout << "Difference of bag 2 and bag 3 is: " << endl;
	result = result.differenceBag(bag2, bag3);
	for (int i = 0; i < result.get_no_elements(); i++)
	{
		cout << result[i] << " ";
	}
	cout << endl;
	cout << "Difference of bag 1 and bag 2 is: " << endl;
	result = result.differenceBag(bag1, bag2);
	for (int i = 0; i < result.get_no_elements(); i++)
	{
		cout << result[i] << " ";
	}
	cout << endl;
	return system("pause");
}