#include<queue>
typedef pair<int, pair<int,int>> ppi;
void findSmallestRange(int arr[][N], int n, int k)
{
    int max_val = INT_MIN;
    priority_queue<ppi,vector<ppi>,greater<ppi>>pq;
    for(int j = 0; j < k; j++){
        pq.push({arr[j][0], {j, 0}});
        max_val = max(arr[j][0] , max_val);
    }
    
    int resdist = INT_MAX;
    int row = 0;
    int col = 0;
    int resMin = 0;
    int resMax = 0;
    while(col < n){
        ppi top = pq.top();
        pq.pop();
        row = top.second.first;
        col = top.second.second;
        if(max_val - top.first < resdist){
            resMin = top.first;
            resMax = max_val;
            resdist = max_val - top.first;
        }
        if(++col == n) break;
        // cout<<top.first<<" "<<arr[row][col]<<" ";
        pq.push({arr[row][col], {row, col}});
        max_val = max(arr[row][col], max_val);
    }
    cout<<resMin<<" "<<resMax<<endl;
}
