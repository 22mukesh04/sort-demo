
//  Problem 1 SELECTION SORT 
//         We have to arrange an array in increasing order 
//         if user enters 
//          {51,34,26,3,24,45} --> {3,24,26,34,45,51}


/*

void selection_sort(int arr[],int n){

    for(int i = 0; i < n-1 ; i++){
        int min = i;
        for(int j = i; j < n ; j++){
            if (arr[j] < arr[min]){
                min = j;
            }
        }
            cout<<"\nMinimum element found at "<<min<<" position which is "<<arr[min]<<"\n";
            //  Now swapping the elements
            cout<<" Now swapping "<<arr[i]<<" with "<<arr[min]<<"\n";
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
            cout<<"     Now array is : ";
            for(int i = 0 ; i < n ; i++) cout<<arr[i]<<" ";
    }

}
*/


# include<iostream>
using namespace std;

void selectionSort(int arr[],int n){
    for(int i = 0 ; i < n -1 ; i++){
        int minIndex = i;
        for(int j = i + 1 ; j < n ; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        if(minIndex != i){
            swap(arr[i],arr[minIndex]);
        }
    }
}

// void bubbleSort(int arr[],int n){
//     for(int i = 0 ; i < n - 1 ; i++){
//         int srt = 0;
//         for(int j = n ; j > i ; j--){
//             if (arr[j] < arr[j-1]){
//                 srt = 1;
//                 swap(arr[j],arr[j-1]);
//             }
//         }
//         if(srt == 0){
//             cout<<"\n Given array is already sorted \n ";
//             break;
//         }
//     }
// }
void bubbleSort(int arr[],int n){
    for(int i = n-1 ; i >= 1 ; i--){
        for(int j = 0 ; j <= i-1 ; j++){
            if( arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
void insertionSort(int arr[],int n){
    for(int i = 1 ; i < n ; i++){
        int temp = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > temp){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
}

int main(){
    int n;
    cout<<"Enter the size of an array you will give : " ;
    cin>>n ;
    int arr[n];
    for(int i = 0 ; i < n ; i++) cin>>arr[i];
    cout<<"\n Entered array is : ";

    for(int i = 0 ; i < n ; i++) cout<<arr[i]<<" ";

    // selectionSort(arr,n);
    // insertionSort(arr,n);
    bubbleSort(arr,n);

    cout<<"\n Sorted array is : ";

    for(int i = 0 ; i < n ; i++) cout<<arr[i]<<" ";
    return 0;


}
