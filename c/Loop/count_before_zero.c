#include<stdio.h>

int count_before_zero(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            break;
        }
        count++;
    }
    return count;


}

int main()
{
    printf("%d",count_before_zero());
    return 0;
}