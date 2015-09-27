//
//  quickSort.h
//  deletable
//
//  Created by Chauncey on 9/26/15.
//  Copyright (c) 2015 Chauncey. All rights reserved.
//

#ifndef deletable_quickSort_h
#define deletable_quickSort_h

template <class T>
void swap(T &a,T &b)
{
    T t = b;
    b = a;
    a = t;
}

template <class T>
void quicksort(T a[],size_t l,size_t h)
{
    if(h > l)
    {
        //partition
        int p = (int)(rand() % (h - l) + l);
        T d = a[p];
        //divide
        swap(a[l],a[p]);
        size_t i = l;
        size_t j = i + 1;
        while(j < h)
        {
            while(a[j] > d&& j<h) j++;
            if(j < h)
            {
                i++;
                swap(a[i],a[j]);
                j++;
            }
        }
        swap(a[i],a[l]);
        quicksort(a,l,i);
        quicksort(a,i+1,h);
    }
}

template <class T>
void quicksort(T a[],size_t size)
{
    quicksort(a,0,size);
}


#endif
