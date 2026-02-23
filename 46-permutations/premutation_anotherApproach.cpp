#include <bits/stdc++.h>
using namespace std;

void solve(vector<int>&arr,vector<int>&temp,vector<vector<int>>&ans,vector<bool>&visited){
    
    //base case
    if(temp.size()==arr.size()){
        ans.push_back(temp);
        return;
    }
    
    for(int i=0;i<arr.size();i++){
        if(visited[i]==0){
            visited[i]=1;
            temp.push_back(arr[i]);
            solve(arr,temp,ans,visited);
            visited[i]=0;
            temp.pop_back();
        }
    }
}

int main() {
    vector<int>arr={1,2,3};
    vector<vector<int>>ans;
    int n=arr.size();
    vector<bool>visited(n,0);
    vector<int>temp;
    solve(arr,temp,ans,visited);

	for(int i=0;i<ans.size();i++){
	    for(int j=0;j<ans[i].size();j++){
	        cout<<ans[i][j]<<" ";
	    }
	        cout<<endl;
	}

}
