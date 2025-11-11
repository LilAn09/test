#include <stdio.h>

int main(){

    int i=0,cnt=0;

    int number[100];//根据题目信息先定义一个足够大的数组

    for(i=0;i<100;i++){
        scanf("%d",&number[i]);//开始逐个读入数字
        if(number[i]==0){
            break;//当读到0的时候跳出for循环
        }
        cnt++;//每次读入数字的时候计数器加一，以便后续确定从哪里开始倒序输出

    }

    for(cnt=cnt-1;cnt>=0;cnt--){
        printf("%d ",number[cnt]);/*cnt主动减一是为了不输出0
                                    （0存在最后一个输入位置）*/
    }

    return 0;
}