#include <iostream>
#include <fstream>
using namespace std;
#define DIM 100
struct nodo {
	int row;
    int col;
	nodo* next;
};
typedef nodo* lista;
lista pila;

bool vuota () {
	return (pila == NULL);    
}



void init() {
	pila = NULL;
}


bool top (int &row,int& col) {
	
	bool risultatoOperazione;
	if (vuota()) {
		risultatoOperazione = false;
	}
	else {
		row=pila->row;
        col=pila->col;
		risultatoOperazione = true;
	}
	return risultatoOperazione;
}


bool push (int row, int col) {

	bool risultatoOperazione;
	lista nuovoNodo = new (nothrow) nodo;
	if (nuovoNodo==NULL) {
		risultatoOperazione = false;
	}
	else {
        nuovoNodo->row=row;
        nuovoNodo->col=col;
		nuovoNodo->next = pila;
		pila = nuovoNodo;
		risultatoOperazione = true;
	}
	return risultatoOperazione;
}


bool pop () {
	
	bool risultatoOperazione;
	if (vuota()) {
		risultatoOperazione = false;
	}
	else {
		lista primoNodo = pila;
		pila = pila->next;
		delete primoNodo;
		risultatoOperazione = true;
	}
	return risultatoOperazione;
}

    
void deinit() {
	while (pop()) {
		;
	}
}

bool solve(int **labirinto, int startrow, int startcol, int endrow, int endcol,int lcol,int lrow);
bool is_access(int lcol,int lrow,int col,int row);


int main() {
    fstream in;
    in.open(R"(./input.txt)",ios::in);
    if(in.fail()){
        exit(1);
    }
    int** labirinto;
    labirinto = new int*[DIM];
    for(int i=0;i<DIM;i++){
        labirinto[i] = new int[DIM];
    }
    int startrow;
    int startcol;
    in >> startcol;
    in >> startrow;
    int endcol;
    int endrow;
    in >> endcol;
    in >> endrow;
    char c;
    int col=0,row=0;
    while(in.get(c)){
        if(c=='\n'){
            row++;
            col=0;
        }else{
            if(c=='0'){
                labirinto[col][row]=0;
                col++;
            }else{
                labirinto[col][row]=1;
                col++;
            }
        }
    }
    cout << solve(labirinto,startrow,startcol,endrow,endcol,DIM,DIM);
    return 0;
}
bool is_access(int lcol,int lrow,int col,int row){
    if(col<0 || row<0 || lcol<=col || lrow<=row){
        return false;
    }
    return true;
}


bool solve(int **labirinto, int startrow, int startcol, int endrow, int endcol,int lcol,int lrow) {
    init();
    bool flag = true;
    bool prev;
    int currow=startrow,curcol=startcol;
    if(labirinto[startcol][startrow]==0 || labirinto[endcol][endrow]==0){
        return false;
    }else{
        push(curcol,currow);
        labirinto[curcol][currow]=0;
    }
    while(!(curcol==endcol && currow==endrow) && flag){
        top(curcol,currow);
        prev=false;
        labirinto[curcol][currow]=0;
        if(is_access(lcol,lrow,curcol-1,currow)){
            if(labirinto[curcol-1][currow]==1){
                push(curcol-1,currow);
                prev=true;
            }
        }
        if(!prev){
            if(is_access(lcol,lrow,curcol,currow-1)){
                if(labirinto[curcol][currow-1]==1){
                    push(curcol,currow-1);
                    prev=true;
                }
            }
        }
        if(!prev){
            if(is_access(lcol,lrow,curcol+1,currow)){
                if(labirinto[curcol+1][currow]==1){
                    push(curcol+1,currow);
                    prev=true;
                }
            }
        }
        if(!prev){
            if(is_access(lcol,lrow,curcol,currow+1)){
                if(labirinto[curcol][currow+1]==1){
                    push(curcol,currow+1);
                    prev=true;
                }
            }
        }
        if(!prev){
            if(vuota()){
                flag=false;
            }else{
                pop();
            }
        }
    }
    deinit();
    return flag;
}
