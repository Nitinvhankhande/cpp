///----------------------------------------------------1D Array--------------------------------------------------------------------------------------------
#include<iostream>
using namespace std;
///--------------------------------------------------------------------------------------------------------------------------------------------------------
///Write a program to find the 2nd smallest element in the array
//
//class Array{
//    int x[10];
//    int i,j;
//    int sec_larg;
//    public:
//        Array(){
//           input();
//        };
//        void input()
//        {
//            cout<< "\n Enter any 10 Number : ";
//            for(i=0;i<10;i++)
//            {
//                cin>> x[i];
//            }
//        }
//        void output()
//        {
//            cout<< "\n Enter any 10 Number : ";
//            for(i=0;i<10;i++)
//            {
//               cout << " "<<x[i];
//            }
//        }
//        void outputsort()
//        {
//            cout<< "\n Sorreted Array : ";
//            for(int i=0;i<10;i++)
//            {
//                cout << " "<<x[i];
//            }
//        }
//        friend get_sec_largest(Array &ob);
//};
//int get_sec_largest(Array &ob)
//{
//   int tmp;
//   for(int i=0;i<10-1;i++)
//   {
//       for(int j=i+1;j<10;j++)
//       {
//           if(ob.x[i]>ob.x[j])
//           {
//               tmp=ob.x[i];
//               ob.x[i]=ob.x[j];
//               ob.x[j]=tmp;
//           }
//       }
//   }
//   return ob.x[8];
//}
//int main()
//{
//    Array ob1,ob2;
//
//    ob1.output();
//
//    cout<< "\n Second largest Number of first object : "<<get_sec_largest(ob1);
//    ob1.outputsort();
//    ob2.output();
//    cout<< "\n Second largest Number of second object: "<<get_sec_largest(ob2);
//    ob2.outputsort();
//    return 0;
//}
///=====================================================================================================================================================
///- Write a program to Print the Average of Numbers in array at an even position
//
//class Array
//{
//    int i,x[10];
//    int cnt=0,avg=0;
//    public:
//        void input()
//        {
//            cout<< "\n Enter any 10 Number : ";
//            for(i=0;i<10;i++)
//            {
//                cin>> x[i];
//            }
//        }
//        void output()
//        {
//            for(i=0;i<10;i++)
//            {
//                cout << "  "<<x[i];
//            }
//        }
//        int get_avg_even()
//        {
//            for(i=0;i<10;i++)
//            {
//                if(x[i]%2==0)
//                {
//                    avg=avg+x[i];
//                    cnt++;
//                }
//            }
//            return avg/cnt;
//        }
//};
//int main()
//{
//    Array ob1,ob2;
//
//    ob1.input();
//    ob2.input();
//
//    ob1.output();
//    cout<<"\n Even Number Avarge : "<<ob1.get_avg_even();
//    cout << "\n";
//    ob2.output();
//    cout<<"\n Even Number Avarge : "<<ob2.get_avg_even();
//    return 0;
//}
///=====================================================================================================================================================
///11 -Write a program to print array elements in reverse order
//
//class Array
//{
//    int i,j,x[10],y[10];
//    public:
//        void input()
//        {
//            cout<< "\n Enter any 10 Number : ";
//            for(i=0;i<10;i++)
//            {
//                cin>> x[i];
//            }
//        }
//        void output()
//        {
//            cout<< "Array List : ";
//            for(i=0;i<10;i++)
//            {
//                cout << "  "<<x[i];
//            }
//        }
//        void rev_array()
//        {
//            cout<< "\nReverce ";
//            for(i=0;i<10;i++)
//            {
//               y[i]=x[i];
//            }
//            for(i=0,j=9;i<10;i++,j--)
//            {
//               x[i]=y[j];
//            }
//        }
//};
//
//int main()
//{
//    Array ob1;
//    ob1.input();
//    ob1.output();
//    ob1.rev_array();
//    ob1.output();
//    return 0;
//
//}
///=====================================================================================================================================================
/// 12 - Write a program to print array elements in reverse order using the swapping method.
//
//class Array
//{
//    int i,x[10];
//    public:
//        void input()
//        {
//            cout<< "\n Enter any 10 Number : ";
//            for(i=0;i<10;i++)
//            {
//                cin>> x[i];
//            }
//        }
//        void output()
//        {
//            cout<< "Array List : ";
//            for(i=0;i<10;i++)
//            {
//                cout << "  "<<x[i];
//            }
//        }
//        void rev_array()
//        {
//            cout<< "\nReverce ";
//            for(i=0;i<5;i++)
//            {
//                int tmp;
//                tmp=x[i];
//                x[i]=x[9-i];
//                x[9-i]=tmp;
//            }
//        }
//};
//
//int main()
//{
//    Array ob1;
//    ob1.input();
//    ob1.output();
//    ob1.rev_array();
//    ob1.output();
//    return 0;
///=====================================================================================================================================================
///		13- Write a program to display list of even and odd numbers separately from array.
//
//class Array
//{
//    int i,x[10],even[10],odd[10];
//    int ev=0,od=0;
//    public :
//        void input()
//        {
//            cout<< "\n Enter any 10 Number : ";
//            for(i=0;i<10;i++)
//            {
//                cin>> x[i];
//            }
//        }
//        void output()
//        {
//            cout<< "Array List : ";
//            for(i=0;i<10;i++)
//            {
//                cout << "  "<<x[i];
//            }
//        }
//        void even_odd()
//        {
//            for(i=0;i<10;i++)
//            {
//                if(x[i]%2==0)
//                {
//                    even[ev++]=x[i];
//                }
//                else
//                {
//                    odd[od++]=x[i];
//                }
//            }
//        }
//        void output_even_odd()
//        {
//            cout<< "\n Even List : ";
//            for(i=0;i<ev;i++)
//            {
//                cout<< "  "<<even[i];
//            }
//            cout<< "\n odd List : ";
//            for(i=0;i<od;i++)
//            {
//                cout<< "  "<<odd[i];
//            }
//        }
//};
//
//int main()
//{
//    Array ob1;
//    ob1.input();
//    ob1.output();
//    ob1.even_odd();
//    ob1.output_even_odd();
//    return 0;
//}

