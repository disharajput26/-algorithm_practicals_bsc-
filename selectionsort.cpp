



//selection sort
#include<iostream.h>
int main()
{
    int i,j,n,loc,temp,min,a[30],count=0;
    cout<<"Enter the number of elements:";
    cin>>n;
    cout<<"\nEnter the elements\n";

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(i=0;i<n-1;i++)
    {
        min=a[i];
        loc=i;
        for(j=i+1;j<n;j++)
        {
            if(min>a[j])
            {
                min=a[j];
                loc=j;
                count++;
            }
        }

        temp=a[i];
        a[i]=a[loc];
        a[loc]=temp;
    }

    cout<<"\nSorted list is as follows\n";
    for(i=0;i<n;i++)
{
        cout<<a[i]<<endl;
    }
    cout<<"\nNo of comparisons: "<<count;

    return 0;
}

