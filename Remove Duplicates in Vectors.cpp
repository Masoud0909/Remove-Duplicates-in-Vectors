/*a function that removes duplicates from a vector of integers using the following
idea: for each element of the vector, look at all the elements after it, and remove any element that is
equal(hint : you can remove an element at position i either by copying the last element into it, then
	popping back, or by investigating the use of the vector erase() function).Incorporate the function
	in a program that creates a vector containing 10 randomly generated integers ranging between 1 and
	20, then removes the duplicates*/

#include <iostream>
#include <vector>

using namespace std;

vector <int> create() {
	vector <int> list;
	for (int i = 0; i < 10; i++) {
		list.push_back(rand() % 20 + 1);
	}
	return list;
}
void print(const vector <int>& list) {
	for (int i = 0; i < list.size(); i++) {
		cout << list[i] <<" ";
	}
	cout << endl;
}
//Function to remove duplicates
void remove_dup(vector <int>& list)
{
	for (int i = 1; i < list.size(); i++) {
		for (int j = i + 1; j < list.size(); j++) {
			if (list[i] == list[j]) {
				list.erase(list.begin() + j);
				j--;
			}
		}
	}
}
int main()
{
	vector<int>list = create();
	print(list);
	remove_dup(list);
	print(list);

}