///=====================================================================================================================================================
///		14- Write a program to print the frequency of all numbers in an array.
//
//class Array
//{
//    int i,j,cnt,x[10],no;
//    public:
//        void input()
//        {
//            cout<< "\n Enter any 10 Number : ";
//            for(i=0;i<10;i++)
//            {
//                cin>> x[i];
//            }
//        }
//        void output()
//        {
//            cout<< "Array List : ";
//            for(i=0;i<10;i++)
//            {
//                cout << "  "<<x[i];
//            }
//        }
//        void Freq_no()
//        {
//            cout<<"\n Frequency off all Number in Array : ";
//            for(i=0;i<10;i++)
//            {
//                cnt=0;
//                no=x[i];
//                for(j=i;j<10;j++)
//                {
//                    if(x[j]==no)
//                    {
//                        cnt++;
//                        x[j]=0;
//                    }
//                }
//                if(no!=0)
//                cout<< "\n"<<no<< " number present in array "<<cnt << "times.";
//
//            }
//        }
//};
//int main()
//{
//    Array ob1;
//    ob1.input();
//    ob1.output();
//    ob1.Freq_no();
//    return 0;
//}
///----anathor---best logic------------------------------------------------

//class Array
//{
//    int i,j,k,cnt,x[10],y[10],no;
//    int l=10;
//    public:
//        void input()
//        {
//            cout<< "\n Enter any 10 Number : ";
//            for(i=0;i<10;i++)
//            {
//                cin>> x[i];
//                y[i]=x[i];
//            }
//        }
//        void output()
//        {
//            cout<< "Array List : ";
//            for(i=0;i<10;i++)
//            {
//                cout << "  "<<y[i];
//            }
//        }
//        void Freq_no()
//        {
//            cout<<"\n Frequency off all Number in Array : \n";
//            for(i=0;i<l;i++)    ///initialy l=10
//            {
//                cnt=0;
//                no=y[i];
//                for(j=i+1;j<l;j++)
//                {
//                   if(no==y[j])
//                   {
//                        k=j;
//                        while(k<l-1)
//                        {
//                            y[k]=y[k+1];
//                            k++;
//                        }
//                        cnt++;
//                        l--;      /// Array decreasess by 1
//                        j--;      /// adjest the index when
//
//                   }
//                }
//                cout<< "\n  "<<no<< " number present in array "<<cnt+1<< " times.";
//
//            }
//        }
//};
//int main()
//{
//    Array ob1;
//    ob1.input();
//    ob1.output();
//    ob1.Freq_no();
//    return 0;
//}
///-------by using bool expresion -----------
//
//#include <iostream>
//using namespace std;
//
//class Array {
//    int i, j, k, cnt, x[10], y[10], no;
//    int l = 10; // Length of the array
//public:
//    void input() {
//        cout << "\nEnter any 10 Numbers: ";
//        for (i = 0; i < 10; i++) {
//            cin >> x[i];
//            y[i] = x[i];
//        }
//    }
//
//    void output() {
//        cout << "\nArray List: ";
//        for (i = 0; i < 10; i++) {
//            cout << " " << y[i];
//        }
//        cout << endl;
//    }

//    void Freq_no() {
//        cout << "\nFrequency of all Numbers in the Array: \n";
//        for (i = 0; i < l; i++) {
//            cnt = 1;
//            no = y[i];
//            bool alreadyCounted = false;
//
//            // Check if the number has already been counted
//            for (j = 0; j < i; j++) {
//                if (y[j] == no) {
//                    alreadyCounted = true;
//                    break;
//                }
//            }
//
//            if (!alreadyCounted) {
//                for (j = i + 1; j < l; j++) {
//                    if (no == y[j]) {
//                        cnt++;
//                    }
//                }
//                cout << no << " is present in the array " << cnt << " times.\n";
//            }
//        }
//    }
////////////////void Freq_no() {
////////////////    cout << "\n Frequency of all Numbers in Array : \n";
////////////////    for (i = 0; i < l; i++) {  // initially l=10
////////////////        int cnt = 0;           // Initialize count for the current number
////////////////        int no = y[i];        // The number to check frequency for
////////////////        int flg = 0;          // Initialize flg to 0 (not counted)
////////////////
////////////////        // Check if the number has already been counted
////////////////        for (j = 0; j < i; j++) { // Loop through previous elements
////////////////            if (y[j] == no) {     // If found in previous elements
////////////////                flg = 1;          // Set flg to 1 (already counted)
////////////////                break;            // Exit the loop early
////////////////            }
////////////////        }
////////////////
////////////////        // If the number hasn't been counted yet
////////////////        if (flg == 0) {  // Equivalent to if (!alreadyCounted)
////////////////            for (j = i + 1; j < l; j++) {
////////////////                if (no == y[j]) {
////////////////                    cnt++;  // Count occurrences
////////////////                }
////////////////            }
////////////////            cout << "\n  " << no << " number present in array " << cnt + 1 << " times."; // +1 for the initial occurrence
////////////////        }
////////////////    }
////////////////  }
////////////////
//};
//
//int main() {
//    Array ob1;
//    ob1.input();
//    ob1.output();
//    ob1.Freq_no();
//    return 0;
//}
///=====================================================================================================================================================
///  15- Write a program to print the most occurring elements.













































































































































































































































































































































































































































































































































