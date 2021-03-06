//连续最大和
//一个数组有 N 个元素，求连续子数组的最大和。 例如：[-1,2,1]，和最大的连续子数组为[2,1]，其和为 3
输入描述:
输入为两行。
第一行一个整数n(1 <= n <= 100000)，表示一共有n个元素
第二行为n个数，即每个元素,每个整数都在32位int范围内。以空格分隔。
输出描述:
所有连续子数组中和最大的值。

#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int* arr=new int[n];
    for(int i=0;i<n;i++){
        int num=0;
        cin>>num;
        arr[i]=num;
    }
    int maxNum=-999;
    int sum=0;
    for(int i=0;i<n;i++){
        if(sum<=0)
            sum=arr[i];
        else
            sum+=arr[i];
        maxNum=max(sum,maxNum);
    }
    cout<<maxNum<<endl;
    return 0;
}