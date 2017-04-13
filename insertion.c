#include<stdio.h>
#include<math.h>

    void inssort(int arr[],int n)
        {

        int i,key,j;
            for(i=0;i<n;i++)
                {
                    key=arr[i];
                    j=i-1;

                while(j>=0 && arr[j]>key)
                {
                    arr[j+1]=arr[j];
                    j=j-1;

                  }
                  arr[j+1]=key;
                  }
                 }

        void parr(int arr[],int n)
        {
            int i;
                for(i=0;i<n;i++)

                    printf(%d,&arr[i]);
               }

            int main()
            {
                int arr[]={12,342,23,12,9};
                int n= sizeof(arr)/sizeof[0];

                inssort(arr,n);
                parr(arr,n);
                return 0;
            }
