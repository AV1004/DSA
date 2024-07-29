#include <bits/stdc++.h>
using namespace std;

int maxELement(int arr[], int n)
{
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}

int secondLargest(int arr[], int n)
{
    int largest = arr[0];
    // int sLargest = -1; // in case of array does not containing minus values
    int sLargest = INT_MIN; // in case of array containing minus values

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            sLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > sLargest)
        {
            sLargest = arr[i];
        }
    }

    return sLargest;
}

int secondSmallest(int arr[], int n)
{
    int smallest = arr[0];
    int ssmallest = INT_MAX;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < smallest)
        {
            ssmallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] != smallest && arr[i] < ssmallest)
        {
            ssmallest = arr[i];
        }
    }
    return ssmallest;
}

bool isArraySorted(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        if (arr[i] >= arr[i - 1])
        {
        }
        else
        {
            return false;
        }
    }
    return true;
}

int removeDuplicatesFromSortedArray(int arr[], int n)
{
    int i = 0;
    for (int j = 1; j < n; j++)
    {
        if (arr[j] != arr[i])
        {
            arr[i + 1] = arr[j];
            i++;
        }
    }
    return i + 1;
}

void leftRotateArrayByOnePlace(int arr[], int n)
{
    int temp = arr[0];
    for (int i = 1; i < n; i++)
    {
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = temp;
}

void leftRotateArrayByDPlaces(int arr[], int d, int n)
{
    reverse(arr, arr + d);
    reverse(arr + d, arr + n);
    reverse(arr, arr + n);
}

void rightRotateArrayByDPlaces(int arr[], int d, int k)
{
    int modD = d % k;
    int D = k - modD;
    leftRotateArrayByDPlaces(arr, D, k);
}

void reverseArray(int arr[], int start, int end)
{
    while (start <= end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void moveAllZerosToEndInArray(int arr[], int n)
{
    int j = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            j = i;
            break;
        }
    }

    if (j != -1)
    {
        for (int i = j + 1; i < n; i++)
        {
            if (arr[i] != 0)
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
                j++;
            }
        }
    }
}

int linerSerch(int arr[], int n, int element)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}

vector<int> unionOfArray(vector<int> arr1, vector<int> arr2)
{
    int n1 = arr1.size();
    int n2 = arr2.size();
    int i = 0;
    int j = 0;
    vector<int> unionArr;
    while (i < n1 && j < n2)
    {
        if (arr1[i] <= arr2[j])
        {
            if (unionArr.size() == 0 || unionArr.back() != arr1[i])
            {
                unionArr.push_back(arr1[i]);
            }
            i++;
        }
        else
        {
            if (unionArr.size() == 0 || unionArr.back() != arr2[j])
            {
                unionArr.push_back(arr2[j]);
            }
            j++;
        }
    }

    while (i < n1)
    {
        if (unionArr.size() == 0 || unionArr.back() != arr1[i])
        {
            unionArr.push_back(arr1[i]);
        }
        i++;
    }

    while (j < n1)
    {
        if (unionArr.size() == 0 || unionArr.back() != arr2[j])
        {
            unionArr.push_back(arr2[j]);
        }
        j++;
    }

    return unionArr;
}

vector<int> intersectionOfArray(vector<int> arr1, int n, vector<int> arr2, int m)
{
    int i = 0;
    int j = 0;
    vector<int> ans;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            i++;
        }
        else if (arr1[i] > arr2[j])
        {
            j++;
        }
        else
        {
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
    }

    return ans;
}

int missingNumber(vector<int> &a, int N)
{
    int xor1 = 0, xor2 = 0;
    int n = N - 1;
    for (int i = 0; i < n; i++)
    {
        xor2 = xor2 ^ a[i];
        xor1 = xor1 ^ (i + 1);
    }
    xor1 = xor1 ^ N;
    return xor1 ^ xor2;
}

int missingNumberUsingSum(vector<int> &a, int N)
{
    int sumOfNs = N * (N + 1) / 2;
    int sumOfArr = 0;
    for (int i = 0; i < a.size(); i++)
    {
        sumOfArr += a[i];
    }

    return sumOfNs - sumOfArr;
}

int maxiumConsicutiveOnes(vector<int> &a, int n)
{
    int maxi = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            cnt++;
            maxi = max(maxi, cnt);
        }
        else
        {
            cnt = 0;
        }
    }

    return maxi;
}

int numberThatAppearsOnlyOnce(vector<int> &a, int n)
{
    int XOR = 0;
    for (int i = 0; i < n; i++)
    {
        XOR = XOR ^ a[i];
    }
    return XOR;
}

int main()
{
    int n;
    cin >> n;
    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    // int ans = maxELement(arr, n);
    // int ans = secondLargest(arr, n);
    // int ans = secondSmallest(arr, n);
    // int ans = isArraySorted(arr, n);
    // int ans = removeDuplicatesFromSortedArray(arr, n);
    // leftRotateArrayByOnePlace(arr, n);
    // leftRotateArrayByDPlaces(arr, 3, n);
    // rightRotateArrayByDPlaces(arr, 3, n);
    // reverseArray(arr, 0, n - 1);
    // moveAllZerosToEndInArray(arr, n);
    // int index = linerSerch(arr, n, 3);

    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int inputNo;
        cin >> inputNo;
        arr.push_back(inputNo);
    }

    // int index = missingNumber(arr, 5);
    // int index = missingNumberUsingSum(arr, 5);
    int index = maxiumConsicutiveOnes(arr, n);

    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    cout << "Answer is " << index;
    return 0;
}