 #include<iostream>
 using namespace std;

//  void move(int arr[], int size){
//         for(int i=0; i<size ;)
    
//  }

 int main(){

    cout << "Enter the size of the array : " ;
    int size;
    cin >> size ;
    int A[size] ;
    cout << "Enter the elements of the array : " ;
    for(int i=0; i<size ; i++){
        cin >> A[i] ;
    }
    int k;

    int j = 0;
    for (int i = 0; i < size; i++)
    {
        if(A[i]<0){
            if(i!=j){
                k=A[i] ;
                A[i]=A[j];
                A[j]=k;
                j++ ;
            }
        }
    }
    //printing array
    cout << "The new array is : " ;
    for(int t=0; t<size; t++){
        cout << A[t] << " " ;
    }

    return 0;
}