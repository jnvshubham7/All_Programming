#include <bits/stdc++.h>
using namespace std;
#define A 0
#define B 1
#define C 2
#define D 3
#define E 4
#define F 5
#define G 6
#define H 7
#define I 8
#define L 9
#define M 10
#define N 11
#define O 12
#define P 13
#define R 14
#define S 15
#define T 16
#define U 17
#define V 18
#define Z 19


int h[20] =

    {366, 0,   160, 242, 161, 178, 77,  151, 226, 244,
     241, 234, 380, 98,  193, 253, 329, 80,  199, 374};

struct node {
  int g;
  int h;
  int f;
  int name;
  node(int name, int g, int h) {
    this->name = name;
    this->g = g;
    this->h = h;
    this->f = g + h;
  };
  bool operator<(const node &a) const { return f < a.f; }
};

class Graph {
public:
  Graph() { memset(graph, -1, sizeof(graph)); }
  int get(int from, int to) { return graph[from][to]; }
  void add(int from, int to, int cost) {
    if (from >= 20 || from < 0 || to >= 20 || to < 0)

      return;
    graph[from][to] = cost;
  }
  void init() {
    add(O, Z, 71);
    add(Z, O, 71);

    add(O, S, 151);
    add(S, O, 151);
    add(Z, A, 75);
    add(A, Z, 75);

    add(A, S, 140);
    add(S, A, 140);

    add(A, T, 118);
    add(T, A, 118);

    add(T, L, 111);
    add(L, T, 111);

    add(L, M, 70);
    add(M, L, 70);
    add(M, D, 75);
    add(D, M, 75);

    add(D, C, 120);
    add(C, D, 120);
    add(C, R, 146);
    add(R, C, 146);

    add(S, R, 80);
    add(R, S, 80);

    add(S, F, 99);
    add(F, S, 99);

    add(F, B, 211);
    add(B, F, 211);
    add(P, C, 138);
    add(C, P, 138);

    add(R, P, 97);
    add(P, R, 97);

    add(P, B, 101);
    add(B, P, 101);

    add(B, G, 90);
    add(G, B, 90);

    add(B, U, 85);
    add(U, B, 85);
    add(U, H, 98);
    add(H, U, 98);

    add(H, E, 86);
    add(E, H, 86);
    add(U, V, 142);
    add(V, U, 142);

    add(I, V, 92);
    add(V, I, 92);

    add(I, N, 87);
    add(N, I, 87);
  }

private:
  int graph[20][20];
};
bool list[20];

vector<node> openList;
bool closeList[20];
stack<int> road;
int parent[20];
void A_star(int goal, node &src, Graph &graph) {
  openList.push_back(src);
  sort(openList.begin(), openList.end());

  while (!openList.empty()) {
    node cur = openList[0];
    if (cur.name == goal)
      return;
    openList.erase(openList.begin());
    list[cur.name] = false;
    closeList[cur.name] = true;
    for (int i = 0; i < 20; i++) {
      if (graph.get(cur.name, i) != -1 && !closeList[i]) {
        if (list[i]) {
          int j = 0;
          for (int j = 0; j < openList.size(); j++) {
            if (openList[j].name == i)
              break;
          }
          int cost = cur.g + graph.get(cur.name, i);
          if (cost < openList[j].g) {
            openList[j].g = cost;
            openList[j].f = cost + openList[j].h;
            parent[i] = cur.name;
          }
        } else {
          node newNode(i, graph.get(cur.name, i), h[i]);

          parent[i] = cur.name;
          openList.push_back(newNode);
          sort(openList.begin(), openList.end());
          list[i] = true;
        }
      }
    }
  }
}

void print_result(Graph &graph) {
  int p = openList[0].name;
  int lastNodeNum;
  road.push(p);
  while (parent[p] != -1) {
    road.push(parent[p]);
    p = parent[p];
  }
  lastNodeNum = road.top();
  int cost = 0;
  cout << "solution: ";
  while (!road.empty()) {
    cout << road.top() << "-> ";
    if (road.top() != lastNodeNum) {
      cost += graph.get(lastNodeNum, road.top());
      lastNodeNum = road.top();
    }
    road.pop();
  }
  cout << "end" << endl;
  cout << "cost:" << cost;
}
int main() {
  Graph graph;
  graph.init();
  int goal = B;
  node src(A, 0, h[A]);
  list[A] = true;
  memset(parent, -1, sizeof(parent));
  memset(list, false, sizeof(list));
  A_star(goal, src, graph);
  print_result(graph);
  return 0;
}
