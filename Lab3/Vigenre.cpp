#include<bits/stdc++.h>
using namespace std;
string KEY="xnht";
vector<string> decodeVigenereCipher(vector<string> cipher,string key)
{
    vector<string>plain;
    for(int i = 0; i < cipher.size(); i++)
    {
        string cipherSegment = cipher[i];
        string plainSegment = "";
        int count = 0;
        for(int j = 0; j < cipherSegment.size(); j++)
        {
            if(cipherSegment[j] >= 'a' && cipherSegment[j] <= 'z' )
            {
              plainSegment += (cipherSegment[j]-'a'-key[count%key.size()]+'a'+26)%26+'a';
              count++;
            }
            else {
                plainSegment += cipherSegment[j];
            }
           
        }
        plain.push_back(plainSegment);
    }
    return plain;
}


int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
     vector<string>cipherArray;
    string cipher;
    while(getline(cin,cipher))  
    {
        cipherArray.push_back(cipher);
    }
    // vector<string> s = allPossibleKeys();
    vector<string> plain = decodeVigenereCipher(cipherArray,KEY);
    for(int i = 0; i < plain.size(); i++)
    {
        cout<<plain[i]<<endl;
    }
       
}
// Cipher - tbuowpik lh ia yupb-qrjzpo, ufpjlr, jyyhvqfdxv-okxpr blhbesgfhcg rwzzzewlj etndkzfk dcl bzjcorlco fixesk itigewtbe vbied hzbrupkg pzyqrldvnvnem
// plain - Ethereum is an open-source, public, blockchain-based distributed computing platform and operating system featuring smart contract functionality
