/*
EX1

#include "utilityClass.hpp"

using namespace std;

int main(){


    Randomize();

    list<double> dList;
    cfill(dList, 10, -23720.0, 18975.0);
    cdisplay(dList);

    list<int> iList;
    cfill(iList, 10, 2, 189);
    cdisplay(iList);
 
    list<float> fList;
    cfill(fList, 10, -100.0F, 100.0F);
    cdisplay(fList);

    list<char> cList;
    cfill(cList, 10, 'a', 'z');
    cdisplay(cList);

    return 0;
}

EX1
*/


/*
EX 2

#include "utilityClass.hpp"

using namespace std;

int main(){

    Randomize();

    list<int> iList;
    cfill(iList, 2, 0, 10);
    cdisplay(iList);
    auto iresultSum = cSum(iList.begin(), iList.end()); 
    cout << "Result of sum : " << iresultSum << endl;

    list<double> dList;
    cfill(dList, 2, 0.0, 10.0);
    cdisplay(dList);
    auto dresultSum = cSum(dList.begin(), dList.end()); 
    cout << "Result of sum : " << dresultSum << endl;

    list<float> fList;
    cfill(fList, 2, 0.0F, 10.0F);
    cdisplay(fList);
    
    auto fresultSum = cSum(fList.begin(), fList.end()); 
    cout << "Result of sum : " << fresultSum << endl;

    auto fresultSum1 = cSum2(fList.begin(), fList.end()); 
    cout << "Result of sum : " << fresultSum1 << endl;
    
    auto fresultSum2 = cSum3(fList.begin(), fList.end()); 
    cout << "Result of sum : " << fresultSum2 << endl;


    return 0;
}

EX 2
*/

/*
EX2.1
#include "utilityClass.hpp"

using namespace std;

int main(){

    Randomize();

    list<int> iList;

    cfill(iList, 10, 0, 100);
    cdisplay(iList);

    auto rS = cSum(iList.begin(), iList.end());
    cout << "Result of sum : " << rS << endl;

    auto rM = cMean(iList.begin(), iList.end());
    cout << "Result of mean : " << rM << endl;

    return 0;
}
EX2.1
*/


/*
EX2.1
#include "utilityClass.hpp"

using namespace std;

int main(){

    Randomize();

    list<double> iList;

    cfill(iList, 10, 0.0, 100.0);
    cdisplay(iList);

    auto rS = cSum(iList.begin(), iList.end());
    cout << "Result of sum : " << rS << endl;

    auto rM = cMean(iList.begin(), iList.end());
    cout << "Result of mean : " << rM << endl;

    auto rM2 = cMean2(iList.begin(), iList.end());
    cout << "Result of mean : " << rM2 << endl;

    auto rM3 = cMean3(iList.begin(), iList.end());
    cout << "Result of mean : " << rM3 << endl;

    return 0;
}
EX2.1
*/


/*
EX2.3

#include "utilityClass.hpp"

using namespace std;

int main(){

    Randomize();

    list<int> iList1, iList2;

    cfill(iList1, 10, 0, 10);
    cfill(iList2, 10, 0, 10);

    cdisplay(iList1);
    cdisplay(iList2);

    list<double> iList3; // allocation.

    // cSumTwoList(iList1.begin(), iList1.end(), iList2.begin(), iList2.end(), iList3);
    //cSumTwoList2(iList1.begin(), iList1.end(), iList2.begin(), iList2.end(), iList3.begin(), iList3.end());
     
    //      If we gonna use pointer arithmetic, we have to initialize 
    //      the value to be edited
    
    // cProductTwoList(iList1.begin(), iList1.end(), iList2.begin(), iList2.end(), iList3);
    // cdisplay(iList3);
    cDivisionTwoList(iList1.begin(), iList1.end(), iList2.begin(), iList2.end(), iList3);
    cdisplay(iList3);


    return 0;
}

EX2.3
*/




