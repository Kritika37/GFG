#include<iostream>
#include<algorithm>
using namespace std;

class edge {
	public:
	int x,y,w;
};

bool compare(edge e1,edge e2){
	return e1.w < e2.w;
}

int findPar(int V,int *parent){
	if(parent[V] == V){
		return V;
	}
	return findPar(parent[V],parent);
}

void kruskal(edge* input,int V,int E){
	sort(input,input+V,compare);

	edge* out = new edge[V-1];
	int *parent = new int[V];
	for(int i=0; i < V;i++){
			parent[i] = i;
		}

	int count =0;
	int i = 0;
	while(count!=V-1){
		edge currentedge = input[i];
		int xP = findPar(currentedge.x,parent);
		int yP = findPar(currentedge.y,parent);

		if(xP != yP){
		out[count] =  currentedge;
		count++;
		parent[xP] =  yP;	
		}
		i++;
	}
	for(int i = 0;i < V-1;i++){
		if(out[i].x < out[i].y){
		cout<<out[i].x << " " << out[i].y<< " "<< out[i].w << endl;
	}
else
{
cout<<out[i].y << " " << out[i].x<< " "<< out[i].w << endl;
}
}
}


int main(){
	int V,E;
	cin>> V >> E;
	edge* input = new edge[E];
	for(int i=0;i<E;i++){
		int x,y,w;
		cin>> x >> y >> w;
		input[i].x = x;
		input[i].y = y;
		input[i].y = w;
	}
	kruskal(input,V,E);
	}



