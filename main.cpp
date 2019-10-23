/* Declare any non-required functions above main.
 * The duty of main here is to interact with the user, take in input, and manage wrapping output and runtime.
 * Remember, if you are considering putting something in main or a function, double check the specifications.
 * Each function should only do what it is specified to do, and no more.
 */

#include "maze.h"
int main(int argc, char * argv[])
{   
    int row =0; 
    int col =0; 
    int rows = 0 ;
    int i = 0;
<<<<<<< HEAD
    while(true){
    cin >> rows; 
    if(rows == 0 )
        return 0;
    std::string *matrix =build_matrix(rows);
    cin.ignore();
    fill_matrix(matrix, rows);
    find_start(matrix, rows, row, col);
    if(find_exit(matrix, row, col)){
    cout << "Map " << i << " -- Solution found:"  << endl;
    }
    else{
        cout << "Map" << i << " -- No Solution found:" << endl;
    }
    print_matrix(matrix, rows);
    delete_matrix(matrix);
    i++;
=======
    string blank;
    cin >> rows;
    while(rows > 0 ){
        std::string *matrix =build_matrix(rows);
        cin.ignore();
        fill_matrix(matrix, rows);
        find_start(matrix, rows, row, col);
        if(find_exit(matrix, row, col)){
            cout << "Map " << i << " -- Solution found:"  << endl;
        }
        else{
            cout << "Map " << i << " -- No Solution found:"  << endl;
        }
        print_matrix(matrix, rows);
        delete_matrix(matrix);
        std::getline(cin,blank);
        cin >> rows;
        i++;
>>>>>>> ad8e23dc82d1a2861e16967e707c0baa9654979e
    }
    return 0;
 
}

