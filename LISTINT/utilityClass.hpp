#ifndef __UTILITY_CLASS_HPP_
#define __UTILITY_CLASS_HPP_


#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <algorithm>

#include <cstdlib>
#include <ctime>


// Decleration

void Randomize(); // to random to generate


// Templates

// EX1 
template<class lCon>
void cdisplay(const lCon &con){
    for(typename lCon::const_iterator iter = con.begin(); iter != con.end(); ++iter)
        std::cout << *iter << " ";
    std::cout << std::endl;
} 

template<class T>
T naturalRandom(T from, T to){
    double Value = static_cast<double> (rand()) / RAND_MAX;
    T returnedValue = static_cast<T>(from + Value*(to - from));
    return returnedValue;
}

template<class lCon, class T>
void cfill(lCon &con, int size, T from, T to){
    for (int i = 0; i < size; i++){
        con.push_back(naturalRandom(from, to));
    }
}

// EX2

template<typename T>
auto cSum(T begin, T end){
    auto returnedValue = (*begin - *begin);
    for (auto iter = begin; iter != end; iter++)
        returnedValue += *iter;
    return returnedValue;
}

template<typename T>
auto cSum2(T begin, T end){
    auto returnedValue = (*begin - *begin);
    auto iter = begin;
    while (iter != end){
        returnedValue += *iter;
        iter++;
    }
    return returnedValue;
}

template<typename T>
auto cSum3(T begin, T end){
    auto returnedValue = (*begin - *begin);
    auto iter = begin;
    while (iter != end){ returnedValue += *iter++; }
    return returnedValue;
}

// EX2.1
template<typename T>
auto cMean(T begin, T end){
    auto rS = *begin - *begin;
    int size = 0;
    for (auto iter = begin; iter != end; iter++, size++)
        rS += *iter;    
    return static_cast<double>(rS)/size;
}

template<typename T>
auto cMean2(T begin, T end){
    auto rS = *begin - *begin;
    int size = 0; 
    for (
        auto iter = begin; iter != end; 
        rS += *iter, iter++, size++)
        ;    
    return static_cast<double>(rS)/size;
}

template<typename T>
auto cMean3(T begin, T end){
    auto rS = *begin - *begin;
    int size = 0; 
    auto iter = begin;
    while(iter != end){
        rS += *iter;
        size++;
        iter++;
    }  

    return static_cast<double>(rS)/size;
}

// EX2.3
template<class Con, typename T>
void cSumTwoList(T begin1, T end1, T begin2, T end2, Con &con){
    auto iter1 = begin1;
    auto iter2 = begin2;
    while (iter1 != end1 && iter2 != end2){
        con.push_back(*iter1 + *iter2); 
        iter1++; iter2++;
    }
}

template<typename T>
void cSumTwoList2(T begin1, T end1, T begin2, T end2, T begin3, T end3){
    auto iter1 = begin1;
    auto iter2 = begin2;
    auto iter3 = begin3;
    while (iter1 != end1 && iter2 != end2){
        *iter3 = (*iter1 + *iter2); 
        iter1++; iter2++; iter3++;
    }
}

template<typename T, class Con>
void cMinusTwoList(T begin1, T end1, T begin2, T end2, Con &con){
    auto iter1 = begin1;
    auto iter2 = begin2;
    while (iter1 != end1 && iter2 != end2){
        con.push_back(*iter1 - *iter2); 
        iter1++; iter2++;
    }
}

template<class Con, typename T>
void cProductTwoList(T begin1, T end1, T begin2, T end2, Con &con){
    auto iter1 = begin1;
    auto iter2 = begin2;
    while (iter1 != end1 && iter2 != end2){
        con.push_back(*iter1 * *iter2); 
        iter1++; iter2++;
    }
}

template<class Con, typename T>
void cDivisionTwoList(T begin1, T end1, T begin2, T end2, Con &con){
    auto iter1 = begin1;
    auto iter2 = begin2;
    while (iter1 != end1 && iter2 != end2){
        if(*iter1 == 0 || *iter2 == 0){
            con.push_back(0);
        }else{
            con.push_back(static_cast<double>(*iter1) / *iter2); 
        }
        iter1++; iter2++;
    }
}

