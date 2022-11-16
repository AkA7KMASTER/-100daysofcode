int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    if(n<=9)
    {
        if(n==1)
        {
            cout<<"one"<<endl;
        }
        else if (n==2) {
            cout<<"two"<<endl;
        
        }
        else if (n==3) {
            cout<<"three"<<endl;
        
        }
        else if (n==4) {
            cout<<"four"<<endl;
        
        }
        else if (n==5) {
            cout<<"five"<<endl;
        
        }
        else if (n==6) {
            cout<<"six"<<endl;
        
        }
        else if (n==7) {
            cout<<"seven"<<endl;
        
        }
        else if (n==8) {
            cout<<"eight"<<endl;
        
        }
        else{
            cout<<"nine";
        }
    }
    else{
        cout<<"Greater than 9";
    }
    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}


/*

Input Format

A single integer, .

Constraints

Output Format

If 1<=n<=9, then print the lowercase English word corresponding to the number (e.g., one for , two for , etc.); otherwise, print Greater than 9.

Sample Input 0

5
Sample Output 0

five










*/