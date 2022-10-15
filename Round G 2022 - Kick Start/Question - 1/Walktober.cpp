#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    int t=1;
    while(T--) {
        int M,N,P;
        cin>>M>>N>>P;
        int mat[M][N];
        for(int i=0;i<M;i++) {
            for(int j=0;j<N;j++) {
                cin>>mat[i][j];
                }
            }
            int shortSteps=0;
            for(int i=0;i<N;i++) {
                int maxi =0;
                for(int j=0;j<M;j++) {
                    if(maxi < mat[j][i]) {
                        maxi = mat[j][i];
                        }
                    }
                    shortSteps += maxi - mat[P-1][i];
                }
            cout<<"Case #"<<t<<": "<<shortSteps<<endl;
        t++;
    }
    return 0;
}