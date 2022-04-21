class Solution {
public:
    bool isRobotBounded(string instructions) {
        int n=instructions.length();
        int start=0,end=0;
        int dx[4]={0,-1,1,0};
        int dy[4]={1,0,0,-1};
        int index=0;
        for(int i=0;i<n;i++){
            if(instructions[i]=='G'){
                start=start+dx[index];
                end=end+dy[index];   
                
            }
            else if(instructions[i]=='L'){
                if(index==0){
                    index=1;
                }
                else if(index==1){
                    index=3;
                }
                else if(index==3){
                    index=2;
                }
                else if(index=2){
                    index=0;
                }
                
            }
            else if(instructions[i]='R'){
                if(index==0){
                    index=2;
                }
                else if(index==1){
                    index=0;
                }
                else if(index==2){
                    index=3;
                }
                else if(index==3){
                    index=1;
                }
                
            }
            
        }
        if(start==0&&end==0){
            return true;
        }
        if(index==0){
            return false;
        }
        return true;
        
        
    }
};