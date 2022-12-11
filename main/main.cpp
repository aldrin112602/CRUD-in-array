#include <iostream>
#include <string>
using namespace std;
int main() {
   int size;
   cout << "Enter the Size: " << endl;
   cin >> size;
   string arr[size];
   cout << "\nEnter " << size << " Array Elements: " << endl;
   for(int i = 0; i < size; i++) cin >> arr[i];
   int found = 0;
   string elem;
   cout << "\nEnter Element to Delete: ";
   cin >> elem;
   for(int i = 0; i < size; i++) {
       if(elem == arr[i]) {
             arr[i] = "";
             found = 1;
             break;
           }
    }
    
    if(found == 1) {
      cout<<"\n\nElement Deleted Successfully!" << endl;
     cout << "\nThe New Array is: " << endl;
    for(int i = 0; i < size; i++) {
        if(arr[i] != "") cout << arr[i] << "  ";
    }
    int index;
    string insert;
    cout << "\n\nEnter Element to Insert: ";
    cin >> insert;
    
    cout << "\nAt what Position?" << endl;
    cin >> index;
    
    arr[(index - 1)] = insert;
    
    cout << "\nThe New Array is: " << endl;
    for(int i = 0; i < size; i++) cout << arr[i] << "  ";
    } else {
        cout<<"\n\nElement doesn't found in the Array!" << endl;
    }
   return 0; 
}
