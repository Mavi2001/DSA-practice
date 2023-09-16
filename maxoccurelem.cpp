int maximumFrequency(vector<int> &arr, int n)
{
    int arr2[n],k;
    for(int i=0;i<n;i++)
    {
        arr2[i] = arr[i];
    }
    int max = 0;
    for(int i=0;i<n;i++)
    {
        int count = 0;
        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr2[j]){
                count++;
            }
        }
        if(count>max)
        {
            max = count;
            k = arr[i];
        }
    }
    return k;
}