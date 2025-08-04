
#include <iostream>
using namespace std;

void bubble_sort(int arr[], int n){
    for(int i = 0; i < n + 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void selection_sort(int arr[], int n){
    for(int i = 0; i < n - 1;i++){
        int si = i;
        for (int j = i + 1; j < n; j++){
            if(arr[j] < arr[si]){
                si = j;
            }
        }
        swap(arr[i], arr[si]);
    }
}

void insertion_sort(int arr[], int n){
    for(int i = 1; i< n; i++){
        curr = arr[i];
        prev = i - 1;
        while(prev >= 0 && arr[prev] > curr){
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev + 1] = curr;
    }
}

int swap(int a, int b){
    int temp;
    a = temp;
    a = b;
    b = temp;
    return a,b;
}

void printar(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << "";
    }
}

int main()
{
    int arr[5] = {5,1,4,3,2};
    int n = 5;
    /*bubble_sort(arr, n);*/
    selection_sort(arr,n);
    printar(arr, n);
    
}
