#include <iostream>
#include <array>
using namespace std;
struct myvector{
    double* data;
    int capacity;
    int size;
};
double arrayModSum(myvector v){
    double sum=0;
    for (int i=0; i < v.size; i++){
       v.data[i]=v.data[i]+1;
        sum = sum +v.data[i];
    }
    return sum;

}
void growMyVector (myvector& someVar){
    if (someVar.size == someVar.capacity){
        double *temp = new double [2*someVar.capacity];
        for (int i=0; i < someVar.capacity; i++){
            temp[i]= someVar.data[i];
        }
        delete [] someVar.data;
        someVar.capacity *=2;
        someVar.data = temp;
        temp = nullptr;
    
    }
}
int main(int argc, const char * argv[]) {
    array <double,10> arr;
    myvector vec1{&arr[0],arr.size(),arr.size()};
    for (int i =0;i<arr.size();i++){
        arr[i]=1.0;
    }
    cout << "the sum is: "<<arrayModSum(vec1)<<endl;
    growMyVector(vec1);
    cout << "after growth,the size is: "<<vec1.size<<endl;
    cout << "after growth,the capacity is:: "<<vec1.capacity<<endl;
    return 0;
}