/*
EX3

#include "utilityClass.hpp"

using namespace std;

int main(){

    list<int> iList1, iList2;

    cfill(iList1, 10, 0, 10);
    cfill(iList2, 10, 0, 10);

    cout << "iList1 : "; cdisplay(iList1);
    cout << "iList2 : "; cdisplay(iList2);
    
    // swapListElements(iList1.begin(), iList1.end(), iList2.begin(), iList2.end());

    // cout << "Transferred elements" << endl;
    // cdisplay(iList1);
    // cdisplay(iList2);
    
    // swapListElements2(iList1.begin(), iList1.end(), iList2.begin(), iList2.end());

    // cout << "Transferred elements again" << endl;
    // cdisplay(iList1);
    // cdisplay(iList2);

    // swapListElements2Pointer(iList1.begin(), iList1.end(), iList2.begin(), iList2.end());

    // cout << "Transferred elements again" << endl;
    // cdisplay(iList1);
    // cdisplay(iList2);

    // CswapListElements(iList1, iList2);
    
    // cout << "Transferred elements again" << endl;
    // cout << "iList1 : "; cdisplay(iList1);
    // cout << "iList2 : "; cdisplay(iList2);

    CswapListElements2(iList1, iList2);
    
    cout << "Transferred elements again" << endl;
    cout << "iList1 : "; cdisplay(iList1);
    cout << "iList2 : "; cdisplay(iList2);

    return 0;
}
EX3
*/

/*
EX3.1
#include "utilityClass.hpp"

using namespace std;

int main(){

    list<int> iList1;
    vector<int> iVec1;

    cfill(iList1, 10, 0, 10);
    cfill(iVec1, 10, 0, 10);

    cout << "General structer are written..." << endl;
    cdisplay(iList1);
    cdisplay(iVec1);


    swapListElements(
        iList1.begin(), iList1.end(),
        iVec1.begin(), iVec1.end()
        );

    cout << "Swapped structer are written..." << endl;
    cdisplay(iList1);
    cdisplay(iVec1);

    return 0;
}
EX3.1
*/

/*
EX3.2
#include "utilityClass.hpp"

using namespace std;

int main(){

    list<int> iList1;
    vector<int> iVec1;
    list<double> result;

    cfill(iList1, 10, 0, 10);
    cfill(iVec1, 10, 0, 10);

    cout << "General structer are written..." << endl;
    cdisplay(iList1);
    cdisplay(iVec1);


    CswapListElements(iList1, iVec1);

    cout << "Swapped structer are written..." << endl;
    cdisplay(iList1);
    cdisplay(iVec1);

    // cSumTwoListIndependent(
    //     iList1.begin(), iList1.end(),
    //     iVec1.begin(), iVec1.end(),
    //     result
    //     );

    // cdisplay(result);
    
    // cMinusTwoListIndependent(
    //     iList1.begin(), iList1.end(),
    //     iVec1.begin(), iVec1.end(),
    //     result
    //     );

    // cdisplay(result);

    // cProductTwoListIndependent(
    //     iList1.begin(), iList1.end(),
    //     iVec1.begin(), iVec1.end(),
    //     result
    //     );

    // cdisplay(result);

    cDivisionTwoListIndependent(
        iList1.begin(), iList1.end(),
        iVec1.begin(), iVec1.end(),
        result
        );

    cdisplay(result);
    
    return 0;
}
EX3.3
*/

/*
EX4

#include "utilityClass.hpp"

using namespace std;

int main(){
    Randomize();

    list<int> iList1, iList2;

    cfill(iList1, 10, 0.0, 10.0);
    cfill(iList2, 10, 0.0, 10.0);

    cdisplay(iList1);
    cdisplay(iList2);

    reverseSwapListElements(
        iList1.begin(), iList1.end(),
        iList2.rbegin(), iList2.rend()
        );

    cout << "Reversed-Transfer is implementing..." << endl;

    cdisplay(iList1);
    cdisplay(iList2);

    return 0;
}

EX4
*/

/*
EX4.1

#include "utilityClass.hpp"

using namespace std;

int main(){
    Randomize();

    list<int> iList1;
    vector<int> iVec2;

    cfill(iList1, 10, 0.0, 10.0);
    cfill(iVec2, 10, 0.0, 10.0);

    cdisplay(iList1);
    cdisplay(iVec2);

    reverseSwapListElements(
        iList1.begin(), iList1.end(),
        iVec2.rbegin(), iVec2.rend()
        );

    cout << "Reversed-Transfer is implementing..." << endl;

    cdisplay(iList1);
    cdisplay(iVec2);

    return 0;
}
EX4.1
*/


/*
EX4.2

#include "utilityClass.hpp"

using namespace std;

int main(){
    Randomize();

    list<int> iList1;
    vector<int> iVec2;

    cfill(iList1, 10, 0.0, 10.0);
    cfill(iVec2, 10, 0.0, 10.0);

    cdisplay(iList1);
    cdisplay(iVec2);

    reverseSwapListElements2(iList1, iVec2);

    cout << "Reversed-Transfer is implementing..." << endl;

    cdisplay(iList1);
    cdisplay(iVec2);

    return 0;
}
EX4.2
*/


