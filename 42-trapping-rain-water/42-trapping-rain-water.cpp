class Solution {
public:
    int trap(vector<int>& height) {
        int s=0;
        int n=height.size();
        int rightmaxar[n];
        int leftmaxar[n];
        int leftmax=0,rightmax=0;
        for(int i=0;i<height.size();i++){
            if(height[i]>leftmax){
                leftmax=height[i];
            }
            leftmaxar[i]=leftmax;
            
        }
        for(int i=n-1;i>=0;i--){
            if(rightmax<height[i]){
                rightmax=height[i];
            }
            rightmaxar[i]=rightmax;
        }
        for(int i=0;i<n;i++){
            s+=min(leftmaxar[i],rightmaxar[i])-height[i];
            
        }
        return s;
        
    }
};