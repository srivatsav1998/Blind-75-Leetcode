int maxSubArray(vector<int> &inputArr)
{
    int max = inputArr[0];
    int last_ans = inputArr[0];

    for (int i = 1; i < inputArr.size(); i++)
    {
        int currVal = last_ans + inputArr[i];
        if (currVal > inputArr[i])
        {
            last_ans = currVal;
            if (max < currVal)
            {
                max = currVal;
            }
        }
        else
        {
            last_ans = inputArr[i];
            if (max < inputArr[i])
            {
                max = inputArr[i];
            }
        }
    }
    return max;
}