/*
EX5

#include "utilityClass.hpp"

using namespace std;

int main(){

    Randomize();

    list<double> dList1, dList2;

    cfill(dList1, 10, 0.0, 1000.0);
    cfill(dList2, 10, 0.0, 1000.0);

    cdisplay(dList1);
    cdisplay(dList2);

    cout << "Max value of the dList1 : " << findMaxIT(dList1.begin(), dList1.end()) << endl;
    cout << "Max value of the dList2 : " << findMaxIT(dList2.begin(), dList2.end()) << endl;

    return 0;
}
EX5
*/


/*
EX6
#include "utilityClass.hpp"

using namespace std;

int main(){

    Randomize();

    list<double> dList1, dList2;

    cfill(dList1, 10, 0.0, 1000.0);
    cfill(dList2, 10, 0.0, 1000.0);

    dList1.sort();
    dList2.sort();

    cdisplay(dList1);
    cdisplay(dList2);

    cout << "Max value of the dList1 : " << findMaxIT(dList1.begin(), dList1.end()) << endl;
    cout << "Max value of the dList2 : " << findMaxIT(dList2.begin(), dList2.end()) << endl;
    cout << "Min value of the dList1 : " << findMinIT(dList1.begin(), dList1.end()) << endl;
    cout << "Min value of the dList2 : " << findMinIT(dList2.begin(), dList2.end()) << endl;

    return 0;
}
EX6
*/

/*
EX7

#include "utilityClass.hpp"

using namespace std;

template <class T, class U>
void sumFunc(T n1, U n2){
    cout << "Result of summayion : " << n1 + n2 << endl;
}

int main(){

    sumFunc(23.1253, 35);

    return 0;
}
EX7
*/

/*
EX8
#include "utilityClass.hpp"

using namespace std;

int main(){

    Randomize();

    list<double> dList1, dList2;

    cfill(dList1, 10, 0.0, 1000.0);
    cfill(dList2, 10, 0.0, 1000.0);

    cout << "Default" << endl;
    cdisplay(dList1);
    cdisplay(dList2);
    
    dList1.sort(&fromBtoL<double>);
    dList2.sort(&fromBtoL<double>);

    cout << "Bigger to Low" << endl;
    cdisplay(dList1);
    cdisplay(dList2);
    
    dList1.sort(&fromLtoB<double>);
    dList2.sort(&fromLtoB<double>);

    cout << "Low to Bigger" << endl;
    cdisplay(dList1);
    cdisplay(dList2);

    return 0;
}
EX8
*/

/*
EX9
#include "utilityClass.hpp"

using namespace std;

int main(){

    Randomize();

    list<double> dList1;

    cfill(dList1, 10, 0.0, 1000.0);

    cdisplay(dList1);
    sortListIT(dList1.begin(), dList1.end());
    cdisplay(dList1);

    return 0;
}
EX9
*/

/*
EX10
#include "utilityClass.hpp"

using namespace std;

int main(){

    Randomize();

    list<double> dList1;

    cfill(dList1, 10, 0.0, 1000.0);

    cdisplay(dList1);
    // sortListCON(dList1);
    sortListCONreverse(dList1);
    cdisplay(dList1);

    return 0;
}
EX10
*/

/*
EX 11
#include "utilityClass.hpp"

using namespace std;

int main(){

    Randomize();

    list<int> iList1, iList2;

    cfill(iList1, 10, 0.0, 1000.0);
    cfill(iList2, 10, 0.0, 1000.0);

    cout << "Default" << endl;  
    cdisplay(iList1);
    cdisplay(iList2);

    cCopyIT(
        iList1.begin(), iList1.end(), 
        iList2.begin(), iList2.end()
        );

    cout << "After copy" << endl;  
    cdisplay(iList1);
    cdisplay(iList2);

    return 0;
}
EX 11
*/

/*
EX11.1
EX11.1
*/

#include "utilityClass.hpp"

using namespace std;

int main(){

    Randomize();

    list<int> iList1, iList2;

    cfill(iList1, 10, 0.0, 1000.0);
    cfill(iList2, 10, 0.0, 1000.0);

    cout << "List1 : "; cdisplay(iList1); 
    cout << "List2 : "; cdisplay(iList2);
    
    cCopyCON( iList1, iList2 );


    cout << "\nList1 : "; cdisplay(iList1);

    return 0;

    return 0;
}