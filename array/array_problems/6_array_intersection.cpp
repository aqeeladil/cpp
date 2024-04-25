
//https://www.codingninjas.com/studio/problems/intersection-of-2-arrays_1082149


#include<vector>
using namespace std;

//SOLUTION_1

vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m){

    vector<int> ans;

    for (int i=0; i<n; i++){
        int element = arr1[i];

        for (int j=0; j<m; j++){
            if (element == arr2[j]){
                ans.push_back(element);
                arr2[j] = -112233;       // INT_MIN
                break;
            }
        }

    }
    return ans;
}



// SOLUTION_2 (more efficient & optimized)

vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	int i = 0, j = 0;
    vector<int> ans;
    
    while(i<n && j<m) {
    
    if(arr1[i]==arr2[j])
    {
    	ans.push_back(arr1[i]);
        i++;
        j++;
    }
    else if (arr1[i] < arr2[j]) {
  		i++;
    }
    else
    {
    	j++;
    }
    
    }
    return ans;
}