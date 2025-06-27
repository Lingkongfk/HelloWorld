#include <iostream>
using namespace std;


//sortdev·ÖÖ§×¢ÊÍ
void sortdev(int a, int b) {
    return a > b;
}


void sort(int arr[],int size){

    for (int i = 0;i < size-1;i++) {
        for (int j = 0;j < size - i - 1;j++) {
            if (arr[j + 1] < arr[j]) {
                swap(arr[j + 1], arr[j]);
            }
        }
    }

}

int main()
{
    int arr[] = {1,23,546,756,86,54};
    int size = sizeof(arr) / sizeof(arr[0]);
    sort(arr,size);

    for (int i = 0;i < size;i++) cout << arr[i] << " ";
    return 0;
}

