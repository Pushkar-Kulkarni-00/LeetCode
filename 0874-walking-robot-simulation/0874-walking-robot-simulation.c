#define SIZE 20000

typedef struct Node{
    long long key;
    struct Node* n;
}node;

long long makekey(int x,int y){
    return ((long long)(x+30000) <<16 | (y+30000));
}

void ins(node * table[],int x,int y){
    long long key=makekey(x,y);
    int idx=key%SIZE;

    node * nn=(node*)malloc(sizeof(node));
    nn->key=key;
    nn->n=table[idx];
    table[idx]=nn;
}

int rot(int d,int val){
    if(val==-1)d=(d+1)%4;
    else {
        d--;
        if(d<0)d=3;
    }
    return d;
}

int search(node * t[],int x,int y){
    long long sk=makekey(x,y);
    int i=sk%SIZE;
    node *c=t[i];
    while(c){
        if(c->key==sk)return 1;
        c=c->n;
    }
    return 0;
}


int robotSim(int* commands, int commandsSize, int** obstacles, int obstaclesSize, int* obstaclesColSize) {
    node* table[SIZE]={0};
    for(int i=0;i<obstaclesSize;i++){
        ins(table,obstacles[i][0],obstacles[i][1]);
    }
    int x=0;
    int y=0;
    int d=0;
    int max=0;
    for(int i=0;i<commandsSize;i++){
        if(commands[i]<0)d=rot(d,commands[i]);
        else{
            int j=0;
            switch(d){
                case 0:{
                    for(j=y+1;j<=y+commands[i];j++){
                        if(search(table,x,j))break;
                    }
                    y=j-1;
                    break;
                }
                case 1:{
                    for(j=x+1;j<=x+commands[i];j++){
                        if(search(table,j,y))break;
                    }
                    x=j-1;
                    break;
                }
                case 2:{
                    for(j=y-1;j>=y-commands[i];j--){
                        if(search(table,x,j))break;
                    }
                    y=j+1;
                    break;
                }
                case 3:{
                    for(j=x-1;j>=x-commands[i];j--){
                        if(search(table,j,y))break;
                    }
                    x=j+1;
                    break;
                }
            }
        }
        int lmax=x*x+y*y;
        if(lmax>max)max=lmax;
    }
    return max;
}