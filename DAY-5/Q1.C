# include <stdio.h>

int main(){

    int num , count , sum=0 ;

    printf("Enter a number : " );
    scanf("%d", &num);

    for(count = 1 ; count < num ; count++){
        if( num % count == 0 ){
            sum = sum + count;
        }
    }
if(sum == num){
    printf("the number is perfect");
}else{
    printf("the number is not perfect");
}
return 0;
}