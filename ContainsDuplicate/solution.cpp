bool containsDuplicate(vector<int>& nums)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    unordered_map<int, int> m;
    for(int i=0; i<nums.size(); i++){
        if (m[nums[i]] == 1){
            return true;
        }
        else{
            m[nums[i]]++;
        }
    }
    return false;
}