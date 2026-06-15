#include <iostream>
using namespace std;
int factorial(int a){
    int fact = 1;
    for(int i=1;i<=a;i++){
        fact*=i;
    }
    return fact;
}

int main() {
    cout<<factorial(6);

    return 0;
}



#include <iostream>
using namespace std;
int binarynumber(int a){
    int ans=0;
    int pow=1; 
    while( a > 0) {
        int rem = a%2;
        a = a/2;
        ans = ans + (pow*rem);
        pow = pow*10;

    }
    return ans;
}
    

int main() {
    cout<<binarynumber(8);
    

    return 0;
}



#include <iostream>
using namespace std;
int bintodec(int n){
    int ans=0;
    int pow= 1;
    while (n > 0){
        int rem = n%10;
        ans = (rem*pow)+ans;
        n = n/10;
        pow = pow*2;
        

    
    }
    return ans;
}
int main (){
    cout<<bintodec(1001);
    return 0;
}


LINIAR SERCH ALGORITHME

# include<iostream>
using namespace std;
int linsech(int arr[],int size,int target){
    for(int i=0;i<size;i++){
       if(arr[i]==target){
        return i;
       }
    }
    return -1;
       
}
int main (){
    int arr[]={1,3,4,5,7,9,43,56,23,54};
    int size=10;
    int target=9;
    cout<<linsech(arr,size,target)<<endl;
    return 0;
}



ARRAY REVERSE


#include<iostream>
using namespace std;

int main (){
    int arr[7] = {4,3,5,6,7,89,32};

    for(int i = 6; i >= 0; i--){
        cout << arr[i] << endl;
    }

    return 0;
}


caluculate sum and product of all numbers of arr



#include<iostream>
using namespace std;
int sumandproductarr(int arr[], int size){
    int sum = 0;
    int pro = 1;
    for(int i=0;i<size;i++){
        sum = sum + arr[i];
        pro = pro*arr[i];

        

    }
    cout<<"the sum of arr is "<<sum<<" "<<endl<<"the product of arr is "<<pro;
    
    
}
int main (){
    int arr[] = {4,6,7,5,3,2,9,1};
    int size = 8;
    cout<<"the sum of arr is "<<sumandproductarr(arr,8);
    return 0;






BOILERPLATE CODE





#include<iostream>
using namespace std;
int main (){

    return 0;
}



VECTOR



#include<iostream>
#include<vector>
using namespace std;
int main (){
    int ans = 0;
    vector<int> vec = {1,1,2,2,3,3,4,4,5};
    for(int val : vec){
         ans = ans ^ val;

    }
    cout<<ans<<endl
    return 0;
}









    
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {1,2,3,4,5,6,7,8,9};
    int target = 7;

    int n = arr.size();

    for(int i = 0; i < n; i++){                                                       // PAIR SUM FIND                      
        for(int j = i + 1; j < n; j++){
            if(arr[i] + arr[j] == target){
                cout << "(" << arr[i] << ", " << arr[j] << ")" << endl;
            }
        }
    }

    return 0;
}













                                                                                   optimize technique
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main (){
    
    vector<int> arr = {1,1,2,3,7,7,7,7,8,8,8,9,9,9,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4};
    int n = arr.size();

    sort(arr.begin(), arr.end());

    int freq = 1;

    for(int i = 1; i < n; i++){
        if(arr[i] == arr[i-1]){
            freq++;
        }
        else{
            freq = 1;
        }

        if(freq > n/2){
            cout << "Majority element = " << arr[i];
            return 0;
        }
    }

    cout << "No majority element";

    return 0;
}





















#include <iostream>
using namespace std;

int main() {
    // Your code starts here

   int a = 28;
   int* ptr = &a;                                                                   // pointer
   int** ptr2 = &ptr;

   cout<<&a<<endl;
   cout<<ptr<<endl;
   cout<<**ptr2<<endl;
   cout<<*ptr<<endl;
   cout<<&a<<endl;
    return 0;
}


 











#include<iostream>
using namespace std;

int powert(int val, int pow){
    int ans = 1;
    for(int i = 1; i <= pow; i++){                                                             // find pow with no
        ans = ans * val;
    }
    return ans;
}

int main (){
    int result = powert(3,9);
    cout << result;
    return 0;
}























    












#include<iostream>                                                                        // maxwater problem
#include<vector>
#include<algorithm>
using namespace std;

int maxArea(vector<int>& height) {
    int ans = 0;
    for(int i = 0; i < height.size(); i++) {
        for(int j = i + 1; j < height.size(); j++) {
            int wt = j - i;
            int ht = min(height[i], height[j]);
            int area = wt * ht;
            ans = max(ans, area);
        }
    }
    return ans;
}

int main() {
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    cout << "Max Area: " << maxArea(height);
    return 0;
}



