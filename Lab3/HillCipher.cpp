#include<bits/stdc++.h>
using namespace std;
int keyMatrix[3][3] = {{6,24,1},{13,16,10},{20,17,15}};
int plainSegment = 3;
string padPlainText(string plainText)
{
    int padSize = plainText.size()%plainSegment;
    if(padSize == 0)
        return plainText;
    padSize = plainSegment - padSize;
    for(int i = 0; i < padSize; i++)
    {
        plainText += 'x';
    }
    return plainText;
}


string encodeHillCipher(string plainText)
{
    string cipher = "";

    plainText = padPlainText(plainText);
    cout<<"Padded Plain Text - "<<plainText<<endl;
    for(int i = 0; i < plainText.size(); i+=plainSegment)
    {
        string segment = plainText.substr(i,plainSegment);
        string cipherSegment = "";
        for(int i = 0; i < plainSegment; i++)
        {
            int sum = 0;
            for(int j = 0; j < plainSegment; j++)
            {
                sum += (segment[j]-'a')*keyMatrix[i][j];
            }
            cipherSegment += (sum%26)+'a';
        }
        cipher += cipherSegment;
    }
    return cipher;
}


int main()
{
    string plainText;
    // cin>>plainText;
    plainText = "paymoremoney";
    cout<<"Plain Text - "<<plainText<<endl;
    string cipherText = encodeHillCipher(plainText);
    cout<<"Cipher Text - "<<cipherText<<endl;
    return 0;
}
