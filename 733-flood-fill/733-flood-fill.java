class Solution {
    public void dfs(int[][] image, int sr, int sc, int newColor,int c){
        
        if(sr>=0 && sr<image.length && sc>=0 && sc<image[0].length && image[sr][sc]==c){
            image[sr][sc]=newColor;
            dfs(image,sr+1,sc,newColor,c);
            dfs(image,sr-1,sc,newColor,c);
            dfs(image,sr,sc+1,newColor,c);
            dfs(image,sr,sc-1,newColor,c);
        }
    }
    public int[][] floodFill(int[][] image, int sr, int sc, int newColor) {
        if(image[sr][sc]!=newColor){
            dfs(image,sr,sc,newColor,image[sr][sc]);
        }
        return image;
        
    }
}