// EX 3

template<typename T>
void swap(T &first, T &second){
    T temp = first - first;
    temp = first;
    first = second;
    second = temp;
}

template<typename T>
void swapP(T first, T second){
    first = second;
    second = first;
}


// / Swap iterator
template<class T, class U>
void swapListElements(T begin1, T end1, U begin2, U end2){
    auto temp = *begin1 - *begin1;
    auto iter1 = begin1;
    auto iter2 = begin2;
    while(iter1 != end1 && iter2 != end2){
        temp = *iter1;
        *iter1 = *iter2;
        *iter2 = temp;
        iter1++;iter2++;
    }
}

template<class T, class U>
void swapListElements2(T begin1, T end1, U begin2, U end2){
    auto iter1 = begin1;
    auto iter2 = begin2;
    while(iter1 != end1 && iter2 != end2){
        swap(*iter1, *iter2);
        iter1++;iter2++;
    }
}

template<class T, class U>
void swapListElements2Pointer(T begin1, T end1, U begin2, U end2){
    auto iter1 = begin1;
    auto iter2 = begin2;
    while(iter1 != end1 && iter2 != end2){
        swapP(iter1, iter2);
        iter1++;iter2++;
    }
}

// / Swap container
template<class Con1, class Con2>
void CswapListElements(Con1 &con1, Con2 &con2){
    auto iter1 = con1.begin();
    auto iter2 = con2.begin();
    auto passing = *iter1 - *iter1;

    for (; iter1 != con1.end() && iter2 != con2.end(); 
    iter1++,
    iter2++,
    passing = *iter2,
    *iter2 = *iter1,
    *iter1 = passing);
    
    /*
    for (; iter1 != con1.end() && iter2 != con2.end() ; iter1++, iter2++){
        passing = *iter2;
        *iter2 = *iter1;
        *iter1 = passing;
    }
    */

    /*
    while(iter1 != con1.end() && iter2 != con2.end()){
        passing = *iter2;
        *iter2 = *iter1;
        *iter1 = passing;
        iter1++; iter2++;
    }
    */

}


template<class Con1, class Con2>
void CswapListElements2(Con1 &con1, Con2 &con2){
    auto iter1 = con1.begin();
    auto iter2 = con2.begin();
    auto passing = *iter1 - *iter1;

    for (; iter1 != con1.end() && iter2 != con2.end(); 
    swap(*iter1, *iter2),
    iter1++,
    iter2++);
}

// independent type
template<class Con, class T, class U>
void cSumTwoListIndependent(T begin1, T end1, U begin2, U end2, Con &con){
    auto iter1 = begin1;
    auto iter2 = begin2;
    while (iter1 != end1 && iter2 != end2){
        con.push_back(*iter1 + *iter2); 
        iter1++; iter2++;
    }
}

template<class T, class U, class Con>
void cMinusTwoListIndependent(T begin1, T end1, U begin2, U end2, Con &con){
    auto iter1 = begin1;
    auto iter2 = begin2;
    while (iter1 != end1 && iter2 != end2){
        con.push_back(*iter1 - *iter2); 
        iter1++; iter2++;
    }
}

template<class Con, class T, class U>
void cProductTwoListIndependent(T begin1, T end1, U begin2, U end2, Con &con){
    auto iter1 = begin1;
    auto iter2 = begin2;
    while (iter1 != end1 && iter2 != end2){
        con.push_back(*iter1 * *iter2); 
        iter1++; iter2++;
    }
}

template<class Con, class T, class U>
void cDivisionTwoListIndependent(T begin1, T end1, U begin2, U end2, Con &con){
    auto iter1 = begin1;
    auto iter2 = begin2;
    while (iter1 != end1 && iter2 != end2){
        if(*iter1 == 0 || *iter2 == 0){
            con.push_back(0);
        }else{
            con.push_back(static_cast<double>(*iter1) / *iter2); 
        }
        iter1++; iter2++;
    }
}

