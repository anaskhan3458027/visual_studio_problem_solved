int start = 0;
    int end = n - 1;
    
   
    while (start < end)
    {   int mid = (start + end) / 2;
        if (arr[mid] < arr[mid+1])
        {
            
            start = mid + 1;
        }
        else 5
        {
            end = mid ;
        }
        
    }
    return arr[start];