#include <iostream>
using namespace std;
// global variables
    int sizeOfArray;
    int *dArr = nullptr;
    int countSpacesUsed = 0;


// function to set array
void setArray(){
    cout << "Enter the array size: " << endl;
    cin >> sizeOfArray;
    dArr = new int[sizeOfArray];
    // set all values to 0 in array;
    for (int i = 0; i < sizeOfArray; i++) 
        {*(dArr + i) = 0;}
}
// function to enter grade
void enterGrade(){

    int gradeToEnter;
    cout << "Enter the new grade: ";
    cin >> gradeToEnter;
    //input grade
    dArr[countSpacesUsed] = gradeToEnter;
    countSpacesUsed++;
    // check how many spaces taken
/*     for (int elem; elem < sizeOfArray; elem++ ){
        if (*(dArr + elem) != 0){ countSpacesUsed++;} 
    } */
    // create new array double the size of the original
    if (countSpacesUsed == sizeOfArray){
    // assign all values to new array named temp and then switch back to dArr
    int *tempArr = new int[sizeOfArray * 2];
    copy(dArr, dArr + sizeOfArray, tempArr); 
    delete [] dArr;
    dArr = tempArr;
    delete [] tempArr;
   
    }
for (int fop = 0; fop < sizeOfArray; fop++){
    cout << "Position: " << fop << " array value: " << *(dArr + fop) << " " << endl;
}
}


int main()
{
    int userChoice;

while (true){
    cout << "(1) Create array, " << 
    "(2) Add grade, " << 
    "(3) Delete grade, " <<
    "(4) Print array, (5) Unused memory, "  <<
    "(6) Sort array, (7) Exit: " << endl;
    cin >> userChoice;
    if (userChoice == 1) {setArray();}
    else if (userChoice == 2) {enterGrade();}
    else break;
}

    return 0;
}