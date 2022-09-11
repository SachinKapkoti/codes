class Solution {
public:
	int minStepToReachTarget(vector<int>&KnightPos, vector<int>&TargetPos, int N){
	    
	    if(KnightPos==TargetPos)
	    return 0;
	    vector<vector<int>>dir={{-2,1},{-1,2},{1,2},{2,1},
	    {2,-1},{1,-2},{-1,-2},{-2,-1}};
	    
	    vector<vector<int>>board(N+1,vector<int>(N+1,0));
	    queue<pair<int,int>>q;
	    
	    int kx=TargetPos[0],ky=TargetPos[1];//to reach pos
	    q.push({KnightPos[0],KnightPos[1]});//initial pos
	    while(!q.empty())
	    {
	        auto i=q.front();
	        q.pop();
	        
	        if(i.first==kx && i.second==ky)//reached target
	        return board[kx][ky];
	        //if position found
	        for(int travel=0;travel<8;travel++)
	        {
	            int px=i.first+dir[travel][0];
	            int py=i.second+dir[travel][1];
	            
	            if(0<px && 0<py &&N>=px && N>=py &&0==board[px][py])
	            {//not visited and inside board
	                q.push({px,py});//push in queue
	                board[px][py]=board[i.first][i.second]+1;
	            }
	        }
	    }
	    
	    return -1;
	}
};