int maxArea(vector<int>& height) {
        int lp = 0;
        int rp = height.size()-1;
        int ans = 0;
        while(lp<rp){                                                             //water conteiner with pointer
            int wt = rp-lp;                                                       // leetcode = 11
            int ht = min(height[lp],height[rp]);
            int maxwater = wt*ht;
            ans = max(ans,maxwater);
            height[lp]<height[rp]?lp++:rp--;
        }
        return ans;












#include<iostream>
#include<vector>
using namespace std;
int binarysearch(vector<int> arr, int target){
    int n = arr.size();
    int st= 0;
    int ed=n-1;                                                                     //BINARY SEARCH
    while(st <= ed){
        int mid = (st + ed)/2;
        if(target < arr[mid]){
            ed = mid-1;
        }else if (target > arr[mid]){
            st = mid +1;
            
        }else{
            return mid;
        }
        
    }
    return -1;
}
int main (){
    vector<int> arr1 = {-1,0,1,2,3,4,5,6,7,8,9};
    int target1 = 6;
    cout<<"your target is => "<<binarysearch(arr1,target1)<<endl;
    return 0;
}



































class Solution(object):
    def peakIndexInMountainArray(self, arr):
      st = 0                                                                                 peak montain problem
                                                                                               leetcode 852
      end = len(arr)-1

      
      
      while st < end:
        mid = st + (end-st//2)
        if(arr[mid-1] < arr[mid] > arr[mid+1]):
            return mid
        elif(arr[mid-1] < arr[mid]):
            st = mid +1
        else:
            end = mid - 1















                                                                                            bookallocation problem 


#include<iostream>
using namespace std;                                                                       // bubblesort algorithme

void bubbleSort(int arr[], int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j] < arr[j+1]){   // for descending order
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int issum(int arr[], int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    return sum;
}

int main(){
    int n = 4;
    int arr[] = {2, 3, 1, 5};

    bubbleSort(arr, n);

    cout << "Sorted array: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    cout << endl;

    int total = issum(arr, n);
    cout << "Sum = " << total;

    return 0;
}







class Solution {                                                            // dnf problem
public:                                                                     // leetcode 75
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int low = 0;
        int mid = 0;
        int high = n-1;
        while(mid <= high){
            if(nums[mid]==0){
                swap(nums[mid],nums[low]);
                mid++; low++;
            }
            else if(nums[mid]==1){
                mid++;
            }
            else{
                swap(nums[mid],nums[high]);
                high--;
            }    
             
            
        }
    }
};















lass Solution {                                                              // reverse string not wordc
public:                                                                       // leetcode 151
    string reverseWords(string s) {
        int n = s.length();
        string ans = "";
        reverse(s.begin(),s.end());
        for(int i =0; i<n; i++){
            string word = "";
            while(i < n && s[i] != ' '){
                word += s[i];
                i++;

            }
            reverse(word.begin(),word.end());
            if(word.length() > 0){
                ans += " " + word;
            }
        }
        return s.substr(1);
        
    }
};














class Solution {                                                         Sieve of Eratosthenes approch
public:                                                                  leetcode   204
    int countPrimes(int n) {
        vector<bool>isprime(n+1,true);
       int count = 0;
        for(int i =2; i<n; i++){
            if(isprime[i]){
                count++;

                for(int j = i*2; j<n; j = j+i){
                    isprime[i]=false;
                }
            }

        }
        return count;
        
    }
};











#include<iostream>>                                                   // practice all operation , 34
using namespace std;
int main (){
  int matrix[3][4]={{1,4,5,3},{7,4,9,3},{6,4,5,2}};
  int row = 3;
  int col = 4;
  for(int i = 0; i < row; i++){
    for(int j = 0; j < col; j++){
      cout<<matrix[i][j]<<" ";
    }
    cout<<endl;
  }
     
}


















class Solution {                                                            // 2d array search 
public:                                                                     // leetcod 74
    bool compareto(vector<vector<int>>& matrix, int target, int row){
        int n = matrix[0].size();
        int sm = 0;
        int em = n-1;
        while(sm <= em){
            int mid1 = sm + (em -sm)/2;
            if(target == matrix[row][mid1]){
                return true;
        }else if(target >= matrix[row][mid1] ){
            sm = mid1 + 1;

        }else{
            em = mid1 - 1;
        }
    }  return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int sr = 0;
        int er = m-1;
        while(sr <= er){
           int mid = sr + (er-sr)/2;
            if(target >= matrix[mid][0] && target <= matrix[mid][n-1]){
                return compareto( matrix,  target, mid);
            }else if(target > matrix[mid][n-1]){
                sr = mid + 1;
            }else{
                er = mid - 1;
            }

        }
        return false;

        
    } 
};





#include<iostream>
using namespace std;
int main(){
  cout<<" hello world "<<endl;
}