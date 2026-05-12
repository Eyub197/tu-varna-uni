#include <iostream>

using namespace std;

int main() {
  // int q, *pq;
  // pq = &q;
  // cout << "pq=" << pq << endl;
  // cout << "&q=" << &q << endl;
  // q = 10;
  // cout << "q=" << q << endl;
  // cout << "*pq=" << *pq << endl;
  // *pq = 20;
  // cout << "q=" << q << endl;
  // cout << "*pq=" << *pq << endl;
  // cout << "&pq=" << &pq << endl;

  // int q, *pq;
  // pq = &q;
  // cout << "pq=" << pq << endl;
  // pq++;
  // cout << "pq=" << pq << endl;
  // float qf, *pqf;
  // pqf = &qf;
  // cout << "pqf=" << pqf << endl;
  // pqf++;
  // cout << "pqf=" << pqf << endl;
  // double qd, *pqd;
  // pqd = &qd;
  // cout << "pqd=" << pqd << endl;
  // pqd++;
  // cout << "pqd=" << pqd << endl;

  // int q, *pq;
  // pq = &q;
  // *pq = 20;
  // (*pq)++;
  // cout << "q=" << q << endl;
  // cout << "*pq=" << *pq << endl;
  // *pq += 1;
  // cout << "q=" << q << endl;
  // cout << "*pq=" << *pq << endl;
  // ++*pq;
  // cout << "q=" << q << endl;
  // cout << "*pq=" << *pq << endl;

  int *pa, a[3] = {10, 20, 30};
  pa = a;
  cout << *pa << "\t" << *(pa + 1) << "\t" << *(pa + 2) << endl;
  cout << *a << "\t" << *(a + 1) << "\t" << *(a + 2) << endl;
  cout << a[0] << "\t" << a[1] << "\t" << a[2] << endl;
}
