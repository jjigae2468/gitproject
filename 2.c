// #정점의 개수 V, 간선 개수 E
// # E개의 줄에는 각 간선의 정보를 나타내느 세 정수 A B C
// # A, B가 가중치 C로 연결
// # 가중치 음수 가능
#include <stdio.h>
#define MAX_V 10001
#define MAX_E 100001

typedef struct Node{
    int vertex;
    int weight;
    struct Node* nextnode;
} Node;

typedef struct{
    int vertex;
    int weight;
} HeapNode;

Node* adj[MAX_V];
int visited[MAX_V];
HeapNode minHeap[MAX_E * 2];
int heapSize = 0;
//간선 추가하는 함수랑
//힙에 데이터 삽입하는거랑..
//힙에서 최솟값도 꺼내야겟네
//이정도면 될듯?
//간선 추가하는 함수
void addEdge(int v, int u, int w){
    Node* newNode = //아 크기 어케 정하지
    newNode->vertex = v;
    newNode->weight = w;
    newNode->nextnode = adj[u];
    adj[u] = newNode;

    newNode = //아 크기 ㅋㅋ;
    newNode->vertex = u;
    newNode->vertex = w;
    newNode->nextnode = adj[v];
    adj[v] = newNode;
}

void push(int v, int w){
    
}

int main(){
    int V, E;
    scanf("%d %d", &V, &E); //V, E 입력받고
    //간선 1,2를 1로 가중치가 되게끔 입력받아야하는데
    //heap쓰자 ㅇㅇ;
    for (int i = 0; i < E; i++){
        scanf("%d %d %d", 
    }
}