class Solution {
    void dfs(int src,int desc,int[][] graph,boolean[] vis,List<List<Integer>> ans,List<Integer> res){
        if(src==desc){
            res.add(src);
            ans.add(new ArrayList<>(res));
            res.remove(res.size()-1);
            return;
        }
        vis[src]=true;
        for(int it:graph[src]){
            if(!vis[it]){
                res.add(src);
                dfs(it,desc,graph,vis,ans,res);
                res.remove(res.size()-1);
            }
        }
        vis[src]=false;
    }
    public List<List<Integer>> allPathsSourceTarget(int[][] graph) {
        int n=graph.length;
        List<List<Integer>> ans=new ArrayList<>();
        boolean vis[]= new boolean[n];
        List<Integer> res=new ArrayList<>();
        dfs(0,n-1,graph,vis,ans,res);
        return ans;
        
    }
}