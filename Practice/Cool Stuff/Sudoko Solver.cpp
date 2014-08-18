#include<iostream>
#include<vector>
using namespace std;

void cleanrow(int quo, int rem, vector<vector<int> > v2, int no){
    for(int i = 9*quo; i < 9*quo +9; i++){
        v2[no][i] = 0;
    }    
}    

void cleancolumn(int quo, int rem, vector<vector<int> > v2, int no){
    for(int i = rem; i < 80; i += 9){
        v2[no][i] = 0;
    }    
}

void cleanbox(int quo, int rem, vector<vector<int> > v2, int no){
    int a = quo%3;
    int b = rem%3;
    
    for(int i = 27*a+3*b; i < 27*a+3*b +20; i += 9){
        for(int j = 0; j<3; j++){
            v2[no][i+j] = 0;
        }    
    }    
}

void initialclean(vector<int> v, int a[], vector<vector<int> > v2){
    for(int i = 0; i<81; i++){
        if(a[i] != -1){
            int rem = i%9;
            int quo = i/9;
            cleanrow(quo, rem, v2, i);
            cleancolumn(quo, rem, v2, i);
            cleanbox(quo, rem, v2, i);
            for(int j = 0; j<v.size(); j++){
                if (v[j] == i){v.erase(v.begin()+j);}
            }
        }        
    }    
}

void solve(vector<int> left, vector<vector<int> > check, int sudoku[]){
    while(left.size()>0){
        int a = rand() % left.size();
        int b = left[a];
        int count = 0, y;
        for(int i = 0; i<9; i++){
            if(check[b][i] == 1){
                count++;
                y = i;
            }    
        }
        
        if(count == 1){
            sudoku[b] = y+1;
            left.erase(left.begin()+a);
        }         
    }    
}
         
int main(){
    int sudoku[81];
    for(int i = 0; i<81; i++){sudoku[i] = -1;}
    
    int n, m=0;
    
    sudoku[0] = 1; sudoku[1] = 4; sudoku[2] = 5;
    sudoku[3] = 3; sudoku[4] = 2; sudoku[5] = 7;
    sudoku[6] = 6; sudoku[7] = 9; sudoku[8] = 8;
    sudoku[9] = 8; sudoku[10] = 3; sudoku[11] = 9;
    sudoku[12] = 6; sudoku[13] = 5; sudoku[14] = 4;
    sudoku[15] = 1; sudoku[16] = 2; sudoku[17] = 7;
    sudoku[18] = 6; sudoku[19] = 7; sudoku[20] = 2;
    sudoku[21] = 9; sudoku[22] = 1; sudoku[23] = 8;
    sudoku[24] = 5; sudoku[25] = 4; sudoku[26] = 3;
    sudoku[27] = 4; sudoku[28] = 9; sudoku[29] = 6;
    sudoku[30] = 1; sudoku[31] = 8; sudoku[32] = 5;
    sudoku[33] = 3; sudoku[34] = 7; sudoku[35] = 2;
    sudoku[36] = 2; sudoku[37] = 1; sudoku[38] = 8;
    sudoku[39] = 4; sudoku[40] = 7; sudoku[41] = 3;
    sudoku[42] = 9; sudoku[43] = 5; sudoku[44] = 6;
    sudoku[45] = 7; sudoku[46] = 5; sudoku[47] = 3;
    sudoku[48] = 2; sudoku[49] = 9; sudoku[50] = 6;
    sudoku[51] = 4; sudoku[52] = 8; sudoku[53] = 1;
    sudoku[54] = 3; sudoku[55] = 6; sudoku[56] = 7;
    sudoku[57] = 5; sudoku[58] = 4; sudoku[59] = 2;
    sudoku[60] = 8; sudoku[61] = 1; sudoku[62] = 9;
    sudoku[63] = 9; sudoku[64] = 8; sudoku[65] = 4;
    sudoku[66] = 7; sudoku[67] = 6; sudoku[68] = 1;
    sudoku[69] = 2; sudoku[70] = 3; sudoku[71] = 5;
    sudoku[72] = 5; sudoku[73] = 2; sudoku[74] = 1;
    sudoku[75] = 8; sudoku[76] = 3; sudoku[77] = 9;
    sudoku[78] = 7; sudoku[79] = 6; sudoku[80] = 4;

    vector<int> v(9);
    for(int i = 0; i<9; i++){v.push_back(1);}
    vector<vector<int> > check(81, v);
    
    vector<int> left(81);
    for(int i = 0; i<81; i++){left[i] = i;}
    
    initialclean(left, sudoku, check);
    
    solve(left, check, sudoku);
    
    for(int i = 0; i<81; i+= 9){
        for(int j = 0; j<9; j++){
            cout<<sudoku[i+j]<<"  ";
        }
        cout<<endl<<endl;    
    }    
    
    system("pause");
    return 0;
}    
