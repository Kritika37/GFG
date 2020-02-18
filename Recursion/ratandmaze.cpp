
void pathutil(int x, int y,int n,int m[MAX][MAX],vector<string> &v){

if(x == n-1 && y == n-1){
	return 
}
if(x < 0)
pathutil(x,y+1); //up

pathutil(x+1,y); //right
cout << "R";
pathutil(x-1,y); //left
cout << "L";
pathutil(x,y-1); //down
cout << "D";
}






vector<string> printPath(int m[MAX][MAX], int n)
{
    int x =0;
    int y =0;
    vector <string> v;
    string s = "";
    pathutil(x,y,n,m,v,s);
    return v;
}