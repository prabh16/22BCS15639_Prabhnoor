class solution{
public: 
  void insertionSort(vector<int>& arr) {
    int n = arr.size();
        for(int i=1; i<n; i++){
            for(int j=i; j>0; j--){
                if(arr[j] < arr[j-1]){
                swap(arr[j], arr[j-1]);
            }
            }
            
        }
    }
};
