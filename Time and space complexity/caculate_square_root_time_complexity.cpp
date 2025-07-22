 
problem:01
 for(int i=0;i<n;i++)
    {
        int j=0;
        while(j*j<n)
        {
            i+j;
            j++;
        }
    }

    O(N*sqrt(N))

problem:02
for(int i=0;i*i<n;i++)  //i <sqrt(n)
    {
        sum += i;
    }


    for(int i=0;i<n;i++)
    {
        sum += i;
        i*=k;
    }
O(sqrt(N))