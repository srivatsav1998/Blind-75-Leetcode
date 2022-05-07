vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> m;
    vector<int> sol;
    for(int i=0; i<nums.size(); i++){
        int comp = target-nums[i];
        if(m.find(comp) != m.end()){
            sol.push_back(i);
            sol.push_back(m[comp]);
            break;
        }else{
            m[nums[i]] = i;
        }
    }
    return sol;
}