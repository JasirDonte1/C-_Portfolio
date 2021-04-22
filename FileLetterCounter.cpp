/*
 letter counter for files
 
 counts the amount of letters that appears in a given file
 
 */


#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
using namespace std;

class LetterCounter{
public:
    int A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z, numOfLines;
    void count(string);
    LetterCounter(){
        A=0;
        B=0;
        C=0;
        D=0;
        E=0;
        F=0;
        G=0;
        H=0;
        I=0;
        J=0;
        K=0;
        L=0;
        N=0;
        M=0;
        O=0;
        P=0;
        Q=0;
        R=0;
        S=0;
        T=0;
        U=0;
        V=0;
        W=0;
        X=0;
        Y=0;
        Z=0;
        numOfLines = 0;
    };
    

};
int  copyToOFile(ifstream&, ofstream&, LetterCounter&);
void FileController(ifstream&, ofstream&);
void countLetters(ifstream&);
void copyToFile(string, ofstream&);
void print(LetterCounter& x, int num){
    cout << "The number of lines in the input file is: " << num << endl;
    if(x.A > 0){
        cout << "A appears " << x.A << " times." << endl;
        
    }if(x.B > 0){
        cout << "B appears " << x.B << " times." << endl;
        
    }if(x.C > 0){
        cout << "C appears " << x.C << " times." << endl;

    }if (x.D > 0){
        cout << "D appears " << x.D << " times." << endl;

    } if (x.E > 0){
        cout << "E appears " << x.E << " times." << endl;

    } if (x.F > 0){
        cout << "F appears " << x.F << " times." << endl;

    } if (x.G > 0){
        cout << "G appears " << x.G << " times." << endl;

    } if (x.H > 0){
        cout << "H appears " << x.H << " times." << endl;

    } if (x.I > 0){
        cout << "I appears " << x.I << " times." << endl;

    } if (x.J > 0){
        cout << "J appears " << x.J << " times." << endl;

    } if (x.K > 0){
        cout << "K appears " << x.K << " times." << endl;

    } if (x.L > 0){
        cout << "L appears " << x.L << " times." << endl;

    } if (x.M > 0){
        cout << "M appears " << x.M << " times." << endl;

    } if (x.N > 0){
        cout << "N appears " << x.N << " times." << endl;

    } if (x.O > 0){
        cout << "O appears " << x.O << " times." << endl;

    } if (x.P > 0){
        cout << "P appears " << x.P << " times." << endl;

    } if (x.Q > 0){
        cout << "Q appears " << x.Q << " times." << endl;

    } if (x.R > 0){
        cout << "R appears " << x.R << " times." << endl;

    } if (x.S > 0){
        cout << "S appears " << x.S << " times." << endl;

    } if (x.T > 0){
        cout << "T appears " << x.T << " times." << endl;

    } if (x.U > 0){
        cout << "U appears " << x.U << " times." << endl;

    } if (x.V > 0){
        cout << "V appears " << x.V << " times." << endl;

    } if (x.W > 0){
        cout << "W appears " << x.W << " times." << endl;

    } if (x.X > 0){
        cout << "X appears " << x.X << " times." << endl;

    } if (x.Y > 0){
        cout << "Y appears " << x.Y << " times." << endl;

    } if (x.Z > 0){
        cout << "Z appears " << x.Z << " times." << endl;
    }
}

int main(int argc, const char * argv[]) {
    ifstream infile;
    ofstream outfile;
    infile.open("infile.txt");
    outfile.open ("outfile.txt");
    FileController(infile,outfile);
    infile.close();
    outfile.close();
    return 0;
}
void FileController(ifstream& ifile, ofstream& ofile){
    LetterCounter counter;
    int numLines =  copyToOFile(ifile, ofile, counter);
    print(counter, numLines);
    
}
int  copyToOFile(ifstream& ifile, ofstream& ofile, LetterCounter& counter){
    
    int num = -1;   //to account for repeated last line
    string word;
    
    while(!ifile.eof())
    {
        if (ifile.eof()){break;}
        getline(ifile, word);
        counter.count(word); 
        ofile << word << "\n";
        
        num++;
    }
    
    return num;
}


void LetterCounter::count(string word){
    int len = word.length();
    char array [len];
    strcpy(array, word.c_str());
    
    for (int i = 0; i < len; i++){
        switch(array[i]){
            case 'A':A++; break;
            case 'a': A++;break;
                
            case 'B' : B++;break;
            case 'b' : B++; break;
                
            case 'C' : C++; break;
            case 'c' : C++; break;
            
            case 'D' : D++; break;
            case 'd' : D++; break;
            
            case 'E' : E++; break;
            case 'e' : E++; break;
            
            case 'F' : F++; break;
            case 'f' : F++; break;
                
            case 'G' : G++; break;
            case 'g' : G++; break;
                
            case 'H' : H++; break;
            case 'h' : H++; break;
            
            case 'I' : I++; break;
            case 'i' : I++; break;
                
            case 'J' : J++; break;
            case 'j' : J++; break;
                
            case 'K' : K++; break;
            case 'k' : K++; break;
                
            case 'L' : L++; break;
            case 'l' : L++; break;
                
            case 'M' : M++; break;
            case 'm' : M++; break;
                
            case 'N' : N++; break;
            case 'n' : N++; break;
                
            case 'O' : O++; break;
            case 'o' : O++; break;
                
            case 'P' : P++; break;
            case 'p' : P++; break;
                
            case 'Q' : Q++; break;
            case 'q' : Q++; break;
                
            case 'R' : R++; break;
            case 'r' : R++; break;
                
            case 'S' : S++; break;
            case 's' : S++; break;
                
            case 'T' : T++; break;
            case 't' : T++; break;
                
            case 'U' : U++; break;
            case 'u' : U++; break;
                
            case 'V' : V++; break;
            case 'v' : V++; break;
                
            case 'W' : W++; break;
            case 'w' : W++; break;
                
            case 'X' : X++; break;
            case 'x' : X++; break;
                
            case 'Y' : Y++; break;
            case 'y' : Y++; break;
                
            case 'Z' : Z++; break;
            case 'z' : Z++; break;
            
        }
    }
    
    
}






