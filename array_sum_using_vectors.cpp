#include<iostream>
#include<vector>

using namespace std;

int main(){

int size;
    std::cout <<"Enter desired size of the array";
    std::cin >> size;
    std::vector<int> array(size);
    int value;
    for (int i = 0; i < size; i++)
    {
     cout << "enter the element " << i+1 << endl;
     cin>> value;
     array.push_back(value);
    }
    
int r;
    for (int i = 0; i < array.size(); i++)
    {
        /* code */r =array[i]+r;
    }
    
cout << "sum is " << r << endl;



    return 0;
}