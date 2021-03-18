//
// Created by Leonardo Jodeve on 2021/3/18.
//

#include <stdio.h>


//返回raws行杨辉三角
void YangHuiTriangle(int raws)
{
    int YangHuiTriangle[50][50] = {0};
    //定义二维整型数组，用于存放组合数数据

    for(int i = 0; i<50; i++)
    {
        YangHuiTriangle[i][i] = 1;
        YangHuiTriangle[i][0] = 1;
    }
    //初始化外围数据，即C（x，0）和C（x,x）==1

    printf("Input the raw you want,max 50:");
    scanf("%d", &raws);

    for(int i = 0; i<raws; i++)
    {
        for(int j = 0; j<=i; j++)
            //优化运算量
        {
            if(i>0 && j>0)
                YangHuiTriangle[i][j] = YangHuiTriangle[i-1][j]+YangHuiTriangle[i-1][j-1];
                //杨辉三角计算规则
            printf("%d\t",YangHuiTriangle[i][j]);
            if(i == j)
                printf("\n");
            //格式化输出
        }
    }

}
