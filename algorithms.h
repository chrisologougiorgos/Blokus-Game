#include <iostream>
#include <cstdlib>

using namespace std;

/**
 * Shuffles an array using an algorithm that initially iterates an index i from the last to second element.
 * And then a second index j is used to select an element randomly between the first element and the i-th element.
 * And finally the elements in positions i and j are swapped.
 *
 * @param myArray the array to be shuffled.
 * @param myArraySize the size of the array to be shuffled.
 */
template <class X> void shuffle(X** myArray, int myArraySize)
{
    // TODO: Implement here the shuffle algorithm
    for(int i=myArraySize-1;i>=1;i--)
    {
        X* temp;
        int j=0;

        j=rand()%(i+1);// value of j between 1 and i([1,i]) else j=0 as initialized

       temp=myArray[i];
       myArray[i]=myArray[j];
       myArray[j]=temp;
    }
}

/**
 * Receives as input an array of objects (myArray) and an array of scores corresponding to the objects
 * (myArrayScore) and returns the element of myArray with the max score according to the element myArrayScore.
 * If there are more than one elements with max score, then this function returns the first element that
 * has the max score.
 * Example:
 * myArray: [A, B, C, D, E, F, G, H]
 * myArrayScore: [3, 5, 2, 7, 1, 6, 7, 6]
 * Returns D
 *
 * @param myArray the array of objects (one-dimensional dynamic array of objects with type X*).
 * @param myArrayScore the array of the scores (as one-dimensional dynamic array of integers).
 * @param myArraySize the size of the arrays.
 * @return the element of myArray (type X*) that is in the corresponding position of the maximum score
 *         according to array myArrayScore.
 */
template <class X> X* getElementWithMaxScore(X** myArray, int* myArrayScore, int myArraySize){

    int maxx = myArrayScore[0];
    int cnt = 0;
    for(int i=1; i<myArraySize; i++)
    {
        if(maxx < myArrayScore[i])
        {
            maxx = myArrayScore[i];
            cnt = i;
        }
    }

    return myArray[cnt];
}
