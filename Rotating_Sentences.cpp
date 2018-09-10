/* **************************************************************************

    * File Name : Rotating_Sentences.cpp

    * Creation Date : 2018-09-05 10:07:41

    * Last Modified : 2018-09-10 10:56:10

    * Created By : Samuel Chi <Yu-Ning Chi>

************************************************************************** */

#include <iostream>
#include <cstring> //strlen()
#include <stdio.h> //gets()
using namespace std;

int main()
{
    int lengthOfStr = 0; //計算字串長度
    int MaxLength = 0; //計算字串長度中最長者
    char inputAry[100][100] = {0}; //儲存輸入字串之陣列
    int index = 0; //使用於迴圈中的引數

    while(gets(inputAry[index])) 
    //該迴圈在執行時因無限循環，需自行將迴圈停止
    {
        lengthOfStr = strlen(inputAry[index]); //將長度儲存至lengthOfStr
        if(lengthOfStr > MaxLength) //將最長者儲存至MaxLength
            MaxLength = lengthOfStr;
        index++;
    }
    for(int k = 0; k < MaxLength; k++)
    {
        for(int l = index - 1; l >= 0; l--)
        {
            if(inputAry[l][k])
                cout << inputAry[l][k]; //印出
            else if(l != 0)
                cout << " "; //若該字串已經沒字，但其餘字串仍有字
        }
        cout << "\n";
    }
    return 0;
}
