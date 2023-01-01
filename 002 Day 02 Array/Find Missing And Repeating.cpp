class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
        int xo = 0;
        for(int i=0;i<n;i++) xo^=arr[i];
        for(int i=0;i<n;i++) xo^=(i+1);
        
        int x =0;
        int y =0;
        
        int set_bit_no;
        
        set_bit_no = xo & ~(xo - 1);
    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] & set_bit_no)
            x = x ^ arr[i];

        else
            y = y ^ arr[i];
    }

    for (i = 1; i <= n; i++) {
        if (i & set_bit_no)
            x = x ^ i;

        else
            y = y ^ i;
    }
    
    int x_count = 0;
    for (int i=0; i<n; i++) {
        if (arr[i]==x)
            x_count++;
    }
    
    int *ar=new int[2];
    
    if (x_count==0){
        ar[0]=y;
        ar[1]=x;
        return ar;
    }
    
    ar[0]=x;
    ar[1]=y;
    
    return ar;
        
    }
};