// EX4
template<class T, class U>
void reverseSwapListElements(T beg1, T end1, U beg2, U end2){
    auto iter1 = beg1;
    auto iter2 = beg2;

    while (iter1 != end1 && iter2 != end2){
        swap(*iter1, *iter2);
        iter1++; iter2++;
    }
    
}

// EX4.1
template<class T, class U>
void reverseSwapListElements2(T &con1, U &con2){
    // typename T::iterator iter1 = con1.begin();
    // typename U::reverse_iterator iter2 = con2.rbegin();

    // for (; iter1 != con1.end() && iter2 != con2.rend();
    //  swap(*iter1, *iter2),
    //  iter1++, iter2++
    //  );
    typename T::iterator iter1 = con1.begin();
    typename U::iterator iter2 = --con2.end();

    for (; iter1 != con1.end();
     swap(*iter1, *iter2),
     iter1++, iter2--
     );
    
}

// EX5
template<class T>
auto findMaxIT(T beg, T end){
    T iter = beg;
    auto maxValue = *iter;
    for (++iter; iter != end; ++iter)
        if(maxValue < *iter) maxValue = *iter;
    return maxValue;
}

//EX6
template<class T>
auto findMinIT(T beg, T end){
    T iter = beg;
    auto minValue = *iter;
    for (++iter; iter != end; ++iter)
        if(minValue > *iter) minValue = *iter;
    return minValue;
}

//EX7
template<class T>
bool fromBtoL(const T &r1, const T &r2){
    return r1 > r2;
}

// EX8
template<class T>
bool fromLtoB(const T &r1, const T &r2){
    return r1 < r2;
}

// EX9
template<class T>
void sortListIT(T beg, T end){
    size_t size = 0;
    auto iterBeg = beg;
    auto iterEnd = end;
    for (; beg != end; size++, beg++)
        {}

    for (size_t i = 0; i < size - 1; i++){
        auto iterBegF = iterBeg;
        for (size_t k = 0; k < size - i - 1; k++){
            iterBegF++;
            if( *iterBeg > *iterBegF){
                swap(*iterBeg, *iterBegF);
            }
        }
        iterBeg++;
    }
}

template<class T>
void sortListITreverse(T beg, T end){
    size_t size = 0;
    auto iterBeg = beg;
    auto iterEnd = end;
    for (; beg != end; size++, beg++)
        {}

    for (size_t i = 0; i < size - 1; i++){
        auto iterBegF = iterBeg;
        for (size_t k = 0; k < size - i - 1; k++){
            iterBegF++;
            if( *iterBeg < *iterBegF){
                swap(*iterBeg, *iterBegF);
            }
        }
        iterBeg++;
    }
}

//EX10
template<class T>
void sortListCON(T &con){
    auto sortBeg = con.begin();
    auto sortEnd = con.end();
    size_t size = con.size();

    for (size_t i = 0; i < size -1; i++){
        auto sortBegF = sortBeg;
        for (size_t k = 0; k < size - i - 1; k++){
            sortBegF++;
            if(*sortBeg > *sortBegF) swap(*sortBeg, *sortBegF);
        }
        sortBeg++;
    }
}

template<class T>
void sortListCONreverse(T &con){
    auto sortBeg = con.begin();
    auto sortEnd = con.end();
    size_t size = con.size();

    for (size_t i = 0; i < size -1; i++){
        auto sortBegF = sortBeg;
        for (size_t k = 0; k < size - i - 1; k++){
            sortBegF++;
            if(*sortBeg < *sortBegF) swap(*sortBeg, *sortBegF);
        }
        sortBeg++;
    }
}

// EX11
template<class T, class U>
void cCopyCON(T &con1, U &con2){
    typename T::iterator iter1 = con1.begin();
    typename U::iterator iter2 = con2.begin();
        for (; 
        iter1 != con1.end() && iter2 != con2.end();
        *iter1 = *iter2, iter1++, iter2++
        );
}

#endif