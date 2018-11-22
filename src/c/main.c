//
//  main.c
//  Test
//
//  Created by Jason on 2018/6/15.
//  Copyright © 2018年 Jason. All rights reserved.
//

#include <stdio.h>

void Quicksort(int *a, int left, int right);
void seeValue(int *a);

const int AREA_INVALID = 0;
const int AREA_VALID = 1;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int ii=0;
    for(int ii=0; ii<5; ii++){
        int kk=2;
    }
    
    int ll = ii;
  
    printf("Hello, Worl5555555d!\n");
    
    //Qustion1
    //a
    int y = 0xd * 0x11; // 13 * 17 = 221
    
    //b
    int x=0, a=3, b=-4, c=2;
    
    if(a<=b){
        if(b<=c)
            x=1;
    }
    else{
        x=2;
    }
    // x=0
    
    //c
    int i=4, j=3;
    xxx(&i, &j);
    //i=7
    
    //d
    int xd=2;
    xd=f(xd);
    xd=f(xd);
    //xd=43
    
    //e
    unsigned char xe=17;
    unsigned char ye=9;
    
    xe=xe^ye;
    ye=ye^xe;
    xe=xe^ye;
    //xe=9 /t
    
    //Qustion2
    int x2[5]={1,2,3,4,5};
    int y2[5]={1,2,3,4,5};
    double area = 0.0;
    
    int result = calc_area(x2, y2, 5, &area);
    //Ο(1)＜Ο(log2n)＜Ο(n)＜Ο(nlog2n)＜Ο(n2)＜Ο(n3)＜…＜Ο(2n)＜Ο(n!)
    //时间复杂度O(n),空间复杂度O(1)
    
    //Qustion3
    //a  11001 25
    //b  11001 -9
    //c  11001  反码 11000 原码10111
    //   正数的补码：与原码相同
    //   负数的反码是对其原码逐位取反，但符号位除外
    //   负数的补码：符号位为1，其余位为该数绝对值的原码按位取反；然后整个数加1。
    
    
    //Qustion6
    //struct node_t root = {5, NULL, NULL};
    
        int xxx = AREA_INVALID;
    
    //Qustion4
    //-9，13，6，3，21，-2，7，7，2。（原来）
    //-9，2，6，3，21，-2，7，7，13
    //-9，2，6，3，-2，21，7，7，13
    int orignalArray4[9]={-9, 13, 6, 3, 21, -2, 7, 7, 2};
    int key4 = 7;
    int i4 = 0;
    int j4 = 8;
    
    while(i4 < j4)                               /*控制在当组内寻找一遍*/
    {
        while(i4 < j4 && key4 <= orignalArray4[j4])
        /*而寻找结束的条件就是，1，找到一个小于或者大于key的数（大于或小于取决于你想升
         序还是降序）2，没有符合条件1的，并且i与j的大小没有反转*/
        {
            j4--;/*向前寻找*/
        }
        
        while(i4 < j4 && key4 >= orignalArray4[i4])
        /*这是i在当组内向前寻找，同上，不过注意与key的大小关系停止循环和上面相反，
         因为排序思想是把数往两边扔，所以左右两边的数大小与key的关系相反*/
        {
            i4++;
        }
        
        if(i4 != j4){
            int temp = orignalArray4[i4];
            orignalArray4[i4] = orignalArray4[j4];
            orignalArray4[j4] = temp;
        }
    }
    
    int orignalArray5[9]={-9, 13, 6, 3, 21, -2, 7, 7, 2};
    
    Quicksort(orignalArray5, 0, 8);
    
    
    printf("Hello, World!\n");
    return 0;
}
int xxx(int *i, int *j)
{
    *i += *j;
    return 0;
}
int f(int n){
    int i = 3;
    i *= n;
    return i + 1;
}

int calc_area(int x[], int y[], int n, double *area){
    
    if(n <= 1){
        return AREA_INVALID;
    }
    double dArea = 0.0;
    for(int i=1; i<n; i++){
 
        if(x[i] >= x[i-1]){
            dArea += ((double)(x[i] - x[i-1]) * (y[i] + y[i-1]))/2;
        } else {
            return AREA_INVALID;
        }
    }
    *area = dArea;
    
    return AREA_VALID;
}

typedef struct node node_t;

struct node{
    int data;
    node_t *left;
    node_t *right;
};

void Quicksort(int *a, int left, int right)
{
    if(left >= right)/*如果左边索引大于或者等于右边的索引就代表已经整理完成一个组了*/
    {
        return ;
    }
    int i = left;
    int j = right;
    int key = a[left];
    
    while(i < j)                               /*控制在当组内寻找一遍*/
    {
        while(i < j && key <= a[j])
        /*而寻找结束的条件就是，1，找到一个小于或者大于key的数（大于或小于取决于你想升
         序还是降序）2，没有符合条件1的，并且i与j的大小没有反转*/
        {
            j--;/*向前寻找*/
        }
        
        a[i] = a[j];
        /*找到一个这样的数后就把它赋给前面的被拿走的i的值（如果第一次循环且key是
         a[left]，那么就是给key）*/
        
        seeValue(a);
        
        while(i < j && key >= a[i])
        /*这是i在当组内向前寻找，同上，不过注意与key的大小关系停止循环和上面相反，
         因为排序思想是把数往两边扔，所以左右两边的数大小与key的关系相反*/
        {
            i++;
        }
        
        a[j] = a[i];
        
        seeValue(a);
    }
    
    a[i] = key;/*当在当组内找完一遍以后就把中间数key回归*/
    seeValue(a);
    
    Quicksort(a, left, i - 1);/*最后用同样的方式对分出来的左边的小组进行同上的做法*/
    
    seeValue(a);
    
    Quicksort(a, i + 1, right);/*用同样的方式对分出来的右边的小组进行同上的做法*/
    /*当然最后可能会出现很多分左右，直到每一组的i = j 为止*/
    
     seeValue(a);
}

void seeValue(int *a){
    
    int aa[9];
    for (int i=0; i<9; i++) {
        aa[i] = a[i];
    }
}


