#include <bits/stdc++.h>

using namespace std;

int main()
{
    srand(time(NULL));
    cout << "Generating input...\n";
    int array[1000000];
    for(int i = 0; i < 1000000; i++) {
        array[i] = rand() % 1000000;
    }
    
    cout << "Running the program...\n";
    int sides[3];
    sides[0] = array[0];
    sides[0] = array[1];
    sides[0] = array[2];
    sort(sides, sides + 3);
    for(int i = 3; i < 1000000; i++) {
        //cout << "array: " << sides[0] << " " << sides[1] << " " << sides[2] << endl;
        //cout << "input: " << array[i] << endl;
        if(array[i] > sides[2]) {
            //cout << "Writing to pos 2" << endl;
            sides[0] = sides[1];
            sides[1] = sides[2];
            sides[2] = array[i];
        } else if(array[i] > sides[1]) {
            //cout << "Writing to pos 1" << endl;
            sides[0] = sides[1];
            sides[1] = array[i];
        } else if(array[i] > sides[0]) {
            //cout << "Writing to pos 0" << endl;
            sides[0] = array[i];
        }
    }
    cout << "Answer: " << sides[0] << " " << sides[1] << " " << sides[2];
    return 0;
}
