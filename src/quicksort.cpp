#include "quicksort.h"
using namespace std;
using namespace xCloud;

void QuickSort::quicksort(int a[], int low, int high) {
    if (low >= high) {
        return;
    }
    int first = low;
    int last = high;
    /*���ֱ�ĵ�һ����¼��Ϊ����*/
    int key = a[first];
    int tmp;
    while(first < last) {
        while(first < last && a[last] >= key) {
            --last;
        }
        while(first < last && a[first] <= key) {
            ++first;
        }
        //�����������������е�λ��
        if(first < last) {
            tmp = a[first];
            a[first] = a[last];
            a[last] = tmp;
        }
    }
    /*�����¼��λ*/
    a[low] = a[first];
    a[first] = key;
    
    QuickSort::quicksort(a, low, first - 1);
    QuickSort::quicksort(a, first + 1, high);
}



