#include"essentials.cpp"


int binary_search(int array[],int size,int low, int high,int key){
    if(low>=high){
        return -1;
    }
    while(low<=high){
    int m=low+(high-low)/2;
    if(key>array[m]){
        low=m+1;
        high=size-1;

    }
    else if(key<array[m]){
        low=0;
        high=m-1;

    }
    else{
        return m;
    }
    }

}



int binary_search_recursive(int array[], int low, int high, int x){

if(low>high){
    return -1;
}
else{

int mid=low+ (high-low)/2;

if(array[mid]==x){
    return mid;
}
else if(x<array[mid]){
    return binary_search_recursive(array,low,mid-1,x);
}

else if(x>array[mid]){
    return binary_search_recursive(array,mid+1,high,x);
}

}





}

int main(){
    int array[6]={1,4,5,3,2,9};
    int inorder[]={8,3,1,10,6,4,7,14,13};
    int sixe=sizeof(inorder)/sizeof(inorder[0]);
    int size1=sizeof(array);
    int f;
    
    f=binary_search_recursive(inorder,0,sixe-1,10);
    cout<<f;
    // printf("%d",f);
    return 0;

}


