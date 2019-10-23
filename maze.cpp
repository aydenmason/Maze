/* Here in the .cpp you should define and implement everything declared in the .h file.
 */

#include "maze.h"
<<<<<<< HEAD

=======
   
    
>>>>>>> ad8e23dc82d1a2861e16967e707c0baa9654979e
void get_identity(string &my_id)
{
    my_id = "amk35";
}

string * build_matrix(int rows)
{
    std::string*matrix = new std::string[rows];
    return matrix;
}

void fill_matrix(string *matrix, int rows)
{
    for(int i =0; i < rows; i++){
        getline(cin, matrix[i]);
    }
}

void print_matrix(string *matrix, int rows)
{
    
    for(int i =0; i < rows; i++){
        for(int j =0; j < matrix[i].length();j++){
            if(matrix[i][j]== '.'){
                cout << ' ';
            }
            else{
            cout << matrix[i][j];
            }
        }
        cout << endl;
    }
    cout << "\n";
}

void delete_matrix(string *&matrix)
{
    delete[] matrix;
    matrix = nullptr; 
}


void find_start(string *matrix, int rows, int &row, int &col)
{
    for(int i = 0; i < rows; i++){
    for(int j = 0; j < matrix[i].length(); j++){
            if(matrix[i][j] == 'N'){
                col = j; 
                row = i;  
                return;
            }
        }
    }
}

bool find_exit(string *matrix, int row, int col)
{
    string North = "North";
    string South = "South";
    string East = "East";
    string West = "West";
    bool n = valid_move(matrix,row,col,North);
    bool s = valid_move(matrix,row,col,South);
    bool w = valid_move(matrix,row,col,West);
    bool e = valid_move(matrix,row,col,East);

    if(matrix[row][col] == ' '){
        matrix[row][col] = '.';
    }

    if(n){
        n = find_exit(matrix,row-1,col);
    }
    if(s){
        s = find_exit(matrix,row+1,col);
    }
    if(w){
        w =find_exit(matrix,row,col-1);
    }
    if(e){
        e =find_exit(matrix,row,col+1);
    }
     
    if((n||w||s||e)){
        if(matrix[row][col]!='N'){
            matrix[row][col] ='@';
        }
    }
    if(at_end(matrix,row,col)){
        return true;
    } 
    return (n||w||s||e);
}

bool at_end(string *matrix, int row, int col)
{
    if(matrix[row][col] == 'E')
        return true;
    else
        return false;
}

bool valid_move(string *matrix, int row, int col, string direction)
{
    if(direction == "North"){
        if(matrix[row-1][col]!='|' && matrix[row][col] != '.'){
            return true;
        }
        else{
            return false;
        }
    }
    if(direction == "East"){
        if(matrix[row][col+1]!='|' && matrix[row][col] != '.'){
            
            return true;
        }
        else{
            return false;
        }
    }
     if(direction == "South"){
        if(matrix[row+1][col]!='|' && matrix[row][col] != '.'){
            return true;
        }
        else{
            return false;
        }
    }
      if(direction == "West"){
        if(matrix[row][col-1]!='|' && matrix[row][col] != '.'){
            return true; 
        }
        else{
            return false;
        }
    }
    return false;
}
