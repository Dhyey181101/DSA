void selectionSort(vector<int>&arr) { 
    for (int i=0;i<=arr.size()-2;i++){
        int min=i;
        for (int j=i+1;j<=arr.size()-1;j++){
            if (arr[j]<arr[min]){
                min=j;
            }
        }
        int temp;
        temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
}
