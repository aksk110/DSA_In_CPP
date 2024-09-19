if (target>=arr[0]&&target<=arr[pivot-1]){
         int lo=0;
         int hi=pivot-1;
        while(lo<=hi){
           int  mid=(lo+hi)/2;
            if(arr[mid]==target) {cout<<mid<<endl; break;}
            else if(arr[mid]>target) hi=mid-1;
            else lo=mid+1;
        }
        
    }
    else { int lo=pivot;
         int hi=n-1;
        while(lo<=hi){
            int mid=(lo+hi)/2;
            if(arr[mid]==target) {cout<<mid<<endl; break;}
            else if(arr[mid]>target) hi=mid-1;
            else lo=mid+1;
        }
    }