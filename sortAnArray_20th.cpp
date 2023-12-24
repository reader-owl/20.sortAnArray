#include <iostream>

/*
                        Q.  sort an arrayof 0's, 1's and 2's

                    given array - arr[] = {0, 1, 2, 0, 1, 2, 1, 2, 0, 0, 0, 1}

                Brute force -  use any of the sorting algorithms
                                if we use merge sort it will use
                                        TC - O(N*log N)
                                        SC - O(N)

                Better sol -  we will create counter for '0', '1' and '2' (cnt0, cnt1, cnt2)
                              and run single iteration where each time an element encounters it will
                              increase there respective counters
                                at the end we get - cnt0 = 5
                                                    cnt1 = 4
                                                    cnt2 = 3
                              then we will run loop for for each counter to store them

        Actual code
cnt0 = 0, cnt1 = 0, cnt2 = 0
for(i = 0; i<n; i++)                // O(N)
{
    if(a[i] == 0)
        cnt0++;
    else if(a[i] == 1)
        cnt1++;
    else
        cnt2++;
}
for(i=0; i < cnt0; i++)                 // O(N)  -  all of three combining
    a[i] = 0;
for(i = cnt0; i < cnt0 + cnt1; i++)
    a[i] = 1;
for(i = cnt0 + cnt1; i < n; i++)
    a[i] = 2;


                TC - O(2N)
                SC - O(1)           // no extra space



                    Optimal sol - we will use Dutch National Flag Algorithm     (refer video for explanation)
                                    a[mid] == 0                 swap(a[low], a[mid])
                                                                    low++, mid++

                                    a[mid] == 1                 mid++

                                    a[mid] == 2                 swap(a[mid], a[high])
                                                                    high--

        Actual code
void sortArray(vector<int> & arr, int n)
{
    int low = 0, mid = 0, high = n - 1;
    while(mid <= high)
    {
        if(arr[mid] == 0)
        {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}


                TC - O(N)
                SC - O(1)
*/

int main()
{
    std::cout << "Hello World!\n";
}