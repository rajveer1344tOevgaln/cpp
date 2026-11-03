# include <stdio.h>
int main(){
    int a[5]={10,20,30,40,50};
    int key = 50;
    for(int i=0; i<  5;i +=1){
        if(a[i]==key){
            printf("element found at index %d" ,+i);
            return 0;
        }
    }
    printf("element not found");
    return 0;
}