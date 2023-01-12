# cpp
<h1> ch - 1 </h1>
<h3>1. WAP to find all even elements from given 1D array.

    #include<iostream>
    using namespace std;

    int main()
    {
        int n,i;

        cout << "Enter size of array : ";
        cin >> n;

        int a[n];

        for(i=0;i<n;i++)
        {
            cout << "Enter elements : ";
            cin >> a[i];
        }

        cout << "====================================" << endl;

        for(i=0;i<n;i++)
        {
            if(a[i]%2==0)
            {
                cout << "Even Number : " << a[i] << endl;
            }
        }

    }
<h3> output :

   > imgsrc ![image](https://user-images.githubusercontent.com/114164139/212067638-7e5f182b-9024-47dd-99d9-72302fab3c26.png)
