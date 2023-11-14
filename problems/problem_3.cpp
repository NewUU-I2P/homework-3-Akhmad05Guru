#include <string>

std::string problemSolution3(float height, char S) {
    // write your code here
    if (S == 'M'){
        if(height < 1.70){
            cout << S << "Short";
        }
        else if(height < 1.85){
            cout <<S<< "Normal";
        }
        else{
            cout <<S<< "Tall";
        }
    }
    else{
        if(height < 1.60){
            cout << S << "Short";
        }
        else if(height < 1.75){
            cout <<S<< "Normal";
        }
        else{
            cout <<S<< "Tall";
        }
    }

    return



    // use return to return your result
    // make use of control flow statements
}