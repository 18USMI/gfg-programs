int largest(int arr[], int n) {
    // Code Here
    int max = arr[0];
    for (int i = 1; i < n; i++){
        if (arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

//int main() {
 //   int n;
 //   scanf("%d" , &n);
  //  int arr[n];

//    for (int i = 0; i < n; i++) {
  //      scanf("%d", &arr[i]);
    //}
    
    //printf("%d\n", largest(arr, n));
//    return 0;
//}