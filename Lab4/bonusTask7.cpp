// Write a short program to count how many bits are the same
// between H1 and H2

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string h1 = "c34999c6bbd6e1d12b751aa91530c12ca0607c4fe9821c0920308da82c920a13";
    string h2 = "807b60d723a342e12c34b4e7926d8fe6c51b82f76b4b85111556bde329bcb3da";
    int differentBits = 0;
    // Assuming h1 and h2 same lenght cause its from same hash algorithm.
    // every character represented in 8 bits.
    for(int i=0;i<h1.size();i++)
    {
        int h1Ascii = int(h1[i]);
        int h2Ascii = int(h2[i]);
        // xor the two ascii values to find the different bits. and differentBits++ for each 1.
        int xorResult = h1Ascii^h2Ascii;
        while(xorResult>0)
        {
            if(xorResult%2==1)
            {
                differentBits++;
            }
            xorResult/=2;
        }
    }
    cout<<"Number of different bits: "<<differentBits<<endl;
    int sameBits = h1.size()*8-differentBits;
    cout<<"Number of same bits: "<<sameBits<<endl;

}