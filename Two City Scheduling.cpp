class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        vector<pair<int,pair<int,int>>>v;
        for(int i=0;i<costs.size();i++)
        {
            v.push_back(make_pair(abs(costs[i][0]-costs[i][1]),make_pair(costs[i][0],costs[i][1])));
        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        int n=costs.size()/2;
        int s=0;
        int a=0,b=0,i=0;
        
        while(a<n && b<n)
        { int k=min(v[i].second.first,v[i].second.second);
            s+=k;
            if(k==v[i].second.first){
                a++;}
             if(k==v[i].second.second){
                b++;}i++;
            
        }
        while(a<n)
        {
            s+=v[i].second.first;
            a++;
            i++;
        }
        while(b<n)
        {
            s+=v[i].second.second;
            b++;
            i++;
        }return s;
        
    }
};