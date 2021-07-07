class Solution {
    public int eliminateMaximum(int[] dist, int[] speed) {
        
        for(int i=0;i<dist.length; i++){
            dist[i] = (dist[i] +speed[i] -1) /speed[i];
        }
        Arrays.sort(dist);
        
        int last= dist[0];
        int monster = 1;
        
        for(int i=1; i<dist.length;i++){
            if(last==dist[i] & i>=dist[i])
                break;
            last=dist[i];
            monster++;
        }
        return monster;
    }
}
