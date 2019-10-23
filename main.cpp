
#include "maze.h"
int main(int argc, char * argv[])
{   
    int row =0; 
    int col =0; 
    int rows = 0 ;
    int i = 0;

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

    }
    return 0;
 
}

