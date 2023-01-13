# cpp
<h1> ch1-1 </h1>
<h3>1. WAP to find all even elements from given 1D array. </h3>


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
<h3> OUTPUT :

   > ![image](https://user-images.githubusercontent.com/114164139/212067638-7e5f182b-9024-47dd-99d9-72302fab3c26.png)

 <h1> ch1-2 </h1>
 
 <h3>  2. WAP to convert given string into toggle case. </h3>
 
     #include<iostream>
     using namespace std;

    int main()
    {
        char a[200];
        int i;

        cout << "Enter string : ";
        cin >> a;

        for(i=0;a[i]!='\0';i++)
        {
            if(a[i]>='a' && a[i]<='z')
            {
                a[i] -= 32;
            }
            else if(a[i]>='A' && a[i]<='Z')
            {
                a[i] += 32;
            }
        }


        cout << "Toggle case : " << a;

    }
    
    
  <h3> OUTPUT:
    
    
   ![image](https://user-images.githubusercontent.com/114164139/212253920-024b55d5-69e0-46eb-93ad-b4b45d485f16.png)
   
   <h1> ch1-3 </h1>
   
   <h3> 3. WAP to find all leap years from 2020 to 3030 and store them into an array. </h3>
   
    #include<iostream>
    using namespace std;

    int main()
    {
        int i;

        for(i=2020;i<=3030;i++)
        {
            if(i % 4 == 0)
            {
                cout << i << " Year is leap year.";
            }
        }


    }

   <h3> OUTPUT :
   
   ![image](https://user-images.githubusercontent.com/114164139/212256206-4ec4aa3e-a288-41c3-9882-916562d54b08.png)
 
       
       
           <h1> ch2-1 </h1>      

           <h3> 1. WAP to find factorial of all elements from given array using inline function. </h3>
       
       #include <iostream>
       using namespace std;
       inline int fact(int n)
       {
              if (n <= 1)
           {
                   return 1;
           }
              else
          {
                   return n * fact(n - 1);
          }
       }
                        
       int main()
       {
           int a, ans;
           cout << "Enter Number = ";
           cin >> a;
           ans = fact(a);
           cout << "Factorial : " << ans;
       }
