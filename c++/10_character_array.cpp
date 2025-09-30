#include <iostream>
using namespace std;
int main()
{
    // *************************character array introduce*****************************
    // ****************************check panindrome *******************************
    int n;
    cin >> n;
    char arr[n + 1];

    cin >> arr;
    bool check = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[n - 1 - i])
        {
            check = 0;
            break;
        }
    }
    if (check == 0)
    {
        cout << "word is not panindrome";
    }
    else
    {
        cout << "word is panindrome";
    }

    return 0;
}

// ********largest word in a sentence ***********************

#include <iostream>
#include <string.h>
using namespace std;
int main()
{

    char arr1[] = "Snowfall on this scale is no  we can keep moving";
    int n = strlen(arr1);  // strlen is used for storing the length of string, under the string.h library
    int i = 0;
    int len = 0;
    int maxlen = 0;
    int str = 0;
    int maxstr = 0;
    while (i <= n)
    {

        if (arr1[i] == ' ' || arr1[i] == '\0')
        {
            if (len > maxlen)
            {
                maxlen = len;
                maxstr = str;
            }
            len = 0;
            str= i+1;
        }
        else
        {
            len++;
        }

        i++;
    }
    cout << maxlen<<endl;
    for (int i = 0; i < maxlen; i++)
    {
        cout<<arr1[i+maxstr];   
    }
    

    return 0;
}

